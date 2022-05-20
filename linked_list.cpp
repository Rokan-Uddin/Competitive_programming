//use push and pop_first for FIFO(queue)
//use push and pop_last for LIFO(stack)
#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node *next;
};
struct node *head;
void push(int val) {
    struct node *ptr,*tem;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL) cout<<"Overflow"<<endl;
    if(head==NULL) {
        ptr->next=NULL;
        ptr->data=val;
        head=ptr;
    }
    else {
        tem=head;
        while(tem->next!=NULL) {
            tem=tem->next;
        }
        tem->next=ptr;
        ptr->data=val;
        ptr->next=NULL;
    }
}
void pop_last() {
    struct node *ptr,*ptr1;
    ptr=head;
    while(ptr->next!=NULL) {
        ptr1=ptr;
        ptr=ptr->next;
    }
    ptr1->next=NULL;
}
void pop_first() {
    if(head==NULL) cout<<"Empty\n"<<endl;
    else head=head->next;
}
void display() {
    struct node *ptr=head;
    while(ptr!=NULL) {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
int main() {
    push(5);
    push(358);
    push(7);
    display();
    pop_first();
    pop_last();
    display();
}
