# include <iostream>
using namespace std;

int main()
{   
    int size = 5;
    int *ptr = new int[size];
    for(int i = 0; i < size; i++)
    {
        ptr[i] = i * 10;
    }

    for(int i = 0; i < size; i++)
    {
        cout<<ptr[i]<<endl;
    }
    delete[] ptr;

}