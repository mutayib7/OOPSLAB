# include <iostream>
# include <cstring>

using namespace std;

class myString
{
private:
    string str;
public:
    myString(string s): str(s){} //constructor
    void display()
    {
        cout<<str<<endl;
    }
    myString operator+(myString p)
    {
        return myString(str + p.str);
    }

};
int main()
{
    myString a1("Hello");
    myString a2(" World");

    myString a3 = a1 + a2;
    a3.display();

}