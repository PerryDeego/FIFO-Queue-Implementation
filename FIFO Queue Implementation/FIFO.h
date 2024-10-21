#include <iostream>
#include <string>

using namespace std;

struct Node {
	string label;
	Node * next;
};

class FIFO {
	private:
		Node *head;
		Node *tail;

	public:
		FIFO();
		bool isEmpty();
		void enqueue(Node newNode);
		void dequeue(Node getNode);
		void getNode(Node getNode);
		void displayNodes();

};
