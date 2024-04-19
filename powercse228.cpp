# include <iostream>
using namespace std;

double power(double n, int p)
{	
	double result = 1;
	while(p!=0)
	{
		result = result*n;
		p--;	
	}
	return result;
}
double power(double n)
{
	return n*n;
}

int main()
{
	cout<<power(2.0,5)<<endl;
	cout<<power(4.1)<<endl;
}
