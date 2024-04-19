# include <iostream>
using namespace std;

class counter
{
private:
    static int count;
public:
    counter(){++count;}
    static int getcount()
    {
        return count;
    }

};
int counter::count = 0;

int main()
{
    counter c1, c2, c3;
    cout<<c1.getcount()<<endl;
    cout<<c2.getcount()<<endl;
    cout<<c3.getcount()<<endl;
    counter c4;
    cout<<counter::getcount()<<endl;

}