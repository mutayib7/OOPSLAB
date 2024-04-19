# include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    cout<<"x = "<<*x<<endl;
    cout<<"y=  "<<*y<<endl;
}
int main()
{
    int a = 15, b = 25;
    swap(&a ,&b );

    cout<<"In main function: "<<endl;
    cout<<"a =  "<<a<<endl;
    cout<<"b =  "<<b<<endl;

    return 0;
}