#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct student {
  string name;
  int acountnumber;
  //string address;
  int balance;
};
int k=0,y=0,l=0,l2=0;
void s1(student s[],int n)
{
    for(int a=0;a<n;a++)
    {
        if(s[a].balance<200)
        {
            l=1;
            y=1;
            cout<<"Balance:"<<s[a].balance<<",NAME:"<<s[a].name<<",Account number:"<<s[a].acountnumber<<endl;
        }
        y=0;
    }
}
void s2(student s[],int n)
{
    for(int a=0;a<n;a++)
    {
        if(s[a].balance>1000)
        {
            l2=1;
            y=1;
            cout<<"Balance:"<<s[a].balance+100<<",NAME:"<<s[a].name<<",Account number:"<<s[a].acountnumber<<endl;
        }
        y=0;
    }
}
int main()
{
    int n;
    cin>>n;
    struct student s[n];
    for(int a=0;a<n;a++)
    {
    system("CLS");
    cout<<"Enter name:";
    cin>>s[a].name;
    //system("CLS");
    cout<<endl;
    //cout<<"Enter the student id:";
    //cin>>s[a].id;
    //cout<<endl;
    cout<<"Enter acountnumber:";
    cin>>s[a].acountnumber;
    cout<<endl;
    cout<<"Enter balance:";
    cin>>s[a].balance;
    cout<<endl;
    }
    cout<<"Coustomers having balance less then 200:"<<endl;
    s1(s,n);
    if(l==0)
  {
      cout<<"NONE"<<endl;
  }
    cout<<"Coustomers having balance more than 1000:"<<endl;
    s2(s,n);
      if(l2==0)
  {
      cout<<"NONE"<<endl;
  }
}
