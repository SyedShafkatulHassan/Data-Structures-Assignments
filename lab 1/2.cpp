#include<iostream>
#include<math.h>
using namespace std;
int hi(int a,int b);
int main(int a,int b)
{
    cout<<"Enter the value of a :";
    cin>>a;
    cout<<"Enter the value of b :";
    cin>>b;
    cout<<"GCD = "<<hi(a,b);
}
int hi(int a,int b)
{
    if(a<0 || b<0)
    {
        a=abs(a);
        b=abs(b);
    }
    if(b!=false && a<b)
    {
        return hi(a,b%a);
    }
    else if(b!=false && a>b)
    {
        return hi(b,a%b);
    }

}

