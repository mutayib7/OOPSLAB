# include <iostream>
using namespace std;

int add(int x, int y);
float add(float x, float y);
double add(double x, double y);
string add(string x, string y);

int main()
{
	cout<<add(2,3)<<endl;
	cout<<add(2.1f,3.3f)<<endl;
	cout<<add(3.14235, 6.34765)<<endl;
	cout<<add("Hello", "World")<<endl;
}
int add(int x, int y)
{
	return x+y;
}
float add(float x, float y)
{
	return x+y;
}
double add(double x, double y)
{
	return x+y;
}
string add(string x, string y)
{
	return x+y;
}
