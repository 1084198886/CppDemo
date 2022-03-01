//
// Created by Administrator on 2022/3/1.
//
/**
 * 对象数组
 */
#include <cmath>

#ifndef C__DEMO_CLASSARRAY_H
using namespace std;

class Circle {
private:
    double radius; // Circle radius
    int centerX, centerY; // Center coordinates
public:
    Circle() {
        radius = 1.0;
        centerX = centerY = 0;
    }

    Circle(double r) {
        radius = r;
        centerX = centerY = 0;
    }

    Circle(double r, int x, int y) {
        radius = r;
        centerX = x;
        centerY = y;
    }

    double findArea() {
        return 3.14 * pow(radius, 2);
    }
};

void objArray() {
    Circle arr[3] = {Circle(), Circle(1.0), Circle(1.0, 22, 4)};
    cout << "findArea:" << arr[0].findArea() << endl;
}

#define C__DEMO_CLASSARRAY_H

#endif //C__DEMO_CLASSARRAY_H
