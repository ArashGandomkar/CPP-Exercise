#include <iostream>
#include <stdio.h>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int value) : data(value), next(nullptr), prev(nullptr) {}
};
void printlist(Node *);
void ConnectList(Node *&, Node *);
int main()
{   // Add List 1
        Node *head1 = new Node(1);
        head1->next = new Node(2);
        head1->next->prev = head1;
        head1->next->next = new Node(3);
        head1->next->next->prev = head1->next;
    // Add List 2
        Node *head2 = new Node(4);
        head2->next = new Node(5);
        head2->next->prev = head2;
    // Print List 1
        cout << "List 1: " << endl;
        printlist(head1);
    // Print List 2
        cout << "List 2: " << endl;
        printlist(head2);

        ConnectList(head1,head2);
    // Print Final List
        cout << "Connected List: " << endl;
        printlist(head1);
}
void printlist(Node *head)
{
    Node *temp = head;
    while(temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void ConnectList(Node *&head1, Node *head2)
{
    if (!head1) {
        head1 = head2;
        return;
    }
    if (!head2) return;
    Node *temp;
    temp = head1;
    while(temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = head2;
    head2->prev = temp;
}