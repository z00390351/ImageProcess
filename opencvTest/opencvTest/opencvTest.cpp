// opencvTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "stdlib.h"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <stdio.h>

using namespace cv;
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	const char* imagename1 = "..\\img\\1.jpg";
	const char* imagename2 = "..\\img\\2.jpg";
	
	IplImage * src1 = cvLoadImage(imagename1);
	IplImage * src2 = cvLoadImage(imagename2);

	cvNamedWindow("r1",0);
	cvShowImage("r1",src1);

	cvNamedWindow("r2",0);
	cvShowImage("r2",src2);

	IplImage* diff=cvCreateImage(cvGetSize(src1),src1->depth,src1->nChannels);
	cvAbsDiff(src1,src2,diff);
	cvNamedWindow("r",0);
	cvShowImage("r",diff);


	////������ʾ��ԭʼͼ���ֱ��ͼ����ͼ��
	//char* source_window = "Source image";
	//char* equalized_window = "Equalized Image";

	// const char* imagename = "H:\\ͼ����Ŀ\\project\\opencvTest\\lena.jpg";

	////���ļ��ж���ͼ��
	//Mat src = imread(imagename);

	////�������ͼ��ʧ��
	//if(src.empty())
	//{
	//	fprintf(stderr, "Can not load image %s\n", imagename);
	//	return -1;
	//}

	////ֱ��ͼ����
	//Mat dst;

	///// תΪ�Ҷ�ͼ
	//cvtColor(src, src, CV_BGR2GRAY);

	///// Ӧ��ֱ��ͼ���⻯
	//equalizeHist( src, dst );

	///// ��ʾ���
	//namedWindow( source_window, CV_WINDOW_AUTOSIZE );
	//namedWindow( equalized_window, CV_WINDOW_AUTOSIZE );

	//imshow( source_window, src );
	//imshow( equalized_window, dst );

	//imshow("xx",abs(src-dsc));

	////�˺����ȴ�������������������ͷ���
	waitKey();
	//return 0;
}

