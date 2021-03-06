#include "stdafx.h"

#include <opencv2/opencv.hpp>
#include <iostream>
#include <stdio.h>

using namespace std;

int main(int, char**)
{
	cv::Mat image;
	image = cv::imread("dog.jpg");
	if (image.empty()) {
		cout << "image is empty" << endl;
	}
	cv::namedWindow("Original Image");
	cout << "This image is " << image.rows << " x " << image.cols << endl;
	cout << "if press any key and enter , process will be terminated" << endl;
	cv::imshow("Original Image", image);

	cv::Mat result;
	cv::flip(image, result, 1);
	cv::namedWindow("Output Image");
	cv::imshow("Output Image", result);

	cv::waitKey(0);
	cv::imwrite("ouput.jpg", result);
	/*
	for (;;)
	{
		std::string str;
		cin >> str;
		if(str.compare("S")==0)
			break;
	}
	*/
	return 0;
}