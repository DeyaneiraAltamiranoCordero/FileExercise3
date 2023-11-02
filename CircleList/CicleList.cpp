#include "CicleList.h"

CicleList::CicleList():head(nullptr)
{
}

CicleList::~CicleList()
{
}

Node* CicleList::getHead()
{
	return head;
}

void CicleList::setHead()
{
	this->head = head;
}

void CicleList::append(string& data)
{
	Node* newNode = nullptr;
	newNode->setData(data);

	if (head == nullptr) {
		newNode = head;
		head = newNode->getNext();
		head = newNode->getPrevious();
	}
	else
	{
		Node* actual = head;
		while (actual->getNext() != head) {
			actual = actual->getNext();
		}
		newNode = actual->getNext();
		actual = newNode->getPrevious();
		head = newNode->getNext();
		newNode = head->getPrevious();
	}
}