# include <iostream>
using namespace std;

class point
{
private:	
	int x;
	int y;
public:
	point(int a = 0, int b = 0): x(a), y(b){}
	point operator+(point n)
	{
		return point (x + n.x, y + n.y);
	}
	void operator+=(point n)
	{
		x = x + n.x;
		y = y + n.y;
	}
	int operator<(point n)
	{
		return(x < n.x && y < n.y);
	}
	void showpoint()
	{
		cout<<x<<y<<endl;
	}
		
};

int main()
{
	point p1(10,20), p2(20,30);
	
	point p3 = p1 + p2;
	p3.showpoint();
	
	int a = p1 < p2;
	if(a)
		cout<<"p1 < p2"<<endl;
	else
		cout<<"p1 > p2"<<endl;
	p1+=p2;
	p1.showpoint();		
}
