#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Input the number of elements to store in the array:";
    cin>>n;
   int b[n];
   cout<<"Input "<<n<<" elements in the array "<<endl;
   for(int a=0;a<n;a++)
   {
       cout<<"element:"<<a<<":";
       cin>>b[a];
   }
   cout<<endl<<"The values store into the array are:";
   for(int a=0;a<n;a++)
   {
       cout<<b[a]<<" ";
   }
   cout<<endl<<"The values store into the array in reverse are:";
   for(int a=n-1;a>=0;a--)
   {
       cout<<b[a]<<" ";
   }
   cout<<endl;
}
