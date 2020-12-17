//  Kiarash Hesampour CS216

#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#include <string>
#include <cctype>
#include <cmath>
using namespace std;

class LinkedList {
  protected:
    struct ListNode {
      double value;
      ListNode *next;
      ListNode(double value = 0, ListNode *next = NULL) {
        this->value = value;
        this->next = next;
      }
    };
    ListNode *head;

  public:
    void insert(double x, int pos);
    void add(double x);
    LinkedList() {
      head = NULL;
    }
};


void LinkedList::add(double x) {
  if (head == NULL) {
    head = new ListNode(x);
  } else {
    ListNode *nodePointer = head;
    head = new ListNode(x, nodePointer);
  }
}



void LinkedList::insert(double num, int position) {
  ListNode *newNode;
  ListNode *nodePointer;
  ListNode *previousNode = NULL;
  int i = 0;

  newNode = new ListNode;
  newNode->value = num;
  newNode->next = NULL;

  nodePointer = head;
  if (position == 0) {
    newNode->next = head;
    head = newNode;
  } else {
    while(nodePointer != NULL && i < position){
      previousNode = nodePointer;
      nodePointer = nodePointer->next;
      i++;
    }
    if(nodePointer == NULL) {
      newNode->next = nodePointer;
      previousNode->next = newNode;
    } else {
      newNode->next = nodePointer;
      previousNode->next = newNode;
    }
  }
  nodePointer = head;
  while (nodePointer) {
    cout << nodePointer->value << "  ";
    nodePointer = nodePointer->next;
  }
  cout << endl;
}


int main() {
  LinkedList linkedList;
  int inp = 0;
  double x;
  int position;

  linkedList.add(10.1);
  linkedList.add(20.2);
  linkedList.add(30.3);
  linkedList.add(40.4);
  linkedList.add(50.5);

  do {
    cout << "\n\n1: to insert a number into the linked list\n" << 
            "2: to exit the program\n" << endl;
    cin >> inp;
    switch (inp) {
      case 1:
        cout << "Please enter a number: ";
        cin >> x;
        cout << "\nPlease enter a position to insert the number you entered: ";
        cin >> position;
        linkedList.insert(x, position);
        break;
      case 2:
        cout << "Quitting the program..." << endl;
    }
  
  } while (inp != 2);

  return 0;
}