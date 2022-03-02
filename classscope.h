//
// Created by Administrator on 2022/3/2.
//
/**
 * 类作用域
 */
#ifndef C__DEMO_CLASSSCOPE_H

class ClasScope {
public:
    typedef int INT;

    static void show();

    void work();

    INT draw(INT value);
};

void ClasScope::show() {
    cout << "show()" << endl;
}

void ClasScope::work() {
    cout << "work()" << endl;
}

ClasScope::INT ClasScope::draw(INT value) {
    cout << "draw:" << value << endl;
    return 0;
}

void classScope() {
    ClasScope cs;
    ClasScope::show();
    cs.work();
    cs.draw(1);
    ClasScope::INT a = 10; // 通过类访问 typedef 定义的类型
    cout << "a=" << a << endl;
}

#define C__DEMO_CLASSSCOPE_H

#endif //C__DEMO_CLASSSCOPE_H
