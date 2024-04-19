# include <iostream>
# include <process.h>
using namespace std;
template <typename T>
class Stack
{
private:
    int top;
    T st[5];
public:
    Stack():top(-1){}
    void push(T x)
    {
        if(top == 4)
        {
            cout<<"Overflow"<<endl;
            exit(1);
        }
        else
            st[++top] = x;
    }   
    T pop()
    {
        if(top < 0)
        {
            cout<<"Underflow"<<endl;
            exit(1);
        }    
        else
            return st[top--];
    }         
};

int main()
{
    Stack <float> s;
    s.push(10.34);s.push(10.45);s.push(10.765);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
}