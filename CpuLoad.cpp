#include "CpuLoad.h"
#include <iostream>

CpuLoad::CpuLoad() {
	head = NULL; tail = NULL;
}

void CpuLoad::add(double d) {
	Node *tmp = new Node;
	tmp->value = d;

	if (head == NULL) {
		head = tail = tmp;
		return;
	}
	tmp->prev = tail;
	tail = tail->next = tmp;
}

void CpuLoad::deleteHead() {
	if (head->next) {
		Node *tmp = head;
		head = head->next;
		head->prev = NULL;
		delete tmp;
	}
}

double CpuLoad::sumOfElements(int elementNum) {
	double sum = 0;
	Node* tmp = tail;
	for (int i = 0; i < elementNum; i++) {
		sum += tmp->value;
		tmp = tmp->prev;
	}
	return sum;
}

