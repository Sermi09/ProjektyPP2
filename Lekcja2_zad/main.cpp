#include <iostream>

class Circle{
private:
    double R=5;
public:
    Circle(double R){
        std::cout<<"Konstruktor kola o promieniu = "<<R<<std::endl;
        this->set_R(R);
    }
    ~Circle(){
        std::cout<<"Dekonstruktor kola"<<std::endl;
    }
    double area(){
        return R*R*3.14;
    }
    double perimeter(){
        return 2*3.14*R;
    }
    void set_R(double R){
        this->R = R;
    }
    double get_R(){
        return R;
    }
};

class Rectangle{
private:
    double a=2;
    double b=3;
public:
    Rectangle(double a, double b){
        std::cout<<"Konstruktor prostokatu o bokach = "<<a<<" i "<<b<<std::endl;
        this->set_A(a);
        this->set_B(b);
    };
    ~Rectangle(){
        std::cout<<"Dekonstruktor prostokata/kwadratu"<<std::endl;
    }
    Rectangle(double a){
        std::cout<<"Konstruktor kwadratu o boku = "<<a<<std::endl;
        this->set_A(a);
        this->set_B(a);
    };
    double area(){
        return a*b;
    }
    double perimeter(){
        return 2*a+2*b;
    }
    void set_A(double a){
        this->a = a;
    }
    double get_A(){
        return a;
    }
    void set_B(double B){
        this->b = b;
    }
    double get_B(){
        return b;
    }
};

int main() {

    Rectangle rectangle(2,3);
    std::cout<<"Obwod = "<<rectangle.perimeter()<<std::endl;
    std::cout<<"Pole = "<<rectangle.area()<<std::endl<<std::endl;

    Circle circle(5);
    std::cout<<"Obwod = "<<circle.perimeter()<<std::endl;
    std::cout<<"Pole = "<<circle.area()<<std::endl<<std::endl;

    Rectangle square(4);
    std::cout<<"Obwod = "<<square.perimeter()<<std::endl;
    std::cout<<"Pole = "<<square.area()<<std::endl<<std::endl;

    return 0;
}
