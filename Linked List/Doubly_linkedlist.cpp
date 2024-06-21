#include<iostream>
#include<cstring>
#include<vector>
#include<list>
#include<iterator>
#include<cmath>
using namespace std;

class Node{
  public:

  int data;
  Node* next;
  Node* prev;

  
  Node(int val){
    data = val;
    next = NULL;
    prev = NULL;
  } 
};

class Double_List
{
    public:

  Node* head;
  Node* tail;

    Double_List(){
      head = NULL;
      tail = NULL;

    }

    void  pushfront(int val){
        Node* newnode = new Node(val);

        if(head==NULL){
            head = tail = newnode;
        }
        else{
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
        }
    }

    void  pushback(int val){
        Node* newnode = new Node(val);

        if(head==NULL){
            head = tail = newnode;
        }
        else{
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
        }
    }

void popfront(){
    Node* temp = head;

    head = head->next;

    if(head!=NULL){
        head->prev=NULL;
    }
    temp->next=NULL;

    delete temp;
}

void popback(){
    Node* temp = tail;

    tail = tail->prev;

    if(tail!=NULL){
        tail->next=NULL;
    }
    temp->prev=NULL;

    delete temp;
}

void print(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"<->";
        temp=temp->next;
    }
    cout<<"NULL";
}
    
};
int main()
{
    Double_List ll;
    ll.pushfront(4);
    ll.pushfront(3);
    ll.pushfront(2);
    ll.pushfront(1);
    ll.pushback(5);
    ll.pushback(6);

    ll.popfront();
    ll.popback();

    ll.print();
    return 0;
}