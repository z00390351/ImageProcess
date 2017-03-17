// opencvTest.cpp : 定义控制台应用程序的入口点。
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


	////用于显示的原始图像和直方图均衡图像
	//char* source_window = "Source image";
	//char* equalized_window = "Equalized Image";

	// const char* imagename = "H:\\图像项目\\project\\opencvTest\\lena.jpg";

	////从文件中读入图像
	//Mat src = imread(imagename);

	////如果读入图像失败
	//if(src.empty())
	//{
	//	fprintf(stderr, "Can not load image %s\n", imagename);
	//	return -1;
	//}

	////直方图均衡
	//Mat dst;

	///// 转为灰度图
	//cvtColor(src, src, CV_BGR2GRAY);

	///// 应用直方图均衡化
	//equalizeHist( src, dst );

	///// 显示结果
	//namedWindow( source_window, CV_WINDOW_AUTOSIZE );
	//namedWindow( equalized_window, CV_WINDOW_AUTOSIZE );

	//imshow( source_window, src );
	//imshow( equalized_window, dst );

	//imshow("xx",abs(src-dsc));

	////此函数等待按键，按键盘任意键就返回
	waitKey();
	//return 0;
}

