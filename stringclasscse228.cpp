# include <iostream>
# include <string.h>
using namespace std;

class addstring
{
public:
	char str[100];
	addstring(){}
	addstring (char str[ ])
	{
		strcpy(this->str, str); 
	}
	
	addstring operator+(addstring n)
	{
		addstring s3;
		strcat(this->str, n.str);
		strcpy(s3.str, this->str);
		
		return s3;
	}
	
};

int main()
{
	char str1[] = "Hello";
	char str2[] = "World";
	
	addstring a1(str1);
	addstring a2(str2);
	
	addstring a3;
	a3 = a1 + a2;
	cout<<a3.str;
}
