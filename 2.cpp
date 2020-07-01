#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
class Persontype{
string Fname;
string Mname;
string Lname;
public:
Persontype(){};
Persontype(string F, string M, string L)
{
    Fname=F;
    Mname=M;
    Lname=L;
}
void setfname(string f)
{
    Fname=f;
}
void setlname(string l)
{
    Lname=l;
}
void setmname(string m)
{
    Mname=m;
}
void checkf(string F)
{
    if (Fname==F)
    {
        cout<<"First Name Is Same";
    }
    else 
    {
        cout<<"First Name Is Not Same";
    }
}
void checkl(string L)
{
    if (Lname==L)
    {
        cout<<"Last Name Is Same";
    }
    else 
    {
        cout<<"Last Name Is Not Same";
    }
}

};


int main()
{
    
    Persontype P1;
    string f,m,l;
    while(1)
    {
     cout<<"Welcome To Name Setter";
     cout<<"\nKindly choose from the following";
     cout<<"\n1)Set First Name\n2)Set Middle Name\n3)Set Last Name\n4)Check First Name\n5)Check Last Name\n6)Exit\n";
     getch();
     if ((getch()=='1'))
        {
            cout<<"Enter First Name: ";
            cin>>f;
            P1.setfname(f);
            cout<<"\nPress Any Key To Continue";
            getch();
            system("cls");
        }
     else if ((getch()=='2'))
        {
            cout<<"Enter Middle Name: ";
            cin>>m;
            P1.setmname(m);
            cout<<"\nPress Any Key To Continue";
            getch();
            system("cls");
        }
     else if ((getch()=='3'))
        {
            cout<<"Enter Last Name: ";
            cin>>l;
            P1.setlname(l);
            cout<<"\nPress Any Key To Continue";
            getch();
            system("cls");
        }   
     else if ((getch()=='4'))
        {
            cout<<"Enter First Name to check : ";
            cin>>f;
            P1.checkf(f);
            cout<<"\nPress Any Key To Continue";
            getch();
            system("cls");
        } 
    else if ((getch()=='5'))
        {
            cout<<"Enter Last Name to check: ";
            cin>>l;
            P1.checkl(l);
            cout<<"\nPress Any Key To Continue";
            getch();
            system("cls");
        }
    else if ((getch()=='6'))
        {
            cout<<"Exiting";
            exit(1);
        }
}
}