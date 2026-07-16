#include <memory>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>
#include <algorithm>

//1. 把Shape改成抽象类(纯虚函数),去掉不必要的w/h和构造函数,
//   重新在main.cpp里验证Circle能正常工作(通过Shape*或unique_ptr<Shape>)

class Shape{
public:
    virtual double area()=0; 
    virtual ~Shape() {}  ;
};

class Circle: public Shape{
private:
    double PI=3.14, r;
public:
    Circle (double r1) {r=r1;};
    double area() override{
        double s=PI*r*r;
        return s;
    }
};


//2. 写一个函数double safeDivide(double a, double b),当b为0时抛出异常,在main里用try/catch捕获并打印错误信息

double safeDivide(double a, double b){
    if (b==0) {
        throw std::runtime_error("除数不能为0");
    }
    double c=a/b;
    return c;
}

//3. 用lambda + std::sort,对一个std::vector<std::string>按字符串长度排序(提示:.length()或.size())

int main(){
    std::unique_ptr<Shape> c= std::make_unique<Circle>(1);
    double res= c->area();
    std::cout<< res <<std::endl;

    try{
        double res=safeDivide(1,0);
    } catch (const std::runtime_error& e) {
        std::cout<< "出错了：" << e.what() << std::endl;
    };

    std::vector<std::string> v={"li","wang","zhang","liu"};
    std::sort(v.begin(), v.end(), [](std::string s1, std::string s2) {return s1.size() < s2.size();});

    return 0;
}