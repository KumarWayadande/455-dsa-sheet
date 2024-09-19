#include <iostream>
using namespace std;

class Node
{
private:
    int data;
    Node *next;

public:
    void insert(Node *);
    Node *insertAtFirst(Node *);
    Node *getLastNode(Node *);
    Node *getSecondLastNode(Node *);
    static Node *createNode();
    void deleteList();
    Node *deleteLastNode();
    void display();
    Node() { data = 0, next = nullptr; }
    Node(int);
    Node(Node *);
};

Node *Node ::deleteLastNode()
{
    Node *temp = nullptr;
    if (this->next == nullptr)
    {
        delete this;
    }
    else
    {
        Node *tempNew = getSecondLastNode(this);
        Node *nodeTobeDeleted = tempNew->next;
        tempNew->next = nullptr;
        return nodeTobeDeleted;
    }
    return temp;
}

void Node ::deleteList()
{
    if (this == nullptr)
        return;

    this->next->deleteList();

    delete this;
}

void Node ::display()
{
    Node *temp = this;
    while (temp != nullptr)
    {
        cout << temp->data << " | ";
        temp = temp->next;
    }
}

void Node ::insert(Node *newNode)
{
    Node *lastNode = getLastNode(this);
    lastNode->next = newNode;
}

Node *Node ::insertAtFirst(Node *newNode)
{
    newNode->next = this;
    return newNode;
}

Node *Node ::getLastNode(Node *head)
{
    Node *temp = head;
    while (temp->next != nullptr)
        temp = temp->next;

    return temp;
}

Node *Node ::getSecondLastNode(Node *head)
{
    Node *temp = head;
    while (temp->next->next != nullptr)
        temp = temp->next;

    return temp;
}

Node *Node ::createNode()
{
    int data;
    cout << "Enter data : ";
    cin >> data;

    Node *node = new Node(data);
    return node;
}

Node ::Node(int data)
{
    this->data = data;
    this->next = nullptr;
}
Node ::Node(Node *node)
{
    this->data = node->data;
    this->next = node->next;
}

int main()
{
    Node *head = nullptr;
    int choice = 0;

    while (choice != 10)
    {
        cout << endl
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout << endl
             << "~~~~~~~~~~~   Linked List   ~~~~~~~~~~";
        cout << endl
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout << endl
             << "1. Create List";
        cout << endl
             << "2. Display List";
        cout << endl
             << "3. Delete List";
        cout << endl
             << "4. Insert At Last";
        cout << endl
             << "5. Insert At Front";
        cout << endl
             << "6. Insert Anywhere";
        cout << endl
             << "7. Delete Last Node";
        cout << endl
             << "8. Delete First Node";
        cout << endl
             << "9. Delete Any Node";
        cout << endl
             << "10. Exit";
        cout << endl
             << "  Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (head == nullptr)
            {
                head = Node::createNode();
                if (head)
                    cout << endl
                         << "!!! List Created Successfully !!!";
            }
            else
                cout << endl
                     << "!!! List already exists !!!";
            break;
        case 2:
            if (head != nullptr)
            {
                cout << endl
                     << "~~~~~ List ~~~~~" << endl;
                head->display();
            }
            else
                cout << endl
                     << "!!! Check if list exists otherwise create a list first !!!";
            break;
        case 3:
            if (head != nullptr)
            {
                head->deleteList();
                head = nullptr;
                cout << endl
                     << "!!! List Deleted !!!" << endl;
            }
            else
                cout << endl
                     << "!!! Check if list exists otherwise create a list first !!!";
            break;
        case 4:
            if (head != nullptr)
            {
                Node *newNode = Node::createNode();
                head->insert(newNode);
                cout << endl
                     << "!!! Node inserted Successfully !!!";
            }
            else
                cout << endl
                     << "!!! Problem occured while inserting a node | Check if list exists otherwise create a list first !!!";
            break;
        case 5:
            if (head != nullptr)
            {
                Node *newNode = Node::createNode();
                head = head->insertAtFirst(newNode);
                cout << endl
                     << "!!! Node inserted Successfully !!!";
            }
            else
                cout << endl
                     << "!!! Problem occured while inserting a node | Check if list exists otherwise create a list first !!!";
            break;
        case 7:
            if (head != nullptr)
            {
                Node *result = head->deleteLastNode();
                if (result == nullptr)
                {
                    cout << "Deleted Node : ";
                    head->display();
                    head = nullptr;
                }
                else
                {
                    cout << "Deleted Node : ";
                    result->display();
                    delete result;
                }

                cout << endl
                     << "!!! Node deleted Successfully !!!";
            }
            else
                cout << endl
                     << "!!! Problem occured while inserting a node | Check if list exists otherwise create a list first !!!";
            break;

        case 10:
            cout << endl
                 << "!!! Thank You Visit Again !!!";
            break;

        default:
            cout << endl
                 << "!!! Please enter correct choice !!!";
            break;
        }
    }

    return 0;
}