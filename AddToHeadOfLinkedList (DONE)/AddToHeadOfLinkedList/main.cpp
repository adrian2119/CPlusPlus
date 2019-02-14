//
//  main.cpp
//  AddToHeadOfLinkedList
//
//  Created by Adrian Smith on 27/11/2018.
//  Copyright © 2018 Adrian Smith. All rights reserved.
//

#include <iostream>
using namespace std;

using namespace std;

//Template for each node created
class SinglyLinkedListNode {
public:
    int data;
    SinglyLinkedListNode *next;
    SinglyLinkedListNode(int node_data) {
        this->data = node_data;
        this->next = nullptr;
    }
};

//Template to get the list started
class SinglyLinkedList {
public:
    SinglyLinkedListNode *head;
    SinglyLinkedList() {
        this->head = nullptr;
    }
    
};

//Print the value of each node in the list separated by string 'sep' which is '\n'
void print_singly_linked_list(SinglyLinkedListNode* node, string sep) {
    while (node) {
        cout << node->data;
        node = node->next;
        if (node) {
            cout << sep;
        }
    }
}

//Delete all nodes in the list
void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;
        
        free(temp);
    }
}

// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
//Create a new Head Node which points to the old Head Node
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
    newNode->next = llist;
    
    return newNode;
}

int main()
{
//    Create a new list
    SinglyLinkedList* llist = new SinglyLinkedList();
    
//    Get the number of items in the list
    int llist_count;
    cin >> llist_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
//    Go throught the list, 1 at a time
    for (int i = 0; i < llist_count; i++) {
        int llist_item;
        cin >> llist_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
//        Add to the head of the list
        SinglyLinkedListNode* llist_head = insertNodeAtHead(llist->head, llist_item);
        llist->head = llist_head;
    }
    
//    Print the value of each node in the list
    print_singly_linked_list(llist->head, "\n");
    cout << "\n";
    
//    Free up memory before program closes
    free_singly_linked_list(llist->head);
    
    
    return 0;
}
