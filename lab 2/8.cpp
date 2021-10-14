#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Input the number of elements to store in the array:";
    cin>>n;
    cout<<"Input "<<n<<" elements in the array "<<endl;
    int b[10000]={0},c[10000];
    for(int a=1;a<=n;a++)
    {
        cout<<"element:"<<a<<":";
        cin>>c[a];
    }
    for(int a=1;a<=5000;a++)
    {
        b[c[a]]++;
    }
    for(int a=1;a<=5000;a++)
    {
        if(b[a]>0)
        {
            cout<<a<<"  occurs  "<<b[a]<<"  times\n";
        }
    }
}
