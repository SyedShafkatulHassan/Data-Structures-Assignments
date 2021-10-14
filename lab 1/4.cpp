#include<iostream>
using namespace std;
#define pie 3.1416
float circale(float a);
int main()
{
   float a;
   cin>>a;
   circale(a);
   cout<<"area of circle : "<<circale(a);
}
float circale(float a)
{
    return a*a*pie;
}
