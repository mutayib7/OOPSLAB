# include <iostream>
# include <iomanip.h>
using namespace std;
class time12
{
private:
    int hours;
    int minutes;
    string p;
public:
    time12(int h, int m, string s):hours(h), minutes(m),p(s){}    
    void display()
    {
        cout<<hours<<":"<<minutes<<" "<<p<<endl;
    }    
};
class time24
{
private:
    int hours;
    int minutes;
public:
    time24(int h = 0, int m = 0): hours(h), minutes(m){}
    void display()
    {
        cout<<hours<<":"<<minutes<<endl;
    }        
    operator time12()
    {   
        string t;
        int hr12;
        if(hours > 12)
            hr12 = hours - 12;
        else
            hr12 = hours;
        if(hours>=12)
            t = "PM";
        else
             t = "AM"; 
      return time12(hr12,minutes,t);                 
    }
    
};


int main()
{
    cout<<setw(5)<<"Hello"<<endl;
    
    time24 T24(17,56);
    time12 T12 = T24;
    T12.display();
}