# include <iostream>
# include <cmath>
using namespace std;

float area(float l, float b);
float area(float b, float h, float a);
int area(int l);
float area(float r);

int main()
{
	cout<<area(2.0,3.0)<<endl;
	cout<<area(4)<<endl;
	cout<<area(1.0f)<<endl;
	cout<<area(2.1,3.2,4.1);	
}

float area(float l, float b)
{
	return l*b;
}
int area(int l)
{
	return l*l;
}
float area(float r)
{
	return 3.14*r*r;
}
float area(float b, float h, float a)
{
	float s = (b+h+a)/2;
	return sqrt(s*(s-a)*(s-b));
}
