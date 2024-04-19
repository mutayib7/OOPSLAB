// overload a function to add two numbers

# include <iostream>
using namespace std;

int add(int,int);
float add (float, float);
double add (double, double);
string add (string, string);

int main()
{
	
	cout<<add(2,3)<<endl;
	cout<<add(2.1f,3.2f)<<endl;
	cout<<add(2.345678,3.1235)<<endl;
	cout<<add("Hello", "world")<<endl;
}

int add (int x, int y)
{
	return x+y;
}
float add (float x, float y)
{
	return x+y;
}
double add (double x, double y)
{
	return x + y;
}
string add (string x, string y)
{
	return x + y;
}


