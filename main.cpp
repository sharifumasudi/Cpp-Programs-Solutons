//C++ PROGRAM TO CALCULATE THE AREAS
//By Sharif Masoud
#include <iostream>

using namespace std;

class Shape{
public:
    void setValue();
    double area();
    double radius, height, base, side, width, length;
    static const double PI = 3.14;
};

class Cicle : public Shape{
public:
    setValue()
    {
        cout<<"\t\tPlease Enter Radius of the Circle"<<endl;
        cin>>radius;
        return 0;
    }
    double area()
    {
        setValue();// Call Set Value Method
        return ((radius*radius)*PI);
    }
};

class Triange : public Shape{
public:
        void setValue(){
        cout<<"\t\tPlease Enter Height Of the Triangle: ";
        cin>>height;cout<<"\n";
        cout<<"\t\tPlease Enter Base Of the Triangle: ";
        cin>>base;
    };
    double area(){
        setValue();
        return (0.5*(height*base));
    }
};

class Square : public Shape{
public:
    void setValue(){
        cout<<"\t\tPlease Enter The Side of the Square: ";
        cin>>side;
    }

    double area(){
        setValue();
        return (side*side);
    }
};

class Rectange : public Shape{
public:
    void setValue(){
        cout<<"\t\tEnter Length of Rectangle: ";
        cin>>length;
        cout<<"\t\tEnter width of Rectangle: ";
        cin>>width;
    }

    double area(){
        setValue();
        return (length*width);
    }
};
int main()
{
    //Shape s;
    Cicle circle;
    Triange triangle;
    Square s; //Object for Square area
    Rectange rectangle; //Rectangle object
    int opt;
    cout<<"\t\t=============================";
    cout<<"\n\n\t\tPlease Select Option Below\n\t\t=============================\n\t\t01)Area Of Circle\n\n\t\t02)Area of Triangle\n\n\t\t03)Area Of Square\n\n\t\t04)Area Of Rectangle\n";
    cout<<"\t\t";cin>>opt;

    while(opt != 1 && opt != 2 && opt != 3 && opt != 4){ //Validating data Input 1 to 2
        cout<<"\t\tOOPs Input Error Please Try Again\n";
        cout<<"\t\tPlease Select Option Below\n\t\t01)Area Of Circle\n\t\t02)Area of Triangle\n\t\t03)Area Of Square\n\t\t04)Area Of Rectangle\n";        cin>>opt;
    }

    switch(opt){ //Switch For
case 1:
    cout<<"\t\tThe Are Of the Circle is: "<<circle.area()<<endl;
    break;

case 2:
    cout<<"\t\tThe Are Of the Triangle is: "<<triangle.area()<<endl;
    break;
case 3:
    cout<<"\t\tThe Area Of Square is: "<<s.area()<<endl;
    break;
case 4:
cout<<"\t\tThe Area of the Rectangle is: "<<rectangle.area()<<endl;
break;

default:
    break;
    }
    return 0;
}
