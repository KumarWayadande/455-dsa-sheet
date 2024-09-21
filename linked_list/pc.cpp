#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node * next;
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

int main(){
    Node * head = new Node(10);
    cout << "\nhead : " << head;
    cout << "\n&head : " << &head;
    
    Node * temp = head;
    cout << "\ntemp : " << temp;
    cout << "\n&temp : " << &temp;

    temp->data = 200;
    cout << "\ntemp -> data:"<<temp->data;
    cout << "\nhead -> data:"<<head->data;

    Node * n1 = new Node(20);
    Node * n2 = new Node(30);
    Node * n3 = new Node(40);

    head -> next = n1;
    n1 -> next = n2;
    n2 -> next = n3;
    temp = temp -> next;

    // temp->data = 200;
    cout << "\ntemp -> data:"<<temp->data;
    cout << "\nhead -> data:"<<head->data;

    return 0;
}