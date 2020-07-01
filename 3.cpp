#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
class Booktype{
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
    void setnc(int x)
   {
    numberofcopies=x;
   }
    int getnc()
    {
        return numberofcopies;
    }
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

int main()
{   
    Booktype B1[100];
    // for (int i=0;i<100;i++)           //for 100;
    // {
    //     B1[i].setISBN("1100");
    //     B1[i].setpub("Ibad");
    //     B1[i].setti("Hello");
    //     B1[i].setpr("100");
    //     B1[i].incnumb();
    // }
    //for test
    B1[0].setISBN(1100);
      B1[0].setpub("Ibad");
         B1[0].setti("Hello");
         B1[0].setpr(100);
         B1[0].incnumb();
         B1[1].setISBN(1101);
            B1[1].setpub("IbadSaleem");
         B1[1].setti("HelloWorld");
         B1[1].setpr(120);
         B1[1].incnumb();
    cout<<"Welcome to Book Database\n";
    cout<<"Press key for following options\n";
    cout<<"1)Search By Title\n2)Search By ISBN\n3)Update Copies\n4)Exit";
    getch();
    if(getch()=='1')
    {
        B1[0].searchtitle(B1);
    }
    else if (getch()=='2')
    {
        B1[0].searchI(B1);
    }
    else if (getch()=='3')
    {
        B1[0].updcp(B1);
    }
    else if (getch()=='4')
    {
        exit(1);
    }
else{
    cout<<"Wrong Input";
}
    
}