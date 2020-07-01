#include <iostream>
#include <string>
#include <conio.h>
#include <string.h>
using namespace std;
class Membertype
{
string name; 
int memberID;
int nb;
int amount;
public:
Membertype(){};
Membertype(string p,int i, int book, int amt)
{
    name=p;
    memberID=i;
    nb=book;
    amount=amt;
}
void setname(string n)
{
    name=n;
}
string getname()
{
    return name;
}
void modifyname()
{
    string na;
    cout<<"\nEnter Name To modify: ";
    cin>>na;
    name=na;
}
void displayname()
{
    cout<<"Name: "<<name;   
}
void setnb(int x)
{
    nb=x;
}

int getnb()
{
    return nb;
}
void upnb(int x)
{
    nb=nb+x;
}
void modnb()
{
    cout<<"Enter Number Of Books Bought: ";
    int bk;
    cin>>bk;
}
void dispb()
{
    cout<<"Number of Books are: "<<nb;
}
void amts()
{
    amount=nb*4;                     //$4 per book
}
int getamt()
{
    return amount;
}
};

int main()
{
    Membertype M1;
string n;
int b,x;
    while(1){
    cout<<"Welcome to Book Store\n";
    cout<<"1)Set Name\n2)Modify Name\n3)Display Name\n4)Update Books Number\n5)Modify Book Numbers\n6)Display Book Number\n7)Display Amount\n";
    cout<<"Press the option";
    getch();
    if(getch()=='1')
    {
        cout<<"Enter Name: ";
        cin>>n;
        M1.setname(n);
        getch();
        system("cls");
    
        
    }
    else if(getch()=='2')
    {
        cout<<"Enter Name to change it: ";
        cin>>n;
        M1.setname(n);
        getch();
        system("cls");
    
    }    
    else if(getch()=='3')
    {
        M1.displayname();
        getch();
        system("cls");
    
    }
    else if(getch()=='4')
    {
        cout<<"Number of More Books: ";
        cin>>b;
        M1.upnb(b);
        getch();
        system("cls");
    
    }
    else if(getch()=='5')
    {
        // cout<<"Enter Number Of Books: ";
        // cin>>x;
        M1.modnb();
getch();
        system("cls");
    
    }
    else if(getch()=='6')
    {
        M1.dispb();
        getch();
        system("cls");
    
    }
    else if(getch()=='7')
    {
        M1.amts();
        cout<<"Amount= $"<<M1.getamt();
        
        getch();
        system("cls");
    }
    else
    { 
    exit(1);
    }

    }
}