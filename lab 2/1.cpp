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
   cout<<endl<<"Elements in array are:";
   for(int a=0;a<n;a++)
   {
       cout<<b[a]<<" ";
   }
   cout<<endl;
}
