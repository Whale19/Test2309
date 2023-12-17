#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

// 全局变量用于保存亮度和对比度的值
int brightnessValue = 50;
int contrastValue = 50;

Mat img;  // 图像

// 回调函数，用于调整图像的亮度和对比度
void updateImage(int, void*) {
    Mat adjustedImage;
    
    // 计算亮度和对比度的调整参数
    double alpha = contrastValue / 50.0;
    double beta = brightnessValue - 50;

    // 应用亮度和对比度的调整
    img.convertTo(adjustedImage, -1, alpha, beta);

    // 显示调整后的图像
    imshow("Adjusted Image", adjustedImage);
}

int main() {
    // 加载图像
    img = imread("source/photo.JPG");

    // 检查图像是否成功加载
    if (img.empty()) {
        cout << "Error: Could not open or find the image!" << endl;
        return -1;
    }

    // 创建一个新的窗口并设置大小
    namedWindow("Adjusted Image", WINDOW_NORMAL);
    resizeWindow("Adjusted Image", img.cols, img.rows);

    // 创建滑动条并绑定回调函数
    createTrackbar("Brightness", "Adjusted Image", &brightnessValue, 100, updateImage);
    createTrackbar("Contrast", "Adjusted Image", &contrastValue, 100, updateImage);

    // 初始调整
    updateImage(0, 0);

    // 等待用户按下任意键退出程序
    waitKey(0);

    return 0;
}
