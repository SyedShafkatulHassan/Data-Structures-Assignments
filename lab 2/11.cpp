#include<iostream>
using namespace std;
int main()
{
    int n,p=0;
    cout<<"Input the number of elements to store in the array:";
    cin>>n;
    int b[n];
    cout<<"Input "<<n<<" elements in the array"<<endl;
    for(int a=0;a<n;a++)
    {
        cout<<"element:"<<a<<":";

        cin>>b[a];
    }
    cout<<"Enter the number of new value you want to input:";
    int c;
    cin>>c;
    cout<<"Enter the  new values:"<<endl;
    for(int a=n;a<n+c;a++)
    {
        cout<<"element:"<<p<<":";
        p++;
        cin>>b[a];
    }
    cout<<endl<<"Before inserting new vale the array:";
    for(int a=0;a<n;a++)
    {
        cout<<b[a]<<" ";
    }
    cout<<endl<<endl;
    cout<<"After inserting new vale the array:";
    for(int a=0;a<n+c;a++)
    {
        cout<<b[a]<<" ";
    }
    cout<<endl<<endl;
}
