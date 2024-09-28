#include <iostream>
using namespace std;

class Node {
public:
    int Value;
    Node* Next;
};

Node* reverse(Node* head) {
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;
    while (current != NULL) {
        next = current->Next;
        current->Next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

void PrintList(Node* n) {
    while (n != NULL) {
        cout << n->Value << " ";
        n = n->Next;
    }
}

Node* merge(Node* head1, Node* head2) {
    Node* dummyNode = new Node();  
    Node* p3 = dummyNode;  
    dummyNode->Next = NULL;

    Node* p1 = head1;
    Node* p2 = head2;

    while (p1 != NULL && p2 != NULL) {
        if (p1->Value < p2->Value) {
            p3->Next = p1;
            p1 = p1->Next;
        } else {
            p3->Next = p2;
            p2 = p2->Next;
        }
        p3 = p3->Next;
    }

    while (p1 != NULL) {
        p3->Next = p1;
        p1 = p1->Next;
        p3 = p3->Next;
    }

    while (p2 != NULL) {
        p3->Next = p2;
        p2 = p2->Next;
        p3 = p3->Next;
    }

    Node* mergedHead = dummyNode->Next;
    delete dummyNode;
    return mergedHead;
}

int main() {
    Node* head1 = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head1->Value = 1;
    head1->Next = second;
    second->Value = 7;
    second->Next = third;
    third->Value = 8;
    third->Next = NULL;

    Node* head2 = new Node();
    Node* second2 = new Node();
    Node* third2 = new Node();

    head2->Value = 4;
    head2->Next = second2;
    second2->Value = 5;
    second2->Next = third2;
    third2->Value = 6;
    third2->Next = NULL;

    Node* new_list = merge(head1, head2);
    cout << "Merged List: ";
    PrintList(new_list);
    cout << endl;

    Node* temp;
    while (new_list != NULL) {
        temp = new_list;
        new_list = new_list->Next;
        delete temp;
    }

    return 0;
}