#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    public:

    Node* head;
    Node* tail;

    List(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int val){
        Node* newnode = new Node(val);
        if(head==NULL){
            head = tail = newnode;
        }
        else{
            newnode->next=head;
            head = newnode;
        }
    }

     void push_back(int val){
        Node* newnode = new Node(val);
        if(head==NULL){
            head = tail = newnode;
        }
        else{
            tail->next=newnode;
            tail = newnode;
        }
    }

    void print(){
        Node* temp = head;

        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    }

    bool iscycle(){
        Node* fast = head;
        Node* slow = head;

       while(fast!=NULL && fast->next!=NULL){

        fast = fast->next->next;
        slow =  slow->next;

        if(fast == slow){
            cout<<"Cycle exist";
            return true;
        }
     
       }
       cout<<"Cycle not exist";
       return false;
    }
};
int main()
{
    List ll;

    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    

    ll.tail->next = ll.head;

    // ll.print();

    ll.iscycle();

    return 0;
}