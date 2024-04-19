// Q3 ambiguos function
# include <iostream>
using namespace std;

int square (int);
float square (float);

int main()
{
	cout<<square(2)<<endl;
	cout<<square(4.1)<<endl; //write 4.1f to avoid ambigous error
}

int square(int x)
{
	return x * x;
}
float square (float x)
{
	return x * x;
}
