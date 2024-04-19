# include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area()
    {
        cout<<"I am parent"<<endl;
    }
};
class Circle: public Shape
{
private:
    float radius;    
public:
    Circle():radius(1){}
    void area() 
    {
        cout<<"Area of circle is: " <<3.14*radius*radius<<endl;
    }   
};
class Rectangle: public Shape
{
private:
    int length;
    int breadth;
public:
    Rectangle():length(2), breadth(4){}
     void area()
     {
        cout<<"Area of Rectangle is: "<<length*breadth<<endl;
     }       
};
int main()
{
   
    Circle c;
    Rectangle r;
   Shape *cir = &c;
   Shape *rec = &r;

    cir->area();
    rec->area();
}