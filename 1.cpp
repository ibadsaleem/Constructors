#include <iostream>
#include <string>
using namespace std;

class daytype{
    string D[7]={"Mon","Tue","Wed","Thurs","Fri","Sat","Sun"};
    int i;
    
    public:
    daytype(){};
    void setday(string day)
    {
        for ( i=0;i<7;i++)
        {
            if(day==D[i])
            break;
        }
    }
    string getcday()
    {
        return D[i];
    }
    string getnday()
    {
        if(i==6)
        {
            return D[0];
        }
        else
        {
        return D[i+1];
        }
    }
    string getpday()
    {
        if (i==0)
        {
            return D[6];
        }
        else 
        return D[i-1];
    }

    void calday(int x)
    {
        int a;
        for (int j=0;j<x;j++)
        {
            i++;
            if(i==7)
            {
                i=0;
            }
        }
        
    }
};

int main()
{
    daytype d1;
    string d;
    cout<<"Enter Today`s Day: ";
    cin>>d;
    d1.setday(d);
    cout<<"Next Day: "<< d1.getnday();
    cout<<"\nPrevios Day: "<<d1.getpday();
    cout<<"\nEnter Number Of Days to go forward: ";
    int n;
    cin>>n;
    d1.calday(n);
    cout<<"Day after "<<n<<" number of days is: "<<d1.getcday();
}