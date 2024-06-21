#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
                                   // linked list implimentaton
class Node{
  public:

  int data;
  Node* next;

  
  Node(int val){
    data = val;
    next = NULL;
  } 
};

class List
{

  Node* head;
  Node* tail;
public:
    List(){
      head = NULL;
      tail = NULL;

    }

    void push_front(int val){
        Node* Newnode = new Node(val);      // static //Nwenode(val)
        if(head==NULL){
            head = tail = Newnode;
        }
        else{
            Newnode->next = head;
            head = Newnode;
        }
    }
    void push_back(int val){
        Node* Newnode = new Node(val);      // static //Nwenode(val)
        if(head==NULL){
            head = tail = Newnode;
        }
        else{
            tail->next = Newnode;
            tail = Newnode;
        }
    }

    void printll(){
      Node* temp = head;
      while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
      }
      cout<<"NULL"<<endl;
    }

    void insert(int data, int pos){
    Node* newNode = new Node(data);

      Node* temp = head;
      for (int i = 0; i < pos-1; i++)   //loop will break as soon as we reach pos-1
      {
      if(head==NULL){                  //pos-1 = temp
        cout<<"Invalid";          
      }
        temp=temp->next;                // first make new connection and then break previous 
      }
      newNode->next=temp->next;
      temp->next=newNode;
      }
    void pop_front(){
      if (head==NULL)
      {
        cout<<"Linked List is Emty";
      }
      
      Node* temp = head;
      head = head->next;
      temp->next=NULL;
      delete temp;

    }

    void pop_back(){
      Node* temp = head;
      while(temp->next->next!=NULL){
        temp=temp->next;
      }
      temp->next=NULL;
      delete tail;
      tail = temp;
    }

    int searchItr(int key){
      Node* temp = head;
      int idx = 0;
      while(temp!=NULL){
          if(temp->data==key){
            return idx;
          }
          temp=temp->next;
          idx++;
      }
      return -1;
    }
    int helper(Node* h, int key){
      Node* temp = h;
      if(temp==NULL){
        return -1;
      }
      if(temp->data==key){
        return 0;
      }
      int idx = helper(temp->next,key);
      if(idx == -1){
        return -1;
      }
      return idx+1;
    }
    int searchRec(int key){
      return helper(head,key);
    }

    void reverese(){
      Node* curr = head;
      Node* prev = NULL;

      while(curr!=NULL){
        Node* next = curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;

      }
      head=prev;
    }

    int getsize(){
      Node* temp = head;
      int sz = 0;
      while(temp!=NULL){
        temp=temp->next;
        sz++;
      }
      return sz;
    }

    void nthdelete(int n){
      int size = getsize();
      Node* prev = head;
      for(int i = 1;i<size-n;i++){
        prev=prev->next;
      }
      
      Node* todelete = prev->next;
      cout<<"To delete node "<<todelete->data<<endl;;
      prev->next=prev->next->next;
      delete todelete;
    }
    



};



int main()
{
    List ll;
    ll.push_front(18);
    ll.push_front(12);
    ll.push_front(6);
    ll.push_front(4);
    ll.push_front(2);
    ll.push_front(1);   //1->2->3
    ll.reverese();
    // ll.printll();
    // ll.push_front(0);
    // ll.push_back(4);
    // ll.insert(100,2);
    // ll.pop_front();
    // ll.pop_front();
    // ll.pop_back();
    ll.printll();
    ll.nthdelete(5);
    ll.printll();
    // cout<<ll.searchItr(2);
    // cout<<ll.searchRec(2);
    
    return 0;
}