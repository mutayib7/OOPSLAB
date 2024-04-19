# include <iostream>
using namespace std;

class counter
{
private:
	static int c;
public:
	
	
	int getcount()
	{
		c++;
		return c;
	}	
};
int counter:: c = 0;

int main()
{	
	counter c1,c2,c3;
	cout<<c1.getcount();
	cout<<c2.getcount();
	cout<<c3.getcount();  
}
