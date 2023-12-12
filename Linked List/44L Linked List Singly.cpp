#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next =NULL;
        }
        cout<<" destructor bhai called for  "<< value<<endl;
    }
};


void InsertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next=head;
    head = temp;
}

// void InsertAtTail(Node* &tail,int d){
//     Node* temp = new Node(d);
//     tail->next = temp;
//     // temp->next = NULL;
//     tail =temp;
// }

void insertAtTail(Node* &tail, int d) {
     // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail  = temp;
}


void insertAtAnyPosition(Node* &head,int position,int d){
    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
    // cout<<"aman";
}


void deleteNode(int position,Node* &head){
    //deleting first node
    if (position == 1)
    {
        Node* temp = head;
        head = head -> next;
        temp ->next =NULL;
        delete temp;
    }
    //for deleting any middle or last node
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt=1;
        while (cnt<position)
        {
            prev=curr;
            curr=curr -> next;
            cnt++;
        }
        prev -> next = curr ->next;
        curr -> next=NULL;
        delete curr;
    }
}


void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int main(){
    Node *node1 = new Node(7);
    // cout<<"hello";
    cout<< node1->data<<"  L"<<endl;
    cout<<node1->next<<endl;

    cout<<"hi"<<endl;
    Node* head = node1;
    Node* tail=node1;
    print(head);
    insertAtTail(tail,45);
    print(head);
    insertAtTail(tail,33);
    print(head);
    insertAtAnyPosition(head,3,6996);
    print(head);
    print(head);
    deleteNode(1,head);
    print(head);
    print(head);
    cout<<"end"<<endl;



    // Node* aman = new Node(55);
    // // Node* aman = new Node(17);
    // Node* add = aman;
    // print(aman);
    // print(add);
    // insertAtTail(aman,5);
    // print(aman);
    // print(add);
    // insertAtTail(aman,33);
    // print(aman);
    // print(add);
    // cout<<endl<<"hi"<<endl;
    // insertAtAnyPosition(add,3,6969);
    // print(aman);
    // print(add);
    // cout<<"aman";
}