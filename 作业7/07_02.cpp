//在终端输入 “./07_02” 执行操作；按esc退出；

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

    // 将图像转换为灰度图
    Mat gray;
    cvtColor(img, gray, COLOR_BGR2GRAY);

    // 将灰度图像二值化
    Mat binary;
    threshold(gray, binary, 128, 255, THRESH_BINARY);

    // 将灰度图像进行高斯模糊处理
    Mat blurred;
    GaussianBlur(gray, blurred, Size(5, 5), 0);

    // 获取屏幕的宽度和高度
    int screenWidth = 1500; 
    int screenHeight = 900; 

    // 计算每个图像窗口的宽度和高度
    int windowWidth = screenWidth / 2;
    int windowHeight = screenHeight / 2;

    // 显示原始图像
    imshow("Original", img);
    moveWindow("Original", 0, 0);  // 将窗口移动到左上角

    // 显示灰度图像
    imshow("Gray", gray);
    moveWindow("Gray", windowWidth, 0);  // 将窗口移动到右上角

    // 显示二值化图像
    imshow("Binary", binary);
    moveWindow("Binary", 0, windowHeight);  // 将窗口移动到左下角

    // 显示高斯模糊图像
    imshow("Blurred", blurred);
    moveWindow("Blurred", windowWidth, windowHeight);  // 将窗口移动到右下角

    // 等待按键
    waitKey(0);
    destroyAllWindows();

    return 0;
}
