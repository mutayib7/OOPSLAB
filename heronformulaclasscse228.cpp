# include <iostream>
# include <cmath>
using namespace std;

class Triangle
{
private:
    int b;
    int h;
    int a;
public:
    Triangle(int x = 1, int y = 1, int z = 1): b(x), h(y), a(z){}
    ~Triangle(){cout<<"Destructor invoked"<<endl;}
    void getSides();
    float area()
    {
        int s = (b+h+a)/2;
        return sqrt(s*(s-b)*(s-h)*(s-a));
    }

};
void Triangle::getSides()
{

}

int main()
{
   Triangle t(10,20,30);
   cout<<t.area()<<endl;

}