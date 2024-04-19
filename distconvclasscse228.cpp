# include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;
public:
    Distance():feet(0), inches(0){}
    Distance(int f, int i) : feet(f), inches(i){}
    void display()
    {
        cout<<feet<<" feet "<<"and"<<" "<<inches<<" "<<" inches"<<endl;
    }
    Distance operator+(Distance d)
    {
        Distance temp;
        temp.inches = inches + d.inches;
        if(temp.inches > 12.0)
        {
            temp.feet++;
            temp.inches-=12;
        }
        temp.feet= temp.feet + feet + d.feet;
        return temp;
    }       
};
int main()
{
    Distance d1(12,10);
    Distance d2(12,3);
    Distance d3;
    d3 = d1 + d2;
    d3.display();
}