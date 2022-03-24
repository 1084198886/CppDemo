//
// Created by Administrator on 2022/3/21.
//
/**
 * 读取单个字符
 */
#ifndef C__DEMO_CREADCHAR_H

void readCharTest() {
    cout << "stard read chars..." << endl;
    int c = 0;
//    freopen("demo.txt", "r", stdin);  //将标准输入重定向为 test.txt
    FILE *f = fopen("./demo.txt", "r");
    char ch[10];
//    std::size_t size = fread(ch, sizeof(char), 5, f);
//    cout << "read size=" << size << endl;

//    while ((c = cin.get()) != EOF) {
////        cout << c;
//        cout.put(c);
//    }

/**
 * 读取一行字符串
 */

    char szBuf[20];
    int n = 100;
    if (!cin.getline(szBuf, 6)) {//如果输入流中一行字符超过5个，就会出错
        cout << "error" << endl;
    }
    cout << szBuf << endl;
    cin >> n;
    cout << n << endl;
   cin.clear();

    cin >> n;
    cout << n << endl;


}

#define C__DEMO_CREADCHAR_H

#endif //C__DEMO_CREADCHAR_H
