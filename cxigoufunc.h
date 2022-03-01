//
// Created by Administrator on 2022/3/1.
//
/**
 * 析构函数
 */

#ifndef C__DEMO_CXIGOUFUNC_H
using namespace std;


class VLB {
private:
    string m_name;
public:
    VLB(string name);

    ~VLB();

    void show();
};

VLB::VLB(string name) : m_name(name) {

}

VLB::~VLB() {
    printf("~VLB has invoked\n");
}

void VLB::show() {
    cout << "VLB: " << m_name << endl;
}

class VLA {
public:
    VLA(int len);

    ~VLA();

    VLB *vlb = NULL;

    void input(); // 初始化数组元素

    void show();

private:
    int m_len;//数组长度
    int *m_arr; //数组指针
    int *m_p; //指向数组第i个元素的指针

    int *at(int i); //获取第i个元素的指针
};


VLA::VLA(int len) : m_len(len) {
    if (len > 0) {
        m_arr = new int[len];
    } else {
        m_arr = NULL;
    }
}

VLA::~VLA() {  // 析构函数
    printf("!VLA has invoked \n");
    delete[] m_arr;
    if (!vlb) {
        cout << "vlb is null" << endl;
    } else {
        cout << "vlb is not null" << endl;
        delete vlb;
    }
}

void VLA::input() {
    for (int i = 0; m_p = at(i); ++i) {
        *m_p = i + 1;
    }
}

int *VLA::at(int i) {
    if (!m_arr || i < 0 || i >= m_len) {
        return NULL;
    }
    return m_arr + i;
}

void VLA::show() {
    for (int i = 0; i < m_len; ++i) {
        if (i == m_len - 1) {
            cout << *at(i) << endl;
        } else {
            cout << *at(i) << ",";
        }
    }
}


void xigouFunc() {
    VLA *p = new VLA(6);
    p->input();
    p->show();

//    p->vlb = new VLB("VLB zhangsan");
//    p->vlb->show();
    delete p;
}

#define C__DEMO_CXIGOUFUNC_H

#endif //C__DEMO_CXIGOUFUNC_H
