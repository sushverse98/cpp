#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    
    //Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    //Destructor
    ~Node(){
        int value = this->data;
        //memory free
        if(this->next != NULL){
            this->data = data;
            this->next = NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

void InsertAtHead(Node* &head,int data){
    //create new node
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void InsertAtPosition(Node* &head,Node* tail,int position,int data){
    if(position==1){
        InsertAtHead(head,data);
        return;
    }

    Node* temp = head;
    int count = 1;
    while(count < position-1){
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL){
        InsertAtTail(tail,data);
        return;
    }

    //create a new node
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void DeleteNode(Node* &head,int position){
    if(position==1){
        Node* temp = head;
        head = head->next;
        //memory free start node
        temp->next =  NULL;
        delete temp;

    }else{
        //delete any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;
        while(count < position){
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}



void printList(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}

void SearchNode(Node* head, int data) {
    Node* temp = head;
    int position = 1;
    bool found = false;

    while (temp != NULL) {
        if (temp->data == data) {
            cout << "FOUND at position " << position << endl;
            found = true;
            break; // Stop after first match
        }
        temp = temp->next;
        position++;
    }

    if (!found) {
        cout << "NOT FOUND" << endl;
    }
}


int main(){
    //create a new node
    Node* node1 = new Node(10);

    //head pointer to node1
    Node* head = node1;
    Node* tail = node1;

    printList(head);

    InsertAtTail(tail,12);
    InsertAtHead(head,15);
    InsertAtPosition(head,tail,2,11);
    InsertAtPosition(head,tail,4,22);
    InsertAtPosition(head,tail,1,1);

    SearchNode(head,22);

    printList(head);

    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    DeleteNode(head,6);
    printList(head);

    return 0;
}


