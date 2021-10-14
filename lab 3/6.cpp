#include<iostream>
#include<bits/stdc++.h>
using namespace std;
   struct dates{
     int day;
     int month;
     int year;
   };
int main()
{
    int n,d,m,y;
    cout<<"Enter the total date number:";
    cin>>n;
    struct dates s[n];
    for(int a=0;a<n;a++)
    {
    system("CLS");
    cout<<a<<endl;
    cout<<"Enter the day:";
    cin>>s[a].day;
    //system("CLS");
    cout<<endl;
    cout<<"Enter the month:";
    cin>>s[a].month;
    cout<<endl;
    cout<<"Enter the year:";
    cin>>s[a].year;
    }
    system("CLS");
    cout<<"Enter date you want to compire:"<<endl<<endl;
    cout<<"Enter the day:";
    cin>>d;
    cout<<"Enter the month:";
    cin>>m;
    cout<<"Enter the year:";
    cin>>y;
    for(int p=0;p<n;p++)
    {
        if(s[p].day==d && s[p].month==m && s[p].year==y)
        {
             cout<<"Dates are equal";
             break;
        }
        else
        {
            cout<<"Dates are not equal";
            break;
        }
    }
}

