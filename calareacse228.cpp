//2 overload a function call area
# include <iostream>
# include <cmath>
using namespace std;

int calarea(int); // circle
int calarea(int, int); // rectangle
int calarea(int, int, int); // triangle

int main()
{
	cout<<calarea(1)<<endl;
	cout<<calarea(2,3)<<endl;
	cout<<calarea(12,24,36)<<endl;
	
	
	
	
	
}
int calarea(int r)
{
	return 3.14 * r * r;
}
int calarea (int l, int b)
{
	return l * b;
}
int calarea(int b, int h, int a)
{
	int s = (b + h + a)/2;
	return sqrt(s*(s-b)*(s-h));
}
