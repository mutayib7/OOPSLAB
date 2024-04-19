# include <iostream>
using namespace std;

class counter
{
private:
    int c;
public:
    counter(): c(0){}
    counter(int p): c(p){}
    int getc()
    {
        return c;
    }
    counter operator ++()
    {
        counter temp;
        temp.c = ++c;
        return temp;
    }


};
int main()
{
    counter x;
    cout<<x.getc()<<endl;
    ++x;++x;
    cout<<x.getc()<<endl;
}