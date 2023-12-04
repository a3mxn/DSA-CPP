#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this->data = d;
        this->prev=NULL;
        this->next=NULL;
    }
};


void print(Node* &head){
    Node* temp=head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void getLength(Node* &head){
    int length = 0;
    Node* temp=head;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    cout<<"length is "<<length<<endl;
}


void insertAtHead(Node* &head,Node* &tail,int d){
    if (head == NULL)
    {
        Node* temp = new Node(d);
        head=temp;
        tail = temp;
    }
    else{
    Node* temp = new Node(d);
    temp->next=head;
    head->prev= temp;
    head = temp;
    }
}


void insertAtTail(Node* &head,Node* &tail,int d){
    // while(tail->next != NULL){
    //     tail = tail->next; 
    // }

    if (tail==NULL) 
    {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    

    else{
        Node* temp = new Node(d);
        temp->prev = tail;
        tail->next=temp;
        tail = temp;
    }
}


void insertAtMiddle(Node* &head,Node* &tail,int position,int d){
    if (position==1)
    {
        insertAtHead(head,tail,d);
        return;
    }

    Node* temp = head;
    int cnt=1;

    while(cnt<position-1){
        temp =temp->next;
        cnt++;
    }

    if (temp->next==NULL){
        insertAtTail(head,tail,d);
        return;
    }
    
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp ->next;

    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
}


int main(){
    // Node* node1 =  new Node(8);
    // Node* head = node1;
    // Node* tail = node1;
    // print(head);
    // getLength(head);

    // cout<<"inserting at head"<<endl;
    // insertAtHead(head,13);
    // print(head);
    // insertAtHead(head,77);
    // print(head);
    // print(node1);

    // cout<<"inserting at Tail"<<endl;
    // insertAtTail(tail,69);
    // print(head);
    // insertAtTail(tail,3);
    // print(head);
    // insertAtTail(tail,91);
    // print(head);
    
    // cout<<"inserting at Middle"<<endl;
    // insertAtMiddle(head,3,60);
    // print(head);


    // cout<<endl<<endl;

    Node* a3m = new Node(5);
    Node* head = a3m;
    Node* tail = a3m;

    print(head);
    insertAtMiddle(head,tail,1,8);
    print(head);
    insertAtMiddle(head,tail,2,7);
    print(head);
    insertAtMiddle(head,tail,2,19);
    print(head);
    insertAtMiddle(head,tail,5,69);
    print(head);
    insertAtMiddle(head,tail,5,0);
    print(head);

    // // insertAtHead(a3m,7);
    // insertAtTail(head,tail,7);
    // print(head);
    // insertAtHead(head,tail,15);
    // print(head);


}