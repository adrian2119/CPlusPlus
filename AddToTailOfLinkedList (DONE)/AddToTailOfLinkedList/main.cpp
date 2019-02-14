//
//  main.cpp
//  AddToLinkedList
//
//  Created by Adrian Smith on 27/11/2018.
//  Copyright © 2018 Adrian Smith. All rights reserved.
//

#include <iostream>

using namespace std;

/*
 Test case
 5
 141
 302
 164
 530
 474
 */
class SinglyLinkedListNode {
public:
    int data;
    SinglyLinkedListNode *next;
    
    SinglyLinkedListNode(int node_data) {
        this->data = node_data;
        this->next = nullptr;
    }
};

class SinglyLinkedList {
public:
    SinglyLinkedListNode *head;
    
    SinglyLinkedList() {
        this->head = nullptr;
    }
    
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep) {
    while (node) {
        cout << node->data;
        
        node = node->next;
        
        if (node) {
            cout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;
        
        free(temp);
    }
}

// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 //  * SinglyLinkedListNode {
 //  *     int data;
 //  *     SinglyLinkedListNode* next;
 //  * };
 *
 */


SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
    
    if (head != NULL) {
        SinglyLinkedListNode* curr = head;
        while (curr->next != NULL) {
            //            if (curr->next == NULL) {
            //                curr = newNode;
            //                break;
            //            }
            curr = curr->next;
        }
        curr->next = newNode;
    }
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
    
    SinglyLinkedList* llist = new SinglyLinkedList();
    
    int llist_count;
    cout << "Enter how many elements: ";
    cin >> llist_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    for (int i = 0; i < llist_count; i++) {
        int llist_item;
        cin >> llist_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        SinglyLinkedListNode* llist_head = insertNodeAtTail(llist->head, llist_item);
        llist->head = llist_head;
    }
    
    print_singly_linked_list(llist->head, "\n");
    cout << "\n";
    
    free_singly_linked_list(llist->head);
    
    //    cout.close();
    
    return 0;
}

