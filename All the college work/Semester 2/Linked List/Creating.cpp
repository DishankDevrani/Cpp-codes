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
    Node *Temp;
    Temp=head;
    while(Temp!=NULL){
        cout<<Temp->data<<" ";
        Temp=Temp->next;
    }
}

int search(Node *head,int item){
    Node *temp;
    temp=head;
    while(temp!=NULL){
        if(temp->data==item){
            return(1);
        }
        temp=temp->next;
    }
}

int main(){
    Node *head;
    head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    display(head);

    int target;
    cout<<endl;
    cout<<"Enter target value: "<<endl;
    cin>>target;
    int x;
    x= search(head,target);
    cout<<endl;
    if(x==1){
        cout<<"Found";
    }
    else{
        cout<<"Not found.";
    }
}

//HW: make a function for insertion at beginning and end.