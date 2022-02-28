#include <iostream>
#include "cnamespace.h"
#include "cheader.h"
#include "cinout.h"
#include "cbool.h"
#include "newdelete.h"
#include "inlinetest.h"
#include <cstdio>

int main() {
    std::cout << "Hello, World!" << std::endl;
//    namespaceTest();
//    cppHeaderTest();
//    inOutTest();
    boolTest();
    newdelete();
    inlineTest(1, 2);
    return 0;
}
