#include "FIFO.h"
#include <iostream>

using namespace std;

char menu();


int main()
{
	FIFO newTail;
	string label;
	Node newNode;
	Node *temp;
	Node *getNode = new Node;
	char option;

	do {
		option = menu();

		switch (option)
		{
		case '1':
			cout << "ENTER A LABEL: ";
			cin >> label;
			newNode.label = label;
			newTail.enqueue(newNode);
			cout << endl << endl;

			system("pause");
			system("cls");
			break;

		case '2':
			newTail.displayNodes();
			cout << endl << endl;

			system("pause");
			system("cls");
			break;

		case '3':
			newTail.getNode(*getNode);
			cout << getNode->label << endl;

			system("pause");
			system("cls");
			break;

		case '4':
			newTail.dequeue(*getNode);
			cout << getNode->label << endl;

			system("pause");
			system("cls");
			break;

		default:
			break;
		}

	} while (option != '0');

	return 0;

}



char menu()
{
	char choice;

	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	cout << "\n\t\t~~                                                        ~~";
	cout << "\n\t\t~~                                                        ~~";
	cout << "\n\t\t~~                  <LINKED LIST MENU>                    ~~";
	cout << "\n\t\t~~          <CHOOSE YOUR OPTION FROM MENU BELOW>          ~~";
	cout << "\n\t\t~~                                                        ~~";
	cout << "\n\t\t~~                                                        ~~";
	cout << "\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	cout << "\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	cout << "\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	cout << "\n\t\t~~                                                        ~~";
	cout << "\n\t\t~~                                                        ~~";
	cout << "\n\t\t~~          ->1. ADD AN ELEMENT                           ~~";
	cout << "\n\t\t~~          ->2. DISPLAY THE QUEUE                        ~~";
	cout << "\n\t\t~~          ->3. GET THE LAST ELEMENT                     ~~";
	cout << "\n\t\t~~          ->4. DELETE THE LAST ELEMENT                  ~~";
	cout << "\n\t\t~~          ->0. EXIT MENU                                ~~";
	cout << "\n\t\t~~                                                        ~~";
	cout << "\n\t\t~~                                                        ~~";
	cout << "\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	cout << "\n\n";

	cout << "SELECT YOUR OPTION : ";
	cin >> choice;
	cout << "\n\n";
	system("pause");
	system("cls");
	return choice;
} //end menu