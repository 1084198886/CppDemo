//
// Created by Administrator on 2022/3/29.
//
/**
 * get() put() 操作文件
 */
#ifndef C__DEMO_GETPUTFILE_H
#define C__DEMO_GETPUTFILE_H

void getputTest() {
    /**
     * 写入单个字符
     */
//    ofstream outFile("E:\\out.txt", ios::out | ios::binary);
//    outFile.put('A');
//    outFile.put('B');
//    outFile.put('|');
//    outFile.put('C');
//    outFile.put('|');
//    outFile.put('D');
//    outFile.close();

    /**
     * 读取单个字符
     */
    ifstream inFile("E:\\out.txt", ios::in | ios::binary);
    int c1 = inFile.get();
    int c2 = inFile.get();
    int c3 = inFile.get();
    printf("get char=%c  %c  %c\n", c1, c2, c3);
    inFile.close();

    /**
     * 读取单行字符串
     */
    ifstream inFile2("E:\\out.txt", ios::in | ios::binary);
    char array[4];
//    inFile2.getline(array, 4);  //读取一行字符串，最多不超过 3 个
//    printf("line=%s\n", array);

    char array2[40];
    inFile2.getline(array2, 40, '|');
    printf("line2=%s\n", array2);
    cout<<array2<<endl;

    /**
     * 读取多行字符串
     */
//    while (inFile2.getline(array2, 40)) {
//        cout << array2 << endl;
//    }
    inFile2.close();
}

#endif //C__DEMO_GETPUTFILE_H
