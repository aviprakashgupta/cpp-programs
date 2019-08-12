#include<bits/stdc++.h>
using namespace std;
class node{
        public:
        int data;
        node * next;
};
void push(node ** head,int data)
{
    node * t=new node;
    t->data=data;
    t->next = (*head);
    (*head) = t;
    //return (t);
}
bool ispal(node * head)
{
stack<int>st;
node * temp  = head;
while(temp!=NULL)
{
st.push(temp->data);
temp = temp->next;
}
temp = head;
while(!st.empty() && temp!=NULL)
{
if(st.top()!=temp->data)
{
return false;
}
st.pop();
temp = temp->next;
}
return true;
}
void p(node * head)
{
    node * t=head;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t = t->next;
    }
}
int main()
{
    node * head = NULL;
    push(&head,1);
    push(&head,2);
    push(&head,1);

    p(head);
    cout<<"\n";
    cout<<ispal(head);
    return 0;
}
