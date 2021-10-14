#include<iostream>
using namespace std;
int main()
{
   int n,a=0,d[n],sum=0;
   cout<<"Input the number of elements to store in the array:";
   cin>>n;
   int b[n];
   cout<<"Input "<<n<<" elements in the array "<<endl;
   while(a<n)
   {
       cout<<"element:"<<a<<":";
       cin>>b[a];
       a++;
   }
   a=0;
   while(a<n)
   {
       sum=sum+b[a];
       a++;
   }
    cout<<endl<<"Sum of all elements stored in the array is :"<<sum;
   cout<<endl;
}





