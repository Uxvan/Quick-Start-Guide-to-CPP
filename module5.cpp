#include <iostream>

//1.写一个函数模板 T sum(T a, T b, T c),返回三个数之和,分别用int和double测试
template <typename T>
T sum(T a,T b,T c){
    T sum=a+b+c;
    return sum;
}

//2.写一个类模板 Pair<T1, T2>(注意这里是两个类型参数),包含两个私有成员first和second,构造函数初始化,再写一个方法void print()打印两者,
//  在main里创建一个Pair<int, std::string>测试
template <typename T1, typename T2>
class Pair{
private:
    T1 first;
    T2 second;
public:
    Pair(T1 t1, T2 t2) {first=t1; second=t2;};
    void print(){
        std::cout<< first << second << std::endl;
    }
};

int main(){
    std::cout << sum(1,2,3) << sum(1.5,2.0,2.5) << std::endl;
    Pair<int, std::string> p(1,"abc");
    p.print();
    return 0;
}