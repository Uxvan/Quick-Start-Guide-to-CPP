#include <iostream>

//1. 读入一个整数,判断奇偶并输出
int main(){
    int num;
    std::cin >> num;
    if (num%2==0){
        std::cout << "even" << std::endl;
    } else {
        std::cout << "odd" << std::endl;
    }
    return 0;
}

//2. 写一个函数 int factorial(int n) 计算阶乘,再写一个 main 调用它并输出结果
int factorial(int n){
    if (n>1){
        return n * factorial(n-1);
    } else {
        return 1;
    }
}

int main() {
    int n;
    std::cout << "input a integer: " << std::endl;
    std::cin >> n;

    int result=factorial(n);
    std::cout << result << std::endl;
    return 0;
}

//3. 写两个同名函数 max,一个处理两个int,一个处理两个double
int max(int a, int b) {
    if (a>b) {
        return a;
    } else {
        return b;
    }
}

double max(double a, double b){
    if (a>b) {
        return a;
    } else {
        return b;
    }
}
