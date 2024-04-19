# include <iostream>
using namespace std;
class beta;
class alpha
{
    private: int x;
    public:
    alpha():x(5){}
    friend int add(alpha, beta);
};
class beta
{
    private: int y;
    public:
    beta():y(2){}
    friend int add(alpha, beta);
};
int add(alpha p,beta q)
{
    return p.x + q.y;
}

int main()
{
    alpha d;
    beta e;
    cout<<add(d,e)<<endl;

}
