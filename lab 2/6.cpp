
#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Input the number of elements to store in the array:";
   cin>>n;
   cout<<"Input "<<n<<" elements in the array "<<endl;
   int b[n],c[n],d=0,e=0,l=0;
   for(int a=0;a<n;a++)
   {
       cout<<"element:"<<a<<":";
       cin>>b[a];
   }
   cout<<"The unique elements found in the array are:";
   for(int a=0;a<n;a++)
   {
       d=0;
       for(int m=0;m<n;m++)
       {
           if(a!=m)
           {
           if(b[m]==b[a])
           {
              d++;
              break;
           }
           }
       }
       if(d==0)
       {
           l=1;
           cout<<b[a]<<" ";
       }
   }
}

