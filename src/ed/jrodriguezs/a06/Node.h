#pragma once
class Node
{
public:
	Node();
	Node(int data, Node* next);
	int getData();
	Node* getNext();
	void setData(int data);
	void setNext(Node* next);
	int data;
	Node* next;
};

