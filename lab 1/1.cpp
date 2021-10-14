#include<iostream>
using namespace std;
void sum();
void minas();
void multiplication();
void division();
void moduluss();
int main()
{
    system("CLS");
    cout<<"press 1 to do summation"<<endl;
    cout<<"press 2 to do subtraction"<<endl;
    cout<<"press 3 to do multiplication"<<endl;
    cout<<"press 4 to do division"<<endl;
    cout<<"press 5 to do modulus operation"<<endl;
    cout<<"press the number:";
    int n;
    cin>>n;
    if(n==1)
    {
        sum();
    }
    else if(n==2)
    {
        minas();
    }
    else if(n==3)
    {
        multiplication();
    }
    else if(n==4)
    {
        division();
    }
    else if(n==5)
    {
        moduluss();
    }
    else
    {
        system("CLS");
        cout<<"Sorry you entered wrong information"<<endl<<"press '1' to back to previous page"<<endl<<"press any other key to exit the program"<<endl;
        int b;
        cin>>b;
        if(b==1)
        {
            main();
        }
    }
}
void sum()
{
    int b,c;
    system("CLS");
    cout<<"Welcome to summation.Now press two value to complete the summation."<<endl;
    cout<<"Enter 1st value:";
    cin>>b;
    cout<<"Enter 2nd value:";
    cin>>c;
    system("CLS");
    cout<<"sum is = "<<b+c<<endl;
    int d;
    cout<<endl<<"Press 1 to go back to previous page"<<endl<<"Press 2  to go to the main program"<<endl<<"press any other key to exit the program"<<endl;
    cout<<"press the number:";
    cin>>d;
    if(d==1)
    {
        sum();
    }
    else if(d==2)
    {
        main();
    }
}
void minas()
{
    int b,c,d,e,f=0;
    system("CLS");
    cout<<"Welcome to subtraction.Now press two value to complete the subtraction."<<endl<<endl;
    cout<<"Enter 1st value:";
    cin>>b;
    cout<<"Enter 2nd value:";
    cin>>c;
    system("CLS");
    cout<<"Press 1 to subtract 2nd value from 1st value"<<endl<<"Press 2 to subtract 1st value from 2nd value"<<endl<<"Press any other key to subtract 2nd value from 1st value"<<endl;
    cout<<"press the number:";
    cin>>e;
    if(e==1)
    {
        f=b-c;
    }
    else if(e==2)
    {
        f=c-b;
    }
    else
    {
        f=b-c;
    }
    system("CLS");
    cout<<"Subtract:"<<f<<endl;
    cout<<endl<<"Press 1 to go back to previous page"<<endl<<"Press 2  to go to the main program"<<endl<<"press any other key to exit the program"<<endl;
    cout<<"press the number:";
    cin>>d;
    if(d==1)
    {
        minas();
    }
    else if(d==2)
    {
        main();
    }
}
void multiplication()
{
    int b,c,d,e,f=0;
    system("CLS");
    cout<<"Welcome to multiplication.Now press two value to complete the multiplication."<<endl<<endl;
    cout<<"Enter 1st value:";
    cin>>b;
    cout<<"Enter 2nd value:";
    cin>>c;
    system("CLS");
    cout<<"multiple is = "<<b*c<<endl;
    cout<<endl<<"Press 1 to go back to previous page"<<endl<<"Press 2  to go to the main program"<<endl<<"press any other key to exit the program"<<endl;
    cout<<"press the number:";
    cin>>d;
    if(d==1)
    {
        multiplication();
    }
    else if(d==2)
    {
        main();
    }
}
void division()
{
    float b,c,d,e,f=0,k=0,n=0;
    system("CLS");
    cout<<"Welcome to division.Now press two value to complete the division."<<endl<<endl;
    cout<<"Enter 1st value:";
    cin>>b;
    cout<<"Enter 2nd value:";
    cin>>c;
    system("CLS");
     cout<<"Press 1 to divide 2nd value by 1st value"<<endl<<"Press 2 to divide 1st value by 2nd value"<<endl<<"Press any other key to divide 2nd value by 1st value"<<endl;
     cout<<"press the number:";
     cin>>d;
     label:
     if(k==1)
     {
         system("CLS");
         cout<<"Sorry! you can not divide something by 0\nPress 1 to enter the first value again \nPress 2 to enter both value\nPress 3 to start the program again\nPress any other value to exit the program"<<endl;
         cout<<"Press the number:";
         int l;
         cin>>l;
         if(l==1)
         {
             cout<<"Enter the number:"<<endl;
             cin>>b;
             system("CLS");
         }
         else if(l==2)
         {
             system("CLS");
             division();
         }
         else if(l==3)
         {
             system("CLS");
             main();
         }
     }
     if(n==1)
     {
         system("CLS");
         cout<<"Sorry! you can not divide something by 0\nPress 1 to enter the first value again \nPress 2 to enter both value\nPress 3 to start the program again\nPress any other value to exit the program"<<endl;
         cout<<"Press the number:";
         int l;
         cin>>l;
         if(l==1)
         {
             cout<<"Enter the number:"<<endl;
             cin>>c;
         }
         else if(l==2)
         {
             system("CLS");
             division();
         }
         else if(l==3)
         {
             system("CLS");
             main();
         }
     }
     if(d==1)
     {
         system("CLS");
         if(b==0)
         {
            k=1;
            goto label;
         }
         else
         {
             cout<<"division = "<<c/b<<endl;
         }
     }
     else if(d==2)
     {
         system("CLS");
         if(b==0)
         {
            n=1;
            goto label;
         }
         else
         {
             cout<<"division = "<<b/c<<endl;
         }
     }
     else
     {
         system("CLS");
         cout<<"division = "<<c/b<<endl;
     }
       cout<<endl<<"Press 1 to go back to previous page"<<endl<<"Press 2  to go to the main program"<<endl<<"press any other key to exit the program"<<endl;
    cout<<"press the number:";
    cin>>d;
    if(d==1)
    {
        division();
    }
    else if(d==2)
    {
        main();
    }
}
void moduluss()
{
    int  b,c,d,e,f=0,k=0,n=0;
    system("CLS");
    cout<<"Welcome to modulus.Now press two value to complete the modulus."<<endl<<endl;
    cout<<"Enter 1st value:";
    cin>>b;
    cout<<"Enter 2nd value:";
    cin>>c;
    system("CLS");
    cout<<"Press 1 to mod 2nd value by 1st value"<<endl<<"Press 2 to mod 1st value by 2nd value"<<endl<<"Press any other key to mod 2nd value by 1st value"<<endl;
     cout<<"press the number:";
     cin>>d;
     system("CLS");
     if(d==1)
     {
       f=b%c;
     }
     else if(d==2)
     {
         f=c%b;
     }
     else
     {
         f=b%c;
     }
     cout<<"Modulus is:"<<f<<endl;
     cout<<endl<<"Press 1 to go back to previous page"<<endl<<"Press 2  to go to the main program"<<endl<<"press any other key to exit the program"<<endl;
    cout<<"press the number:";
    cin>>d;
    if(d==1)
    {
        moduluss();
    }
    else if(d==2)
    {
        main();
    }
}

