//
// Created by Administrator on 2022/3/4.
//
/**
 * template模板
 */
#ifndef C__DEMO_CTEMPLATE_H

//声明函数模板
template<typename T, typename S>
void Swap(T &a, T &b, S &c) {
    T tmp;
    tmp = a;
    b = a;
    a = tmp;
}

#define C__DEMO_CTEMPLATE_H

#endif //C__DEMO_CTEMPLATE_H
