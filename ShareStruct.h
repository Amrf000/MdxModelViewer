#pragma once

#include <Ogre.h>
#include <iostream>

//����
struct tagVERTEX
{
	float Position[3];
};
//����
struct tagVERTEXNORMAL
{
	float Normal[3];
};
//��������
struct tagTEXCOORD
{
	float UV[2];
};
//��
struct tagFACE
{
	unsigned short VertexIndex[3];
};
//ƽ��
struct tagTRANSLATION
{
	unsigned int dwTime;
	float fTrans[3];
	float fInTan[3];
	float fOutTan[3];
};
//��ת
struct tagROTATION
{
	unsigned int dwTime;
	float fRot[4];
	float fInTan[4];
	float fOutTan[4];
};
//����
struct tagSCALING
{
	unsigned int dwTime;
	float fScale[3];
	float fInTan[3];
	float fOutTan[3];
};

//��������
struct tagBONEMATRIX
{
	unsigned int objectID;
	unsigned int parentID;
	unsigned int translationType;
	unsigned int rotationType;
	unsigned int scalingType;
	unsigned int translationGlobalSeqID;
	unsigned int rotationGlobalSeqID;
	unsigned int scalingGlobalSeqID;
	float pivotPoint[3];
	std::vector<tagTRANSLATION> translation;
	std::vector<tagROTATION> rotation;
	std::vector<tagSCALING> scaling;
	Ogre::Matrix4 matrix;
};
//ʱ��
struct TIME
{ 
	unsigned int start;
	unsigned int end;
	unsigned int time;
};
//ȫ������
struct tagGLOBALSEQ
{
	unsigned int dwDuration;
	unsigned int dwTime;
};
//��������ʱ���
struct tagANIMATION
{
	char  szActionName[80];
	DWORD dwStartTime;
	DWORD dwEndTime;
	float fMoveSpeed;
	DWORD dwFlags;
	float fRarity;
	float fSyncPoint;
	float fRadius;
	float fMin[3];
	float fMax[3];
};
//������Alpha��ʱ��
struct tagALPHATIME
{
	unsigned int time;
	float alpha;
	float inTan;
	float outTan;
};
struct tagTEXTUREIDTIME
{
	unsigned int time;
	unsigned int textureID;
	unsigned int inTan;
	unsigned int outTan;
};
struct tagCOLORTIME
{
	unsigned int time;
	float color[3];
	float inTan[3];
	float outTan[3];
};
//�����嶯��
struct tagGEOSETANIMATION
{
	unsigned int dwFlags;
	unsigned int dwGeosetID;
	float fAlpha;
	float fColor[3];
	unsigned int alphaType;
	unsigned int colorType;
	unsigned int alphaGlobalSeqID;
	unsigned int colorGlobalSeqID;
	std::vector< tagALPHATIME > alpha;
	std::vector< tagCOLORTIME > color;
};
//������
struct tagTEXTUREANIMATION
{
	unsigned int translationType;
	unsigned int rotationType;
	unsigned int scalingType;
	unsigned int translationGlobalSeqID;
	unsigned int rotationGlobalSeqID;
	unsigned int scalingGlobalSeqID;
	float fTrans[3];
	float fRot[4];
	float fScaling[3];
	std::vector<tagTRANSLATION> translation;
	std::vector<tagROTATION> rotation;
	std::vector<tagSCALING> scaling;
};
//Pass
struct tagLAYER
{
	unsigned int FilterMode;
	unsigned int ShadingFlags;
	unsigned int TextureID;
	unsigned int TextureAnimationID;
	unsigned int dwCoordID;
	unsigned int dwAlphaType;
	unsigned int dwTextureIDType;
	unsigned int dwAlphaGlobalSeqID;
	unsigned int dwTextureIDGlobalSeqID;
	float		 fAlpha;
	std::vector<tagALPHATIME>	  alpha;
	std::vector<tagTEXTUREIDTIME> textureID;
};

//������
struct IMAGEINFO
{
	unsigned int  bpp;			   //ͼ�����
	unsigned int  width;		   //ͼ����
	unsigned int  height;		   //ͼ��߶�
	unsigned int  type;            //ͼ������(GL_RGB,GL_RGBA)
	unsigned char *imageData;      //ͼ������
};