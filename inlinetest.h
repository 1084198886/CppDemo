//
// Created by Administrator on 2022/2/25.
//
/**
 * C++ 内联函数
 */

#ifndef C__DEMO_INLINETEST_H
#define C__DEMO_INLINETEST_H

#endif //C__DEMO_INLINETEST_H

inline int inlineTest(int a, int b) {
    a += b;
    printf("%d\n",a);
    return a;
}