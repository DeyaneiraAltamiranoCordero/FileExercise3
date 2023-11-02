#pragma once
#include "Node.h"

class CicleList
{
private:
	Node* head;
public:
	CicleList();
	~CicleList();
	Node* getHead();
	void setHead();

	void append(string&);
};