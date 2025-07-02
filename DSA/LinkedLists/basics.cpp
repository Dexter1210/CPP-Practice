#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }
};

class LinkedList{
    Node* head;
    Node* tail;
    
    public:
        LinkedList(){
            head = NULL;
            tail = NULL;
        }

        void push_front(int val){
            Node *newNode = new Node(val);
            if(head == NULL){
                head = newNode;
                tail = newNode;
            } else {
                newNode -> next = head;
                head = newNode;
            }
        }

        void push_back(int val){
            Node *newNode = new Node(val);
            if(head == NULL){
                head = newNode;
                tail = newNode;
            } else {
                tail -> next = newNode;
                tail = newNode;
            }
        }

        void pop_front(){
            Node* nodetoDelete = head;
            head = head -> next;
            nodetoDelete -> next = NULL;
            delete nodetoDelete;
        }

        void pop_back(){
            Node* nodetoDelete = tail;
            Node* temp = head;
            // go till the second last node
            while(temp -> next != tail){
                temp = temp -> next;
            }
            temp -> next = NULL;
            tail = temp;
            delete nodetoDelete;

        }

        void insert(int val, int pos){
            Node* newNode = new Node(val);
            if(pos < 0){
                cout << "Invalid position" << endl;
            } else if(pos == 0){
                push_front(val);
            } else {
                Node* temp = head;
                for(int i=0; i<pos-1; i++){
                    temp = temp -> next;
                }
                newNode -> next = temp -> next;
                temp -> next = newNode;
            }
        }

        void remove(int pos){
            if(pos < 0){
                cout << "invalid position" << endl;
            } else if(pos == 0){
                pop_front();
            } else {
                Node* temp = head;
                for(int i= 0; i< pos-1; i++){
                    temp = temp -> next;
                }
                Node* nodetoDelete = temp -> next;
                temp -> next = nodetoDelete -> next;
                nodetoDelete -> next = NULL;
                delete nodetoDelete;
            }
        }

        void print(){
            Node* temp = head;
            while(temp != NULL){
                cout << temp -> data << " ";
                temp = temp -> next;
            }
            cout << endl;
        }

        int search(int val){
            Node* temp = head;
            int index = 0;
            while(temp != NULL){
                if(temp -> data == val){
                    return index;
                } else {
                    temp = temp -> next;
                    index++;
                }
            }
            return -1;
        }

        void searchResult(int val){
            int index = search(val);
            index == -1 ? cout << "Not found" << endl : cout << "Found at " << index << " index" << endl;
        }
};

int main(){
    LinkedList l1;
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    l1.print(); // 3 2 1
    l1.push_back(4);
    l1.push_back(5);
    l1.print(); // 3 2 1 4 5
    l1.pop_front(); // 2 1 4 5
    l1.print(); // 2 1 4 5
    l1.pop_back();
    l1.print(); // 2 1 4
    l1.insert(10, 1);
    l1.print();
    l1.remove(1);
    l1.print();
    l1.searchResult(10);
    l1.searchResult(1);
}