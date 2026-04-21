#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data=value;
        next=nullptr;
    }
};

void display(Node *head){
    Node *temp;
    temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;

    }

}

int search(Node *head,int target){
    Node *temp;
    temp=head;
    while(temp!=nullptr){
        if(target==temp->data){
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}


Node *insertatbeginning(Node *head, int value){
    Node *newnode=new Node(value);
    newnode->next=head;
    return newnode;
    
}

Node *insertatend(Node *head,int value){
    Node *newnode=new Node(value);
    if(head==nullptr){
        newnode->next=head;
        return newnode;
    }
    Node *temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newnode;
    return head;
}

Node *insertaftervalue(Node *head,int target,int value){
    Node *newnode=new Node(value);
    if(head==nullptr){
        newnode->next=head;
        return newnode;
    }
    Node *temp=head;
    while(temp!=nullptr && temp->data!=target){
         temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    return head;
}

int main(){
    Node *head=nullptr;
    head=insertatbeginning(head,10);
    head=insertatend(head,20);
    head=insertaftervalue(head,10,50);
    display(head);


}