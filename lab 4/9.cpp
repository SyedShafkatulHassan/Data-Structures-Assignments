#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    struct  node* next,*prev;

} node;
struct node* head;

int n;

node *creatnode(node *p, int data)
{
    node *n=new node;
    if(n==NULL)
    {
        exit(1);
    }
    n->data=data;
    n->next=p;
    n->prev=p;
    return n;
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


void print()
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void delete_node(int x)
{
    int len = n;
    int f=0;
    struct node* temp = head;
    for(int i=0; i<n; i++){
        int data = temp->data;
        if(data==x){
            if(len == 1){
                head = NULL;
            }
            else if(f == 0){
                head = temp->next;
                head->prev = head;
            }
            else if(temp->next == NULL){
                struct node* temp_prev = temp->prev;
                temp_prev->next = NULL;
            }
            else{
                struct node* temp_prev = temp->prev;
                struct node* temp_next = temp->next;
                temp_next->prev = temp->prev;
                temp_prev->next = temp->next;
            }
            len--;
        }
        else{
            f = 1;
        }
        temp = temp->next;
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
    cout<<"Input number to delete: ";
    cin>>pos;
    delete_node(pos);

    printf("After Deleting the number:  ");
    print();

    return 0;
}
