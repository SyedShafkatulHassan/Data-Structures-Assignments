#include<iostream>
using namespace std;
int main()
{
   int n,s,k=0,l=0;
   cout<<"Enter array size:";
   cin>>n;
   int b[n],c[s],d=0,e=0,f[100];
   cout<<"Enter a sorted array "<<endl;
   for(int a=0;a<n;a++)
   {
       cout<<"element:"<<a<<":";
       cin>>b[a];
   }
   cout<<"Input the value to be inserted :";
   for(int a=n;a<n+1;a++)
   {
       cin>>b[a];
   }
   cout<<"Input the Position, where the value to be inserted:";
   cin>>k;
   for(int a=0;a<n+1;a++)
   {
       if(a==k)
       {
           cout<<b[n]<<" ";
           l=1;
           continue;
       }
       else
       {
           if(l==1){
           cout<<b[a-1]<<" ";
           }
           else
           {
               cout<<b[a]<<" ";
           }
       }
   }
}
