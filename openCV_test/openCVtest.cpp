// openCVtest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <opencv2/core/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

#include <iostream>
#include <string>

using namespace cv;
using namespace std;



int main(int argc, char** argv)
{
	String imageName("../patrick-star-chibi.jpg");
	if (argc > 1) {
		imageName = argv[1];
	}

	Mat image;

	image = imread(imageName, IMREAD_COLOR); // read the file

	if (image.empty()) { //check for invalid input
		cout << "Could nnot open or find the image" << std::endl;
		return -1;
	}

	namedWindow("Display window", WINDOW_AUTOSIZE); // create a window for display

	imshow("Display window", image);

	waitKey(0);
    return 0;
}

