#include "FIFO.h"

FIFO::FIFO() 
{
	head = tail = NULL;
}

bool FIFO::isEmpty()
{
	if (head == NULL)
		return true;
	else
		return false;
} // End isEmpty

void FIFO::enqueue(Node newNode)
{
	Node *addNode = new Node;
	addNode->label = newNode.label;
	addNode->next = NULL;

	if (isEmpty())
	{
		head = tail = addNode;
		return;
	} // End if

	tail->next = addNode;
	tail = addNode;

	return;
}

void FIFO::dequeue(Node getNode)
{
	getNode.label = head->label;
	Node *temp = head;
	head = head->next;
	temp->next = NULL;

	delete temp;
	return;
}


void FIFO::getNode(Node getNode)
{
	getNode.label = head->label;
	
	return;
}

void FIFO::displayNodes()
{
	Node *temp = head;

	while (temp != NULL)
	{
		cout << temp->label << endl;
		temp = temp->next;
	} // End while

	return;
}
