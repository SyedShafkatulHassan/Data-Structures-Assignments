#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    int b;
    cout<<"Enter a string : ";
    getline(cin,a);
    b = a.length();
    if(b%3!=0)
    {
        cout<<"Not divisible by 3"<<endl;
    }
    else
    {
        cout<<"Divisible by 3"<<endl;
    }
}

