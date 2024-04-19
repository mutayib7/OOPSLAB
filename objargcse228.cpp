# include <iostream>
using namespace std;

class point
{
private:
	int x;
	int y;
public:
	point():x(0), y(0)
	{
	}
	point(int a, int b):x(a), y(b)
	{
	}
	void getpoint();
	void showpoint();
	point addpoint(point n);	
};

void point::getpoint()
{
	cout<<"Enter"<<endl;
	cin>>x>>y;
}

void point:: showpoint()
{
	cout<<x<<" "<<y<<endl;
}
point point:: addpoint(point n)
{
	point temp;
	temp.x = x + n.x;
	temp.y = y + n.y;
	
	return temp;
}

int main()
{
	point p1;
	point p2;
	
	p1.getpoint();
	p2.getpoint();
	
	
	point p3 = p1.addpoint(p2);
	p3.showpoint();
}
