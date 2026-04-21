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
    return 0;
}

Node* insertAtBeginning(Node *head, int value){
    Node *newNode = new Node(value);
    newNode->next=head;
    return newNode;
}


Node* insertAtEnd(Node *head, int value){
    Node *newNode = new Node(value);

    if(head == NULL){
        return newNode;
    }

    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
    return head;
}


Node *insertaftervalue(Node *head, int target, int value){
    Node *newNode=new Node(value);
    if(head==NULL){
        head=newNode;
        newNode->next=NULL;
    }
    Node *temp=head;
    while(temp!=NULL && temp->data!=target){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    return head;
}


Node *insertafterindex(Node *head,int index,int value){
    Node *newNode=new Node(value);
    if(index==0){
        newNode->next=head;
        return newNode;
    }
    Node *temp=head;
    int c{0};
    while(temp!=nullptr &&c<(index-1)){
        temp=temp->next;
        c++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    return head;

}
int main(){
    Node *head=nullptr;
    head=insertAtBeginning(head,10);
    head=insertAtEnd(head,20);
    int target;
    cout<<"Enter a target value: "<<endl;
    cin>>target;
    head=insertaftervalue(head,target,50);
    display(head);
    cout<<endl;
    head=insertafterindex(head,2,100);
    display(head);
   

    
}

//HW: make a function for insertion at beginning and end.