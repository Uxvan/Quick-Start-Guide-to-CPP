#include <iostream>

//1.写一个函数 void swap(int& a, int& b),用引用实现交换两个变量的值,在main里验证
void swap(int& a, int& b){
    int c;
    c=a;
    a=b;
    b=c;
}

int main(){
    int a=10,b=20;
    swap(a,b);
    if (a==20 && b==10) {
        std::cout << "successful" << std::endl;
    } else {
        std::cout << "faileed" << std::endl;
    }
    return 0;
}

//2.写一个函数 int* findMax(int arr[], int size),返回数组中最大值的地址,在main里解引用打印出最大值
int* findMax(int arr[], int size){
    int* m=&arr[0];
    for (int i=1; i<size; i++){
        if (arr[i] > *m) m=&arr[i];
    }
    return m;
}

int main(){
    int arr[]={1,2,3};
    int size=3;
    int result=*findMax(arr,size);
    std::cout << result << std::endl;
    return 0;
}

