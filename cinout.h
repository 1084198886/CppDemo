//
// Created by Administrator on 2022/2/22.
//
/**
 * cin  cout 输入输出
 */
#ifndef C__DEMO_CINOUT_H


#define C__DEMO_CINOUT_H

int sum(int n);

#endif //C__DEMO_CINOUT_H

void inOutTest() {
    using namespace std;
    int x, y;
    cout << "Please input an int number and a float number:" << endl;  // endl是换行的意思；
    cin >> x >> y;  // 同时输出2个值
    cout << "x=" << x;
    cout << "y=" << y << endl;

    cout << "sum=" << sum(100)<<endl;
}

int sum(int n) {
    int total = 0;
    for (int i = 0; i < n; ++i) {
        total += i;
    }
    return total;
}