#pragma once

#include <core/core.hpp>
#include <highgui/highgui.hpp>

class SegmentField
{
public:
	//constructors - destructors
	SegmentField(void);
	~SegmentField(void);

	//get and set frame
	cv::Mat getFrame(void);
	void setFrame(const cv::Mat);
 
	cv::Mat segmentation();
};

