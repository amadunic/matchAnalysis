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
	cv::namedWindow("Output", 1);
	cv::imshow("Output", iFrame);
}