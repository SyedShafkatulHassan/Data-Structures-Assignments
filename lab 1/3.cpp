#include<iostream>
using namespace std;
int hi(int b);
int main()
{
    int b;
    cout<<"please enter the value of n:";
    cin>>b;
    cout<<endl;
    hi(b);
    cout<<"summation of numbers (1-n) is: "<<hi(b)<<endl;
}
int hi(int b)
{
    if(b>=0)
    {
     return hi(b-1)+b;
    }
    return 0;
}
