#include <iostream>
#include <unordered_set>
using namespace std;

void printUSet(const unordered_set<int>& s) {
    for(unordered_set<int>::const_iterator it = s.begin(); it != s.end(); it++) {
        cout<< *it << " ";
    }
    cout << endl;
}

int main() {
    //1. 默认构造函数
    unordered_set<int> s1;
    cout << "s1: ";
    printUSet(s1);

    //2. 初始化列表
    unordered_set<int> s2_1 = {1,2,3,4,5,6,7,8,9};
    cout << "s2_1: ",
    printUSet(s2_1); //打印出来无序

    unordered_set<int> s2_2({1,2,3,4,5,6,7,8,9,9,9,9,9,9,9});
    cout << "s2_2: ",
    printUSet(s2_2); //打印出来无序

    //3. 迭代器
    unordered_set<int> s3(s2_1.begin(),s2_1.end());
    cout << "s3: ";
    printUSet(s3); //与s2_1不同

    //4. 拷贝构
}