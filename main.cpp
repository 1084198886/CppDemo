#include <iostream>
//#include "cnamespace.h"
//#include "cheader.h"
//#include "cinout.h"
//#include "cbool.h"
//#include "newdelete.h"
//#include "inlinetest.h"
//#include "coveride.h"
#include "candcpp.h"
#include "funcdefaultpara.h"
#include "cppclass.h"
#include "cppclass.h"
#include <cstdio>


int main() {
//    std::cout << "Hello, World!" << std::endl;
////    namespaceTest();
////    cppHeaderTest();
////    inOutTest();
////    boolTest();
////    newdelete();
////    inlineTest(1, 2);
////    funcDefaultPara(1, 2);
////    cOveride();
//    testCAndCpp();
    testCppClass();
    return 0;
}

//int main(int argc, char *args[]) {
//    return 0;
//}


inline int inlineTest(int a, int b) {
    a += b;
    printf("%d\n", a);
    return a;
}
