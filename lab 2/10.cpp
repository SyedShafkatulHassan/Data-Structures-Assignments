#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Input the number of elements to store in the array:";
    cin>>n;
    cout<<"Input "<<n<<" elements in the array "<<endl;
    int shafkat[n],b[n],c[n],k=0,l=0;
    for(int a=0;a<n;a++)
    {
         cout<<"element:"<<a<<":";
        cin>>shafkat[a];
    }
    for(int a=0;a<n;a++)
    {
        if(shafkat[a]%2==0)
        {
            b[k]=shafkat[a];
            k++;
        }
        else if(shafkat[a]%2==1)
        {
            c[l]=shafkat[a];
            l++;
        }
    }
    if(k>0){
    cout<<"The Even elements are :";
    for(int a=0;a<k;a++)
    {
        cout<<b[a]<<" ";
    }
    }
    else
    {
        cout<<"";
    }
    cout<<endl;
    if(l>0){
    cout<<"The Odd elements are :";
    for(int a=0;a<l;a++)
    {
        cout<<c[a]<<" ";
    }
    }
    else
    {
        cout<<"There is no odd value.";
    }
}
