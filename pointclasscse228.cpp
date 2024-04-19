# include <iostream>
using namespace std;

class point
{
private:
    int x;
    int y;
public:
    point(int a = 0,int  b = 0): x(a), y(b){}
    void showpoint()
    {
        cout<<"x =  "<<x<<" y =   "<<y<<endl;
    }        
    point add(point m);
};
point point:: add(point m)
{
    point temp;
    temp.x = x + m.x;
    temp.y = y + m.y;
    return temp;
}

int main()
{
    point p1(5,3);
    point p2(p1);
    point p3;
    p3 = p1.add(p2);
    p3.showpoint();
}