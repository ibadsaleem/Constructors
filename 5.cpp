#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
class Booktype{                 //class task 3
    string title;
    string author[4];
    string publisher;
    int ISBN;
    int price;
    int year;
    int numberofcopies;
    int numberofauthors;
    int numberofbooks;
    public:
    Booktype(){};
    Booktype(string t,string a, string p, int i,int pr,int y,int nc,int na,string au[],int b)
    {
    title=t;
    author[4]=a;
    publisher=p;
    ISBN=i;
    price=pr;
    year=y;
    numberofcopies=nc;
    numberofauthors=na;
    numberofbooks=b;

    for (int i=0;i<na;i++)
    {
        author[i]=au[i];
    }
}
    void setISBN(int x)
    {
    ISBN=x;
    }
    int getISBN()
    {
        return ISBN;
    }
    void setpub(string x)
{
    publisher=x;
}
    string getp()
    {
        return publisher;
    }
    void setnc(int x)
   {
    numberofcopies=x;
   }
    int getnc()
    {
        return numberofcopies;
    }
    void setna(int x)
   {
    numberofauthors=x;
   }
    int getna()
    {
        return numberofauthors;
    }
    void setpr(int x)
   {
    price=x;
   }
    int getpr()
    {
        return price;
    }
    void sety(int x)
   {
    year=x;
   }
    int gety()
    {
        return year;
    }
    void setti(string t)
    {
        title=t;
    }
    string getti()
    {
        return title;
    }
//     void setnc(int x)
//    {
//     numberofcopies=x;
//    }
//     int getnc()
//     {
//         return numberofcopies;
//     }
    void setnb(int x)
    {
    numberofbooks=x;
    }
    int getnb()
    {
    return numberofbooks;
    }
    void checktitle(string t)
    {
        if (title==t)
        {
            cout<<"title is same";

        }
        else 
        cout<<"title not same";
    }
     void inccp()
    {
      numberofcopies++;
    }  
    
    void deccp()
    {
      numberofcopies--;
    }   
    void addauth(string a)
    {
        if(numberofauthors<4)
        {
            author[numberofauthors]=a;
            numberofauthors++;
        }
    }
    void incnumb()
    {
        numberofbooks++;
    }
    int getnumb()
    {
        return numberofbooks;
    }
    void searchI( Booktype b[])
    {
        cout<<"enter ISBN to search: ";
        int i;
        cin>>i;
            for (int j=0;j<numberofbooks;j++)
            {
                if (i==ISBN)
                {
                    cout<<"Book Found";
                }
                else 
                cout<<"Book Not Found";
            }

    }
    void searchtitle(Booktype b[])
    {
        cout<<"enter title to search: ";
        string i;
        cin>>i;
            for (int j=0;j<numberofbooks;j++)
            {
                if (i==title)
                {
                    cout<<"Book Found";
                }
                else 
                cout<<"Book Not Found";
            }
    }
    void updcp(Booktype b[])
    {
            int bn;
            cout<<"Enter Book Number: ";
            cin>>bn;
            cout<<"Press 1 to increase 2 to decrease";
            getch();
            if (getch()==1)
            {
                b[bn-1].inccp();
            }
            else if(getch()==2)
            {
                b[bn-1].deccp();
            }
            else 
            {
                cout<<"wrong input";
            }

    }

};

class Membertype    //class task 4
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
void setid(int x)
{
    memberID=x;
}
int getid()
{
    return memberID;
}
};
int main()
{
    int nc=0,mm=0,nm=0;
    char a;
    Booktype b1[1000];
    Membertype M1[500];
    for (int i=0;i<1000;i++)
    {
        b1[i].setna(3);
        b1[i].setnb(5);
        b1[i].setpr(100);
        b1[i].setpub("Ibad");
        b1[i].setti("Hello");
        b1[i].setISBN((1000+i));    
        cout<<endl;
    }

    for(int i=0;i<500;i++)
    {
        M1[i].setname("IbadSaleem");
        M1[i].setid((1152+i));
        nc++;
        cout<<"Press 1 for Member Press 2 for Non Member";
        a=getch();
        if(a=='1')
        {
            mm++;
        }
        else if ( a=='2')
        {
            nm++;
        }
    }
    int bk,amt;
    getch();
    system("cls");
    cout<<"Welcome To BookStore\n";
    cout<<"Choose from the following";
    cout<<"1)Purchase Book\n2)Total Amount";
    getch();
    if(getch()=='1')
    {
       bk++; 
    }
    else if (getch()=='2' && a=='1')
    {

        amt=bk*4*0.05;                      //price
    }
    else if(getch()=='2'&& a=='2')
    {
            amt=bk*4;
    }
    cout<<"Number of Books Purchased: "<<bk;
    cout<<"\nAmount: "<<amt;
}





