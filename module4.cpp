#include <iostream>
#include <numbers>

//1. 写一个 Rectangle 类,包含 width 和 height(private),构造函数初始化这两个值,提供一个 area() 方法返回面积
class Rectangle{
private:
    double width,height;
public:
    Rectangle(double w, double h){
        width=w;
        height=h;
    };
    double area(){
        double s=width*height;
        return s;
    }
};


//2. 写一个基类 Shape,包含虚函数 virtual double area(),再写两个子类 Circle 和 Square 各自重写area(),
//   在main里用 Shape* 指针分别指向Circle和Square对象,调用area()验证多态生效
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
    Rectangle r(1.5, 1.0);
    double s=r.area();
    std::cout<< s << std::endl;

    Shape* s1=new Circle(2);
    Shape* s2=new Square(3);
    double res1=s1->area();
    double res2=s2->area();
    std::cout<< "Circle: " << res1 << " Square: " << res2 << std::endl;

    delete s1;
    delete s2;
    return 0;
}