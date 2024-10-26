#include<iostream>
using namespace std;
class node
{public:
    int data;
    node* next;

 node(int data)
{this-> data=data;
  next=NULL;
}

};
void insertedhead(node* &head, int data)
{ node* node1= new node(data);
node1->next =head;
head=node1;

}
void inserttail(node* &head, int data)
{node* node2=new node(data);
node* temp=head;
while(temp->next!=NULL)
{
    temp=temp->next;
}
//temp has reach last node
temp->next= node2;

}
void insertpossition(node* &head, int data, int pos)
{if(pos==0)
{
    insertedhead(head, data);
    return;
}
node* node3=new node(data);
node* temp=head;
int current_pos=0;
while(current_pos!=pos-1)
{
    temp=temp->next;
    current_pos++;
}
//temp is pointing to node at pos-1;
node3->next=temp->next;
temp->next=node3;

}
void updatepossition(node* &head, int k, int data)
{
    node* temp=head;
    int curr_pos=0;
    while(curr_pos!=k)
    {
        temp=temp->next;
        curr_pos++;
    }
    temp->data=data;
}
void delethead(node* &head)
{
node* temp=head;
head=head->next;
free(temp);
}
void delettail(node* &head)
{
    node* second_last=head;
    while(second_last->next->next!=NULL)
    {second_last=second_last->next;
}
//now second_last points to second_last node
node* temp =second_last->next;//node to be the delete
second_last->next=NULL;
free(temp);
}
void deletpossition(node* &head, int pos)
{
    if(pos==0)
    {
        delethead(head);
        return;
    }
    int curr_pos=0;
    node* prev=head;
    while(curr_pos!=pos-1)
    {
        prev=prev->next;
        curr_pos++;
    }
    //prev is pointing to node at pos-1
    node* temp =prev->next;
    prev->next=prev->next->next;
    free(temp);
}
 void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"null"<<endl;
}
int main()
{ node* hasan=new node(5);
cout<<hasan->data<<" "<<hasan->next<<endl;
node* head=NULL;
insertedhead(head, 2);
display(head);
insertedhead(head, 5);
display(head);
inserttail(head , 9);
display(head);
insertpossition(head , 40,1);
display(head);
updatepossition(head, 1,35 );
display(head);
delethead(head);
display(head);
delettail(head);
display(head);
deletpossition(head, 1);
display(head);



}
