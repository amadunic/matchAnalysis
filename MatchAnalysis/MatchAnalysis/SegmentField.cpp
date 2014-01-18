#include "SegmentField.h"


SegmentField::SegmentField(void)
{
}

SegmentField::SegmentField(const cv::Mat inputFrame)
{
	iFrame = inputFrame; 
}

SegmentField::~SegmentField(void)
{
}

void SegmentField::showFrame()
{
	cv::namedWindow("Current frame", 1);
	cv::imshow("Current frame", iFrame);
}

cv::Mat SegmentField::segmentation(void)
{
	cv::Mat output = iFrame, fillHoles;
	cv::cvtColor(output, output, CV_BGR2HSV);

	cv::inRange(output, cv::Scalar(30, 0, 0), cv::Scalar(90,255,255), output);
	cv::namedWindow("Green only",1);
	cv::imshow("Green only", output);

	cv::Mat element = cv::getStructuringElement( CV_SHAPE_ELLIPSE,
											 cv::Size( 11,11 ),
											 cv::Point( 10, 10) );

	cv::morphologyEx(output, fillHoles, CV_MOP_OPEN, element);
	//cv::namedWindow("Image open",1);
	//cv::imshow("Image open", openDst);

	return output;
}