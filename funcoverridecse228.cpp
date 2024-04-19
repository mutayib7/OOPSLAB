# include <iostream>
# include <process.h>
using namespace std;

class Stack
{
protected:
	int top;
	int st[5];
public:
	Stack():top(-1){}
	void push(int var)
	{	
		cout<<top<<endl;
		st[++top] = var;
	}
	int pop()
	{
		return st[top--];
	}
		
};
class Stack2:public Stack
{
 public:	
	void push(int var)
	{
		if(top+1 > 4)
		{
			cout<<"Overflow"<<endl;
			return;
		}
		else
			Stack:: push(var);
			
	}
	int pop()
	{
		if(top < 0)
		{
			cout<<"Underflow"<<endl;
			exit(1);
		}
		else
		return	Stack:: pop();
			
	}
};

int main()
{
	Stack2 obj;
	obj.push(10);
	//cout<<obj.pop()<<endl;
	obj.push(20);
	obj.push(30);
	obj.push(40);
	obj.push(50);
	obj.push(60);
	obj.push(70);
	obj.push(80);
	
	
	cout<<obj.pop()<<endl;
	cout<<obj.pop()<<endl;
	
	return 0;
}
