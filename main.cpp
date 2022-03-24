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
    fstreamTest();
    return 0;
}

//int main(int argc, char *args[]) {
//    return 0;
//}


//inline int inlineTest(int a, int b) {
//    a += b;
//    printf("%d\n", a);
//    return a;
//}

class  AAAA{
public:
    int a;
    static int b;
    static int say();
     int say2();
};

int AAAA::say() {
    b=3;
    return 0;
}

int AAAA::say2() {
    this->a=3;
    return 0;
}
