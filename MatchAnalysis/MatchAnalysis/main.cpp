#include <iostream>
#include <core/core.hpp>
#include <highgui/highgui.hpp>

#include "SegmentField.h"

using namespace std;

void main()
{
	cout << "Match analysis with OpenCV" << endl;
	cout << "Development branch" << endl;

	cv::Mat inputFrame = cv::imread("Frames/football_field.jpg", CV_LOAD_IMAGE_COLOR);

	if(inputFrame.data)
	{
		SegmentField segmentation(inputFrame);
		segmentation.showFrame();
		cv::waitKey(0);
	}	
	else
	{
		cout << "Could not open the image." << endl;
	}
}