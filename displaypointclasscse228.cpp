# include <iostream>
using namespace std;

class point
{
private:
    int x;
    int y;
public:
    point(): x(0), y(0){}
    point(int a, int b):x(a), y(b){}
    void getpoint()
    {
        cout<<"Enter the value of x and y"<<endl;
        cin>>x>>y;
    }       
    point operator+(point n)
    {
        point temp;
        temp.x  = x + n.x;
        temp.y = y + n.y;
        return temp;
    }
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    point p1, p2, p3;
    p1.getpoint();
    p2.getpoint();
    p3 = p1 + p2;
    p3.display();
}