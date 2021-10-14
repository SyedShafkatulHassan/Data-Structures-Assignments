#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    struct  node* next,*prev;

} node;
struct node* head;

int n;

node *creatnode(node *qq, int data)
{
    node *w=new node;
    if(w==NULL)
    {
        exit(1);
    }
    w->data=data;
    w->next=qq;
    w->prev=qq;
    return w;
}

void add_node(int x)
{
    struct node* temp = creatnode(NULL, x);;
    if(head==NULL)
    {
        temp->next=NULL;
        head=temp;
        temp->prev=head;

    }
    else
    {
        struct node* temp2=head;
        while(temp2->next!=NULL)
        {
            temp2=temp2->next;
        }
        temp2->next=temp;
        temp->prev=temp2;
        temp->next=NULL;
    }
}

void insertAtBeginning(int x)
{
    node *new_node=creatnode(NULL, x);
    new_node->next=head;
    head->prev=new_node;
    head = new_node;
    return;
}

void print()
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void insertAtAnyPosition(int x,int pos)
{
    if(pos==0)
    {
        insertAtBeginning(x);
    }
    else if(pos == n){
        add_node(x);
    }
    else if(pos>n || pos<0){
        cout<<"Invalid index access. Not available\n";
    }
    else
    {
        struct node* temp = creatnode(NULL, x);;


        if(head==NULL)
        {
            temp->next=NULL;
            head=temp;
            temp->prev=head;
        }
        else
        {
            struct node* temp2=head;

            struct node* temp3=temp2->next;
            int i=0;
            for(i=0; i<pos-1; i++)
            {
                temp2=temp2->next;
                temp3=temp2->next;
            }
            temp->next=temp3;
            temp3->prev=temp->next;
            temp2->next=temp;
            temp->prev=temp2;
        }
    }


}


int main()
{

    cout << "Total elements: " << endl;

    cin >> n;
    cout <<"Give "<<n<<" elements: "<<endl;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        add_node(a);
    }

    int pos;
    cout<<"Input position: ";
    cin>>pos;
    int item;
    cout<<"Give an item to insert at position: ";
    cin>>item;
    insertAtAnyPosition(item, pos);

    printf(" After Insertion at any Position  ");
    print();
}
