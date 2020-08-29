/*
 * linkedList.c
 *
 *  Created on: Aug 27, 2020
 *      Author: HP
 */
#include "linkedList.h"
#include <stdlib.h>
#include <stdio.h>

node* create(int val, int col){
	node *elem = (node*)malloc(sizeof(node));
	elem -> val = val;
	elem -> col = col;
	elem -> next = NULL;

	return elem;
}

void set_next(node* elem, int val, int col){
	elem -> next = create(val,col);
}

void destroy(node* elem){
	node *next;
	while(elem != NULL){
		next = elem -> next;
		free(elem);
		elem = next;
	}

}
