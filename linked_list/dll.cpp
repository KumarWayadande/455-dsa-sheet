#include <iostream>
using namespace std;

class Node
{
private:
    int data;
    Node *next;
    Node *prev;

public:
    Node()
    {
        data = 0, next = nullptr;
        prev = nullptr;
    }
    Node(int);
    Node(Node *);
    void display();

    void insert(Node *);
    Node *insertAtFirst(Node *);
    void insertAtLocation(Node *, int);

    void deleteList();
    Node *deleteLastNode();
    Node *deleteFirstNode();
    void deleteAtLocation(int loc);

    Node *getSecondLastNode(Node *);
    Node *getLastNode(Node *);
    static Node *createNode();
    static int length(Node *);
    static void notify(string, int);
    bool search(int);
};

bool Node ::search(int data)
{
    Node *temp = this;

    while (temp != nullptr)
    {
        if (data == temp->data)
        {
            return true;
        }
        temp = temp->next;
    }

    return false;
}

void Node ::insertAtLocation(Node *newNode, int loc)
{
    Node *temp = this;
    for (int i = 1; i < (loc - 1); i++)
        temp = temp->next;

    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
    newNode->next->prev = newNode;
}
void Node ::deleteAtLocation(int loc)
{
    Node *temp = this;
    for (int i = 1; i < (loc - 1); i++)
        temp = temp->next;

    Node *node = temp->next;
    temp->next = temp->next->next;
    delete node;
}

int Node ::length(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void Node ::notify(string message, int data = 0)
{
    cout << endl
         << "!!! " << message << " !!!";
}

Node *Node ::deleteLastNode()
{
    Node *temp = this;
    if (temp->next == nullptr)
        temp = nullptr;
    else
    {
        temp = getSecondLastNode(this);
        Node *nodeTobeDeleted = temp->next;
        temp->next = nullptr;
        delete nodeTobeDeleted;
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
    this->prev = newNode;
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

Node *Node ::deleteFirstNode()
{
    Node *temp = this;
    if (this->next == nullptr)
        temp = nullptr;
    else
    {
        Node *nodeTobeDeleted = temp;
        temp = nodeTobeDeleted->next;
        temp->prev = nullptr;
        delete nodeTobeDeleted;
    }

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
    this->prev = nullptr;
}
Node ::Node(Node *node)
{
    this->data = node->data;
    this->next = node->next;
    this->prev = node->prev;
}

int main()
{
    Node *head = nullptr;
    int choice = 0;

    while (choice != 11)
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
             << "10. Search";
        cout << endl
             << "11. Exit";
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
                    Node::notify("List Created Successfully");
            }
            else
                Node::notify("List Already Exists");
            break;
        case 2:
            if (head != nullptr)
            {
                cout << endl
                     << "~~~~~ List ~~~~~" << endl;
                head->display();
            }
            else
                Node::notify("Check if list exists otherwise create a list first");
            break;
        case 3:
            if (head != nullptr)
            {
                head->deleteList();
                head = nullptr;
                Node::notify("List Deleted Successfully");
            }
            else
                Node ::notify("Check if list exists otherwise create a list first");
            break;
        case 4:
            if (head != nullptr)
            {
                Node *newNode = Node::createNode();
                head->insert(newNode);
                Node::notify("Node inserted Successfully");
            }
            else
                Node::notify("Problem occured while inserting a node | Check if list exists otherwise create a list first");
            break;
        case 5:
            if (head != nullptr)
            {
                Node *newNode = Node::createNode();
                head = head->insertAtFirst(newNode);
                Node::notify("Node inserted Successfully");
            }
            else
                Node::notify("Problem occured while inserting a node | Check if list exists otherwise create a list first");
            break;
        case 6:
            if (head != nullptr)
            {
                int len = Node::length(head);
                cout << "\nEnter Location (" << 1 << " - " << len << ") :";
                int loc;
                cin >> loc;

                if (loc <= 0)
                    Node::notify("Wrong Location");
                else if (loc == 1)
                {
                    Node *newNode = Node::createNode();
                    head = head->insertAtFirst(newNode);
                    Node::notify("Node inserted Successfully");
                }
                else if (loc > len)
                {
                    Node *newNode = Node::createNode();
                    head->insert(newNode);
                    Node::notify("Node inserted Successfully");
                }
                else
                {
                    Node *newNode = Node::createNode();
                    head->insertAtLocation(newNode, loc);
                    Node::notify("Node inserted Successfully");
                }
            }
            else
                Node::notify("Problem occured while inserting a node | Check if list exists otherwise create a list first");
            break;
        case 7:
            if (head != nullptr)
            {
                if (head->deleteLastNode() == nullptr)
                {
                    head = nullptr;
                }
                Node::notify("Node deleted Successfully");
            }
            else
                Node::notify("Problem occured while inserting a node | Check if list exists otherwise create a list first");
            break;
        case 8:
            if (head != nullptr)
            {
                head = head->deleteFirstNode();
                Node::notify("Node deleted Successfully");
            }
            else
                Node::notify("Problem occured while inserting a node | Check if list exists otherwise create a list first");

            break;
        case 9:
            if (head != nullptr)
            {
                int len = Node::length(head);
                cout << "\nEnter Location (" << 1 << " - " << len << ") :";
                int loc;
                cin >> loc;

                if (loc <= 0 || loc > len)
                    Node::notify("Wrong Location");
                else if (loc == 1)
                {
                    head = head->deleteFirstNode();
                    Node::notify("Node deleted Successfully");
                }
                else if (loc == len)
                {
                    if (head->deleteLastNode() == nullptr)
                        head = nullptr;
                    Node::notify("Node deleted Successfully");
                }
                else
                {
                    head->deleteAtLocation(loc);
                    Node::notify("Node deleted Successfully");
                }
            }
            else
                Node::notify("Problem occured while inserting a node | Check if list exists otherwise create a list first");

            break;
        case 10:
            if (head != nullptr)
            {
                cout << "\n Enter data : ";
                int data;
                cin >> data;
                if (head->search(data))
                    Node::notify("Node Found");
                else
                    Node::notify("Node Not Found");
            }
            else
                Node::notify("Problem occured while inserting a node | Check if list exists otherwise create a list first");

            break;

        case 11:
            Node::notify("Thank You Visit Again");
            break;

        default:
            Node::notify("Please enter correct choice");
            break;
        }
    }

    return 0;
}