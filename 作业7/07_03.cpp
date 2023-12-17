//在终端输入 “./07_03” 执行操作；按esc退出；

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
    // 加载图像
    Mat img = imread("source/photo.JPG");

    if (img.empty()) {
        cerr << "Couldn't load the image" << endl;
        return -1;
    }

    // (1) 检测图像边缘
    Mat edges;
    Canny(img, edges, 50, 150);

    // (2) 进行膨胀操作
    Mat dilated;
    dilate(edges, dilated, Mat(), Point(-1, -1), 2);

    // (3) 进行侵蚀操作
    Mat eroded;
    erode(edges, eroded, Mat(), Point(-1, -1), 2);

    // (4) 改变图像大小，缩放为50%
    Mat resized;
    resize(img, resized, Size(), 0.5, 0.5, INTER_NEAREST);
    
    // 获取屏幕的宽度和高度
    int screenWidth = 1500; 
    int screenHeight = 900; 

    // 计算每个图像窗口的宽度和高度
    int windowWidth = screenWidth / 2;
    int windowHeight = screenHeight / 2;

    // 显示边缘图像
    imshow("Edges", edges);
    moveWindow("Edges", 0, 0);  // 将窗口移动到左上角

    // 显示膨胀图像
    imshow("Dilated", dilated);
    moveWindow("Dilated", windowWidth ,0);  // 将窗口移动到右上角

    // 显示侵蚀图像
    imshow("Eroded", eroded);
    moveWindow("Eroded", 0, windowHeight);  // 将窗口移动到左下角

    // 显示缩放后的图像
    resizeWindow("Resized", resized.cols, resized.rows);
    imshow("Resized", resized);
    moveWindow("Resized", windowWidth, windowHeight);  // 将窗口移动到右下角

    // 显示原始图像
    imshow("Original Image", img);
    moveWindow("Original Image", windowWidth / 2, windowHeight / 2);  // 将窗口移动到中间

    waitKey(0);
    destroyAllWindows();

    return 0;
}
