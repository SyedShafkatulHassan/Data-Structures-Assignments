#include<iostream>
#include<bits/stdc++.h>
using namespace std;
   struct student{
     string name;
     int id;
     string address;
     float mark;
   };
int main()
{
    int n;
    cin>>n;
    struct student s[n];
    for(int a=0;a<n;a++)
    {
    system("CLS");
    cout<<"Enter the student name:";
    cin>>s[a].name;
    //system("CLS");
    cout<<endl;
    cout<<"Enter the student id:";
    cin>>s[a].id;
    cout<<endl;
    cout<<"Enter the student address:";
    cin>>s[a].address;
    cout<<endl;
    cout<<"Enter the student mark:";
    cin>>s[a].mark;
    cout<<endl;
    }
    for(int a=0;a<n;a++)
    {
        cout<<a+1<<endl;
        cout<<"Name:"<<s[a].name<<endl;
        cout<<"ID:"<<s[a].id<<endl;
        cout<<"Address:"<<s[a].address<<endl;
        cout<<"Mark:"<<s[a].mark<<endl;
        cout<<endl<<endl;
    }
}
