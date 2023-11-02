#include "Node.h"

Node::Node() :next(nullptr), previous(nullptr), data("") 
{
}
Node::~Node()
{
}

string Node::getData()
{
	return data;
}

Node* Node::getNext()
{
	return next;
}

Node* Node::getPrevious()
{
	return previous;
}

void Node::setNext(Node* next)
{
	this->next = next;
}

void Node::setPrevious(Node* previous)
{
	this->previous = previous;
}

void Node::setData(string data)
{
	this->data = data;
}

