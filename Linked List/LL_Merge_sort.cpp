#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
public:
    Node* head;
    Node* tail;

    List() {
        head = NULL;
        tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printll() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void insert(int data, int pos) {
        Node* newNode = new Node(data);
        Node* temp = head;
        for (int i = 0; i < pos - 1; i++) {
            if (temp == NULL) {
                cout << "Invalid position" << endl;
                return;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void pop_front() {
        if (head == NULL) {
            cout << "Linked List is Empty" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        if (head == NULL) {
            tail = NULL;
        }
    }

    void pop_back() {
        if (head == NULL) {
            cout << "Linked List is Empty" << endl;
            return;
        }
        if (head->next == NULL) {
            delete head;
            head = tail = NULL;
            return;
        }
        Node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        tail = temp;
    }

    int searchItr(int key) {
        Node* temp = head;
        int idx = 0;
        while (temp != NULL) {
            if (temp->data == key) {
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }

    int helper(Node* h, int key) {
        if (h == NULL) {
            return -1;
        }
        if (h->data == key) {
            return 0;
        }
        int idx = helper(h->next, key);
        if (idx == -1) {
            return -1;
        }
        return idx + 1;
    }

    int searchRec(int key) {
        return helper(head, key);
    }

    void reverse() {
        Node* curr = head;
        Node* prev = NULL;
        while (curr != NULL) {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        
    }

    int getsize() {
        Node* temp = head;
        int sz = 0;
        while (temp != NULL) {
            temp = temp->next;
            sz++;
        }
        return sz;
    }

    void nthdelete(int n) {
        int size = getsize();
        if (n > size) {
            cout << "Invalid position" << endl;
            return;
        }
        if (n == 1) {
            pop_front();
            return;
        }
        Node* prev = head;
        for (int i = 1; i < size - n; i++) {
            prev = prev->next;
        }
        Node* todelete = prev->next;
        prev->next = prev->next->next;
        delete todelete;
    }

    Node* splitAthead(Node* head) {
        Node* slow = head;
        Node* fast = head;
        Node* prev = NULL;

        while (fast != NULL && fast->next != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if (prev != NULL) {
            prev->next = NULL;
        }
        return slow;
    }

    Node* merge(Node* left, Node* right) {
        if (left == NULL) return right;
        if (right == NULL) return left;
        
        if (left->data < right->data) {
            left->next = merge(left->next, right);
            return left;
        } else {
            right->next = merge(left, right->next);
            return right;
        }
    }

    Node* mergesort(Node* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        Node* righthead = splitAthead(head);

        Node* left = mergesort(head);
        Node* right = mergesort(righthead);

        return merge(left, right);
    }

    Node* reverse(Node* head) {
        Node* curr = head;
        Node* prev = NULL;
        while (curr != NULL) {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }

};

int main() {
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);
    ll.push_front(6); // 1->2->4->6->12->18
    ll.printll();
    ll.head = ll.mergesort(ll.head);
    ll.printll();
    
    return 0;
}
