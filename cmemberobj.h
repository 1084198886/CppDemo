//
// Created by Administrator on 2022/3/1.
//
/**
 * 成员对象和封闭类
 *
 * 当封闭类对象生成时，先执行所有成员对象的构造函数，在执行封闭类的构造函数；
    //当封闭类的对象消亡时，先执行封闭类的析构函数，在执行成员对象的析构函数。
    //析构函数的调用和构造函数的调用顺序相反。
 */
#ifndef C__DEMO_CMEMBEROBJ_H

using namespace std;

class CTyre {
public:
    CTyre();

    ~CTyre();  //析构函数
};

CTyre::CTyre() {
    cout << "CTyre contructor" << endl;
}

CTyre::~CTyre() {
    cout << "~CTyre contructor" << endl;
}

class CEngine {
public:
    string m_str;

    CEngine();

    CEngine(string str);

    ~CEngine();
};

CEngine::CEngine() {
    m_str = "default engine";
    cout << "CEngine contructor" << endl;
}

CEngine::CEngine(string str) : m_str(str) {
    cout << "CEngine str contructor" << endl;
}

CEngine::~CEngine() {
    cout << "~CEngine contructor" << endl;
}

class CCar { // 封闭类
private:
    CEngine engine;  //成员对象：一个类的成员变量是另一个类的对象。包含成员对象的类叫封闭类。
    CTyre tyre;  //CCar是封闭类，engine和tyre是成员对象。

public:
    CCar();

    ~CCar();

    CEngine getCEngine();
};

CCar::CCar() {
    cout << "CCar contructor" << endl;
}

CCar::~CCar() {
    cout << "~CCar contructor" << endl;
}

CEngine CCar::getCEngine() {
    return engine;
}

void memberObj() {
    CCar car;
    cout << "memberobj: " << car.getCEngine().m_str << endl;
}

#define C__DEMO_CMEMBEROBJ_H

#endif //C__DEMO_CMEMBEROBJ_H
