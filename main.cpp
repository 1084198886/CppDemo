#include <iostream>
//#include "cnamespace.h"
//#include "cheader.h"
//#include "cinout.h"
//#include "cbool.h"
//#include "newdelete.h"
//#include "inlinetest.h"
//#include "coveride.h"
//#include "candcpp.h"
//#include "funcdefaultpara.h"
//#include "cppclass.h"
//#include "cppclass2.h"
//#include "cppclass.h"
#include "cxigoufunc.h"
#include "cxigoufuncinvoke.h"
#include "classarray.h"
#include "cmemberobj.h"
#include "staticmember.h"
#include "constmember.h"
#include "cyouyuanclass.h"
#include "classscope.h"
#include "cppstruct.h"
#include "mycstring.h"
#include "cppquote.h"
#include "cextend.h"
#include "cupcasting.h"
#include "cvirtualfunc.h"
#include "absclass.h"
#include "ctypeid.h"
#include "cflagoveride.h"
#include "ctemplate.h"
#include "cexception.h"
#include "ciostream.h"
#include "coutfmt.h"
#include <cstdio>
#include "creadchar.h"
#include "cfstream.h"
#include "readwritebinaryfile.h"
#include "getputfile.h"
#include "cseekfileptr.h"
//#include "multifileprogram_stu.cpp"
#include "multifileprogram_stu.h"
#include "namespacemain.h"


void multiFileProgram();

int main() {
//    std::cout << "Hello, World!" << std::endl;
//    namespaceTest();
//    cppHeaderTest();
//    inOutTest();
//    boolTest();
//    newdelete();
//    inlineTest(1, 2);
//    funcDefaultPara(1, 2);
//    cOveride();
//    testCAndCpp();
//    testCppClass();
//    testClass2();
//    xigouFunc();
//    xigouFuncInvokeTime();
//    objArray();
//    memberObj();
//    staticMember();
//    constMember();
//    youyuanFuncTest();
//    classScope();
//    cppStruct();
//    stringTest();
//    quoteTest();
//    extendTest();
//    upcastTest();
//    virtualFunc();
//    absClass();
//    typeidTest();
//    flagOverideTest();
//    templateTest();
//    exceptionTest();
//    iostreamTest();
//    coutFmtTest();
//    readCharTest();
//    fstreamTest();
//    readWriteFile();
//    getputTest();
//    seekFilePtr();
    multiFileProgram();
    namespaceTest();
    return 0;
}

/**
    * 多文件编程
    * https://wenku.baidu.com/view/bb5e61870329bd64783e0912a216147917117ee0.html
    */
void multiFileProgram() {
    MyStudent *stu = new MyStudent;
    stu->name = "zhangsan";
    stu->age = 12;
    stu->score = 11.2f;
    stu->say();
    delete stu;  // 释放对象内存；
    cout << "num=" << num << endl;  // 使用头文件中定义的const常量；
    cout << "score=" << score << endl;  // 使用头文件中定义的const常量；
}

//int main(int argc, char *args[]) {
//    return 0;
//}


//inline int inlineTest(int a, int b) {
//    a += b;
//    printf("%d\n", a);
//    return a;
//}
