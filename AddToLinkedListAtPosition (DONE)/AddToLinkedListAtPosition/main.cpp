//
//  main.cpp
//  AddToLinkedListAtPosition
//
//  Created by Adrian Smith on 28/11/2018.
//  Copyright © 2018 Adrian Smith. All rights reserved.
//

#include <iostream>

using namespace std;

//Template for each item in the list
class SinglyLinkedListNode {
public:
    int data;
    SinglyLinkedListNode *next;
    
    SinglyLinkedListNode(int node_data) {
        this->data = node_data;
        this->next = nullptr;
    }
};

//Template to start the list
class SinglyLinkedList {
public:
    SinglyLinkedListNode *head;
    SinglyLinkedListNode *tail;
    
    SinglyLinkedList() {
        this->head = nullptr;
        this->tail = nullptr;
    }
//    Add item to the list
    void insert_node(int node_data) {
        SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);
        
        if (!this->head) {
            this->head = node;
        } else {
            this->tail->next = node;
        }
        
        this->tail = node;
    }
};

//Print the value of each item in the list separated by sep which is '\n'
void print_singly_linked_list(SinglyLinkedListNode* node, string sep) {
    while (node) {
        cout << node->data;
        
        node = node->next;
        
        if (node) {
            cout << sep;
        }
    }
}

//Delete each node from memory
void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;
        
        free(temp);
    }
}

// Complete the insertNodeAtPosition function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
    
//    The list is not empty
    if (head != NULL) {
        SinglyLinkedListNode* curr = head;
        int i {};
//        Go through the list 1 node at a time until specified position is found
        while (curr->next != NULL && i < position - 1) {
            curr = curr->next;
            i++;
        }
//        When at the specified position, create a temporary pointer
//        to hold the memory address of the node after position to insert
        SinglyLinkedListNode* temp = curr->next;
//        Have the newNode created at the start of the function
//        now point to the memory address of the node after position to insert
        newNode->next = temp;
//        Have the current node point to the newNode
//        which is pointing to the memory address of the node after position to insert
        curr->next = newNode;
    }
    //    The list is empty
    else {
        head = newNode;
        head->next = newNode->next;
        head->data = data;
    }
    return head;
}

int main()
{
//    ofstream fout(getenv("OUTPUT_PATH"));
    
//    Create a new list
    SinglyLinkedList* llist = new SinglyLinkedList();
    
//    Get the number of items on the list
    int llist_count;
    cout << "Enter:";
    cin >> llist_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
//    Add items to the list
    for (int i = 0; i < llist_count; i++) {
        int llist_item;
        cin >> llist_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        llist->insert_node(llist_item);
    }
    
    int data;
    cin >> data;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    int position;
    cin >> position;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
//    called with the memory address of the head node, value of what to put in the node &
//    where to put it in the list
    SinglyLinkedListNode* llist_head = insertNodeAtPosition(llist->head, data, position);
    
//    Call the print function with the memory address of the head node & provide the separator character
    print_singly_linked_list(llist_head, " ");
    cout << "\n";
    
//    Called to free-up memory before the program closes
    free_singly_linked_list(llist_head);
    
    
    return 0;
}

