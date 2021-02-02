#include <stdio.h>
#include <stdlib.h>
#include "list.h"
//geeksforgeeks.org was used a lot in helping me write linked list

//struct Node* head = NULL;
//struct Node* current;

//trying different route
//int list_add(int data){
//	struct Node* new_node = NULL;
///	new_node->value = data;
//	current->next = new_node;
//	current = new_node;
//	return 0;
//}
void list_add(struct list_element** head, int new_data){
	struct list_element* new_node;
	struct list_element* last = *head;
	new_node->data = new_data;
	new_node->next = NULL;

	if(*head == NULL){
		new_node->prev=NULL;
		*head = new_node;
		return;
	}
	while(last->next != NULL)
		last = last->next;

	last->next = new_node;
	new_node->prev = last;
	return;
}
void list_remove(struct list_element **head, int rem_data){
	struct list_element* temp = *head, *prev;
	if(temp != NULL && temp->data == rem_data){
		*head = temp->next;
		return;
	}
	while(temp != NULL && temp->data != rem_data){
		//prev = current;
		prev = temp;
		//current = current->next;
		temp = temp->next;
	}
	if(temp == NULL)
		return;

	prev->next = temp->next;
}
