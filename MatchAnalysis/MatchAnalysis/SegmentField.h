#pragma once

#include <core/core.hpp>
#include <highgui/highgui.hpp>
#include <imgproc\imgproc.hpp>

class SegmentField
{
private:
	cv::Mat iFrame;

public:
	//constructors & destructors
	SegmentField(void);
	SegmentField(const cv::Mat inputFrame);
	~SegmentField(void);

	//get and set frame
	cv::Mat getFrame(void);
	void setFrame(const cv::Mat);
	void showFrame();
 
	cv::Mat segmentation();
};

