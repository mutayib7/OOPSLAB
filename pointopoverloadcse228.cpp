# include <iostream>
using namespace std;

class point
{
private:
    int x;
    int y;
public:
    point(int a = 0, int b = 0): x(a), y(b){}
    point operator+ (point a);
    void showpt()
    {
        cout<<x<<" "<<y<<endl;
    }
    int operator < (point b)
    {
        if(x < b.x && y < b.y)return 1;
        else
        return 0;
    }
    int operator <=(point d)
    {
        if(x<=d.x && y <=d.y)return 1;
        else
            return 0;
    }

    point operator+=(point q)
    {
        x+=q.x;
        y+=q.y;
        return point(x,y);
    }

};
 point point:: operator+(point a)
 {
   return point(x + a.x, y + a.y);
 }

int main()
{
    point p1(1,2);
    point p2(1,2);
    p1+=p2;
    p1.showpt();

   
}



