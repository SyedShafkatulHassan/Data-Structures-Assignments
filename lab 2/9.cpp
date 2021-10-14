#include<iostream>
using namespace std;
int main()
{
    int b[1000],n,ma=0,mi=0;
    cout<<"Input the number of elements to be stored in the array :";
    cin>>n;
    cout<<"Input "<<n<<" elements in the array "<<endl;
    for(int a=0;a<n;a++)
    {
        cout<<"element:"<<a<<":";
        cin>>b[a];
    }
    ma=b[1];
    for(int a=0;a<n;a++)
    {
        if(b[a]>ma)
        {
            ma=b[a];
        }
    }
    cout<<"Maximum element is : " <<ma<<endl;
    mi=b[1];
    for(int a=0;a<n;a++)
    {
        if(b[a]<mi)
        {
            mi=b[a];
        }
    }
    cout<<"Minimum element is : "<<mi;
    return 0;
}

