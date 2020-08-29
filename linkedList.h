/*
 * linkedList.h
 *
 *  Created on: Aug 27, 2020
 *      Author: HP
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

struct node_1{
	int val;
	int col;
	struct node_1* next;

	struct node_1* (*create)(int val, int col);
	void (*set_next)(struct node_1* elem, int val, int col);
	void (*destroy)(struct node_1* elem);

};

typedef struct node_1 node;

#endif /* LINKEDLIST_H_ */
