#include <string>
#ifndef NODE_H
#define NODE_H
using namespace std;

class Node
{
private:
    Node* next;
    Node* previous;
    string data;

public:
    Node();
    ~Node();

    string getData();
    Node* getNext();
    Node* getPrevious();
    void setNext(Node*);
    void setPrevious(Node*);
    void setData(string);
};
#endif