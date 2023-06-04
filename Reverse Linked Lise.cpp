#include <bits/stdc++.h>


template <typename T>
class LinkedListNode
{
public:
    T data;
    LinkedListNode<T> *next;
    LinkedListNode(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// FUNCTION PART FOR THE QUESTION ( REVERSE LINKED LIST ) 
//              FROM STRIVER SDE SHEET


LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int> *curr=head;
    LinkedListNode<int> *next_node=NULL;
    LinkedListNode<int> *previous=NULL;
    while(curr!=NULL){
        next_node=curr->next;
        curr->next=previous;
        previous=curr;
        curr=next_node;
    }
    return previous;
}