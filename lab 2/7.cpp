#include<iostream>
using namespace std;
int main()
{
   int n,s,k=0;
   cout<<"input the number of elements to be stored in the first array:";
   cin>>n;
   cout<<"Input the number of elements to be stored in the second array:";
   cin>>s;
   int b[n],c[s],d=0,e=0,f[100];
   cout<<"Enter 1st array element:"<<endl;
   for(int a=0;a<n;a++)
   {
       cout<<"element:"<<a<<":";
       cin>>b[a];
   }
   cout<<"Enter 2nd array element:"<<endl;
   for(int a=0;a<s;a++)
   {
       cout<<"element:"<<a<<":";
       cin>>c[a];
   }
   for(int a=0;a<n;a++)
   {
       f[a]=b[a];
       k=a;
   }
   for(int a=0;a<s;a++)
   {
       k++;
       f[k]=c[a];
   }
   d=n+s;
   int shafkat;
   for(int o=0;o<d;o++)
   {
       for(int q=0;q<d-o-1;q++)
       {
           if(f[q]>f[q+1])
           {
               shafkat=f[q];
               f[q]=f[q+1];
               f[q+1]=shafkat;
           }
       }
   }
   cout<<endl<<"The merged array in decending order is :";
   for(int a=0;a<s+n;a++)
   {
       cout<<f[a]<<" ";
   }
}
