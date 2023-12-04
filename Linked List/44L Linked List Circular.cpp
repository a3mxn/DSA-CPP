#include <iostream>
#include <map>
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

void insertNode(Node* &tail,int element,int d){
    if(tail==NULL){
        Node* newNode = new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
        //non empty list
        Node* curr = tail;
        while(curr->data != element){
            curr=curr->next;
        }
        Node* temp=new Node(d);
        temp->next = curr -> next;
        curr -> next = temp;
    }
}

void print(Node* tail) {

    Node* temp = tail;

    // empty list
    if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
} 

bool isCircular(Node* head){
    if(head==NULL){
        cout<<"amanann"<<endl;
        return true;
    }
    else{
        Node* temp = head->next;
        while(temp!=NULL && temp!=head){
            temp=temp->next;
        }
        if(temp==NULL) cout<<"not circular";
        else cout<<"circular true";
    }
}


bool circularhai(Node* head){
    if(head==NULL) return true;

    Node* temp = head->next;
    while(temp != NULL && temp!=head){
        temp=temp->next;
    }
    if(temp==head) cout<<"circular true";
    return false;
}

bool detectLoop(Node* head){
    if(head==NULL){
        cout<< "empty list true";
        return true;
    }

    map<Node* , bool>visited;
    Node* temp = head;

    while(temp != NULL){
        if(visited[temp]==true){
            cout<<"visit karne ke bad true";
            return true;
        }

        visited[temp]=true;
        temp=temp->next;
    }
    
}


bool detectLoopFloydsAlgo(Node* head){
    if(head==NULL) return true;
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL){
        slow = slow->next;
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }

        if(slow==fast){
        cout<<"slow = fast so true";
        return true;
        }
    }
}


int main(){
    Node* tail=NULL;
    isCircular(tail);
    insertNode(tail,5,3);
    insertNode(tail,3,5);
    insertNode(tail,5,8);
    insertNode(tail,8,17);
    print(tail);
    detectLoopFloydsAlgo(tail);
    // cout<<"AMAN";
    return 0;
}