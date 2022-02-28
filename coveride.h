//
// Created by Administrator on 2022/2/28.
//
/**
 * C++的重载
 */
#ifndef C__DEMO_COVERIDE_H

void getAttr(int a, int b) {

}
//int getAttr(int a, int b) {
//
//}

void getAttr(int a, int b, char c) {

}


void cOveride() {
    getAttr(1, 3);
    getAttr(2, 3, 'd');
}


#define C__DEMO_COVERIDE_H

#endif //C__DEMO_COVERIDE_H
