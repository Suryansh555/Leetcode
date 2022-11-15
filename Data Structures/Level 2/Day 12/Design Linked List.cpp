#include<bits/stdc++.h>
using namespace std;

class MyLinkedList {
	struct Node {
		int val;
		Node *next;
		Node(int x): val(x), next(nullptr) {}
	};

	Node *head;
	int size;
public:

    MyLinkedList() {
        head = nullptr;
		size = 0;
    }
    

    int get(int index) {
		int res = -1;

		if (index > size)

			return res;

		Node *curr = head;
		while(curr && index > 0) {
			index--;

			curr = curr->next;
		}

		if (index == 0 && curr != nullptr)

			res = curr->val;

		return res;
    }
    

    void addAtHead(int val) {
       Node *curr = new Node(val);
	   curr->next = head;
	   head = curr; 
	   size++;
    }
    

    void addAtTail(int val) {
		size++;
		Node *node = new Node(val);
		if (head == nullptr) {

			head = node;
			return;
		}

        Node *curr = head;
		while(curr && curr->next)
   
			curr = curr->next;

		curr->next = node;
    }

    void addAtIndex(int index, int val) {
		if (index > size)
			return;


		if (index == 0) {

			size++;
			addAtHead(val);
			return;
		}

		if (index == size) {

			size++;
			addAtTail(val);
			return;
		}

		Node *curr = head;
		while(curr && index > 0) {
			index--;

			if (index == 0) {
				Node *new_node = new Node(val);
				new_node->next = curr->next;
				curr->next = new_node;
				size++;
				break;
			}

			curr = curr->next;
		}

    }

    void deleteAtIndex(int index) {
		if (index == 0) {
        //Deleting at head
			Node *tmp = head;
			head = head->next;
			size--;
			delete tmp;
			return;
		}

		Node *curr = head, *pre = nullptr;
		while(curr && index > 0) {
			pre = curr;
			curr = curr->next;
			index--;
		}

		if (index == 0 && curr != nullptr) {
			Node *tmp = curr;
			pre->next = curr->next;
			size--;
			delete tmp;
		}
    }
};