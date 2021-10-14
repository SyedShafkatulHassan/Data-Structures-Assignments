#include <bits/stdc++.h>
using namespace std;
int root,arr[1000],maxx=0,q,arr1[1000],y=0,pos;
void tree()
{
    cout<<"Enter the root:";
    cin>>arr[1];
    while(1)
    {
        system("CLS");
        cout<<"Press 1 to go back to end the tree"<<endl;;
        cout<<"Press any other key to continue"<<endl;
        cout<<"Press the key ";
        cin>>q;
        if(q==1)
        {
            break;
        }
        int valu,pos,par,yes;
        cout<<"Enter the value you want to input : ";
        cin>>valu;
        cout<<endl<<"Enter the parents position you want to input : ";
        cin>>pos;
        y++;
        arr1[y]=pos;
        cout<<"Press 1 to inster at the right child and press 2 to insert at the left child : ";
        cin>>yes;
        if(yes==1)
        {
            if(arr[(pos*2)+1]==0)
            {
                arr[(pos*2)+1]=valu;
                q=pos*2+1;
            }
        }
        else
        {
            if(arr[pos*2]==0)
            {
                arr[(pos*2)]=valu;
                q=pos*2;
            }
        }
    }

}
void in(int v)
{

    if((arr[v*2])!=0)
    {
        in(v*2);
    }
    cout<<arr[v]<<" ";
    if((arr[(v*2)+1])!=0)
    {
        in((v*2)+1);
    }
}
int main()
{
     tree();
     in(1);
}

