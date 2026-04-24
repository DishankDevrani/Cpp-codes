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
    if(temp==nullptr){
        return head; //target not found
    }
    newnode->next=temp->next;
    temp->next=newnode;
    return head;
}


Node* insertafterindex(Node* head, int index, int value){
    Node* newnode = new Node(value);

    if(head == nullptr){
        return newnode;
    }

    Node* temp = head;
    int count = 0;

    while(temp != nullptr && count < index){
        temp = temp->next;
        count++;
    }

    if(temp == nullptr){
        return head; // index out of bounds
    }

    newnode->next = temp->next;
    temp->next = newnode;

    return head;
}

Node* deleteatbeginning(Node* head){
    if(head == nullptr){
        return nullptr;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* deleteatend(Node* head){
    if(head == nullptr){
        return nullptr;
    }
    if(head->next == nullptr){
        delete head;
        return nullptr;
    }

    Node* temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node* deleteaftervalue(Node* head, int target){
    if(head == nullptr){
        return nullptr;
    }

    Node* temp = head;
    while(temp != nullptr && temp->data != target){
        temp = temp->next;
    }

    if(temp == nullptr || temp->next == nullptr){
        return head; // target not found OR no node after it
    }

    Node* todelete = temp->next;
    temp->next = todelete->next;
    delete todelete;

    return head;
}


Node* deleteafterindex(Node* head, int index){
    if(head == nullptr){
        return nullptr;
    }

    Node* temp = head;
    int count = 0;

    while(temp != nullptr && count < index){
        temp = temp->next;
        count++;
    }

    if(temp == nullptr || temp->next == nullptr){
        return head; // index out of bounds OR no node after
    }

    Node* todelete = temp->next;
    temp->next = todelete->next;
    delete todelete;

    return head;
}

int main(){
    Node *head=nullptr;
    head=insertatbeginning(head,10);
    head=insertatend(head,20);
    head=insertaftervalue(head,10,50);
    display(head);


}