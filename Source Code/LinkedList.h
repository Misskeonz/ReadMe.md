#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <string>
using namespace std;

struct Node {
    string data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList();
    ~LinkedList();

    void addNode(string data);
    void display();
};

#endif
