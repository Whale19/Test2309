//在终端输入 “./07_01 1” 打开图片；
//输入 “./07_01 2” 打开视频；
//输入 “./07_01 3” 打开摄像头
//按下esc退出

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char** argv) {
    if (argc < 2) {
        cerr << "Usage: " << argv[0] << " <1 for image, 2 for video, 3 for camera>" << endl;
        return -1;
    }

    int choice = stoi(argv[1]);

    if (choice == 1) {
        // (1) 加载并显示一张图像
        Mat img = imread("source/photo.JPG");
        if (!img.data) {
        cout << "Couldn't load the image" << endl;
        return -1;
     } else {
        cout << "Loaded the image" << endl;
        imshow("Image", img);
     }

    int key = waitKey(5000); 

    if (key == 27) {
        destroyAllWindows();
        return 0;
    }

    return 0;
    } else if (choice == 2) {
        // (2) 加载一个视频
        VideoCapture video("source/video.mp4");
        if (!video.isOpened()) {
            cerr << "Error: Could not open the video." << endl;
            return -1;
        }

        while (true) {
            Mat frame;
            video >> frame;
            if (frame.empty()) {
                cerr << "End of video." << endl;
                break;
            }

            imshow("Video", frame);
            int key = waitKey(30);

            if (key == 27) {
                destroyAllWindows();
                return 0;
            }
        }
    } else if (choice == 3) {
        // (3) 开启计算机摄像头
        VideoCapture webcam(0);
        if (!webcam.isOpened()) {
            cerr << "Error: Could not open the webcam." << endl;
            return -1;
        }

        while (true) {
            Mat frame;
            webcam >> frame;
            if (frame.empty()) {
                cerr << "Error: Couldn't capture frame from webcam." << endl;
                break;
            }

            imshow("Webcam", frame);
            int key = waitKey(30);

            if (key == 27) {
                destroyAllWindows();
                return 0;
            }
        }
    } else {
        cerr << "Invalid choice. Use 1 for image, 2 for video, 3 for camera." << endl;
        return -1;
    }

    return 0;
}
