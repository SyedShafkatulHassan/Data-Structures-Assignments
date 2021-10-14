#include <iostream>
using namespace std;
int l=1,r;
struct  node
{
    int data;
    node *next,*p;
};
node *creatnode(node *shafkat, int data)
{
    node *q=new node;
    if(q==NULL)
    {
       exit(1);
    }
    q->data=data;
    q->next=shafkat;
    q->p=shafkat;
    return q;
}
void searchh(node *head, int item)
{
    int c=0;
    node *p=head;
    while(1)
    {
        if(p==NULL)
        {
            break;
        }
        else if(p->data==item)
        {
            l=0;
        cout<<"Iteam found at "<<c<<"  number position"<<endl;
            break;
        }
        c++;
        p=p->next;
    }

    if(l==1)
    {
        cout<<"Item not found"<<endl;
    }
}
int main()
{
    node *head=NULL, *p=head;
    int new_node,m=0,b;
    cout<<"Enter the total Number of element:";
    cin >> new_node;
    cout<<"Enter the value:"<<endl;
    while(new_node--)
    {
        if(m==0)
        {
            cout<<m<<" number element:";
            cin>>b;
            m++;
            head=creatnode(NULL,b);
            p=head;
        }
        else
        {
            cout<<m<<" number element:";
            cin>>b;
            m++;
            p->next=creatnode(NULL,b);
            p=p->next;
        }
    }
    cout<<"Enter the item you want to sarch:";
    cin>>r;
    node *creatnode();
    searchh(head,r);
}

