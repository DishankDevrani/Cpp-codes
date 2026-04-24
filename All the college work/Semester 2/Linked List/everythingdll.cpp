#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int value){
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};


void display(Node *head){
    Node *temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}


int search(Node *head,int target){
    Node *temp = head;
    while(temp != nullptr){
        if(target == temp->data){
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}


Node *insertatbeginning(Node *head, int value){
    Node *newnode = new Node(value);

    if(head != nullptr){
        head->prev = newnode;
        newnode->next = head;
    }

    return newnode;
}


Node *insertatend(Node *head,int value){
    Node *newnode = new Node(value);

    if(head == nullptr){
        return newnode;
    }

    Node *temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }

    temp->next = newnode;
    newnode->prev = temp;

    return head;
}


Node *insertaftervalue(Node *head,int target,int value){
    Node *temp = head;

    while(temp != nullptr && temp->data != target){
        temp = temp->next;
    }

    if(temp == nullptr){
        return head; // target not found
    }

    Node *newnode = new Node(value);

    newnode->next = temp->next;
    newnode->prev = temp;

    if(temp->next != nullptr){
        temp->next->prev = newnode;
    }

    temp->next = newnode;

    return head;
}


Node* insertafterindex(Node* head, int index, int value){
    if(head == nullptr){
        return new Node(value);
    }

    Node* temp = head;
    int count = 0;

    while(temp != nullptr && count < index){
        temp = temp->next;
        count++;
    }

    if(temp == nullptr){
        return head;
    }

    Node* newnode = new Node(value);

    newnode->next = temp->next;
    newnode->prev = temp;

    if(temp->next != nullptr){
        temp->next->prev = newnode;
    }

    temp->next = newnode;

    return head;
}


Node* deleteatbeginning(Node* head){
    if(head == nullptr){
        return nullptr;
    }

    Node* temp = head;
    head = head->next;

    if(head != nullptr){
        head->prev = nullptr;
    }

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
    while(temp->next != nullptr){
        temp = temp->next;
    }

    temp->prev->next = nullptr;
    delete temp;

    return head;
}


Node* deleteaftervalue(Node* head, int target){
    Node* temp = head;

    while(temp != nullptr && temp->data != target){
        temp = temp->next;
    }

    if(temp == nullptr || temp->next == nullptr){
        return head;
    }

    Node* todelete = temp->next;

    temp->next = todelete->next;

    if(todelete->next != nullptr){
        todelete->next->prev = temp;
    }

    delete todelete;

    return head;
}


Node* deleteafterindex(Node* head, int index){
    Node* temp = head;
    int count = 0;

    while(temp != nullptr && count < index){
        temp = temp->next;
        count++;
    }

    if(temp == nullptr || temp->next == nullptr){
        return head;
    }

    Node* todelete = temp->next;

    temp->next = todelete->next;

    if(todelete->next != nullptr){
        todelete->next->prev = temp;
    }

    delete todelete;

    return head;
}

int main(){
    Node *head = nullptr;

    head = insertatbeginning(head, 10);
    head = insertatend(head, 20);
    head = insertaftervalue(head, 10, 50);

    display(head);

    return 0;
}