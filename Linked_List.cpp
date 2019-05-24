#include <iostream>
#include <string>
using namespace std;

struct initialNode
{
	string initial;
	initialNode *link;
};

int main()

{
	//declarations
	int numInitials; 
	initialNode *head = new initialNode; 

	head->initial = "";
	head->link = nullptr;

	//get user input
	initialNode *nextInitialNode = new initialNode;
	nextInitialNode = head;
	cout << ("How many initials are you going to enter? ");
	cin >> numInitials;

	//calculations

	int counter = 0;
	while (counter < numInitials)
	{
		nextInitialNode->link = new initialNode;
		nextInitialNode = nextInitialNode->link;
		nextInitialNode->link = nullptr;
		cout << "Enter Initial " << counter + 1 << " : ";
		cin >> nextInitialNode->initial;
		counter = counter + 1;
	}

	// output

	cout << endl;
	cout << ("Traversing the linked list ");
	cout << endl;

	nextInitialNode = head->link;

	while (nextInitialNode != nullptr)
	{
		cout << nextInitialNode->initial << endl;
		nextInitialNode = nextInitialNode->link;
	}

	cout << endl;
	system("Pause");
	return 0;
}