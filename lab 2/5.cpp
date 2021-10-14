
#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Input the number of elements to store in the array:";
   cin>>n;
   cout<<"Input "<<n<<" elements in the array "<<endl;
   int b[n],c[n],d=0,e=0;
   for(int a=0;a<n;a++)
   {
       cout<<"element:"<<a<<":";
       cin>>b[a];
   }
   for(int a=0;a<n;a++)
   {
       for(int i=1+a;i<n;i++)
       {
           if(a==i)
           {
               continue;
           }
           else if(b[i]==b[a])
           {
              d++;
              break;
           }
       }
   }
   cout<<endl<<"Total number of duplicate elements found in the array is : ";
   cout<<d<<endl;
}
