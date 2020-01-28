#ifndef CPULOAD_H
#define CPULOAD_H

#include <iostream>

typedef struct Node {
	Node *next, *prev;
	double value;

	Node() {
		next = prev = NULL;
		value = 0;
	}
} Node;

class CpuLoad {
public:
	Node *head, *tail;

	CpuLoad();
	void add(double d);
	void deleteHead();
	double sumOfElements(int elementNum);
};

#endif

