#include <iostream>
#include <memory>
//1. 把模块4练习2里的Circle/Square多态代码,改写成用std::unique_ptr<Shape>而不是原始指针,去掉delete
class Shape{
private:
     double w, h;
public:
    virtual double area(){
        double s=w*h;
        return s;
    }
};

class Square: public Shape{
private:
     double width;
public:
    Square(double w) {width=w;};    //注意赋值顺序，非 w=width
    double area() override{
        double s=width * width;
        return s;
    }
};

class Circle: public Shape{
private:
    double PI=3.14,d;
public:
    Circle(double d) {this->d=d;};    //注意不要写d=d，会造成歧义，用this->明确指明"成员变量的d",而不是参数d
    double area() override{
        double s=PI*d*d/4;
        return s;
    }
};

int main(){    
    std::unique_ptr<Shape> c1= std::make_unique<Circle>(1);
    auto res1=c1->area();
    std::unique_ptr<Shape> c2= std::make_unique<Square>(2);
    auto res2=c2->area();
    std::cout<< res1 << res2 << std::endl;
    
    //2. 写一段代码验证shared_ptr的引用计数行为:创建一个shared_ptr,打印use_count(),再拷贝一份给另一个变量,再打印use_count(),验证是不是变成了2
    std::shared_ptr<Shape> a= std::make_shared<Circle>(1);
    std::shared_ptr<Shape> b=a;
    std::cout<< a.use_count() << std::endl;
    return 0;
}

