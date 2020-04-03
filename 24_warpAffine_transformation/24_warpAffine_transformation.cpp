// 24_warpAffine_transformation.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
int main()
{
	//��ȡ���ص�һ��ͼƬ����ת���ţ�����ʾ����
	cv::Mat dstMat;
	cv::Mat srcMat = imread("C:/Users/lenovo/Desktop/����/1.jpg");
	if (srcMat.empty())return-1;

	//
	const cv::Point2f src_pt[] = {
		cv::Point2f(200,200),
		cv::Point2f(250,200),
		cv::Point2f(200,100)
	};
	//
	const cv::Point2f dst_pt[] = {
	cv::Point2f(300,100),
	cv::Point2f(300,50),
	cv::Point2f(200,100)
	};
		//
	const cv::Mat affine_matrix = cv::getAffineTransform(src_pt, dst_pt);

	cv::warpAffine(srcMat, dstMat, affine_matrix, srcMat.size());

	imshow("src", srcMat);
	imshow("dst", dstMat);
	//�ȴ��û�����
	waitKey(0);
	return 0;
}
