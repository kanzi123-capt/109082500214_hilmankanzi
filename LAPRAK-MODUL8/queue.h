
#ifndef QUEUE_H_INCLUDE
#define QUEUE_H_INCLUDE

#include <iostream>

#define Nil NULL

typedef int infotype;
typedef bool boolean;
typedef struct elmQ *address;

struct elmQ {
    infotype info;
    address next;
};

struct queue {
    address head;
    address tail;
};

typedef struct queue queue;

boolean isEmpty(queue Q);
void CreateQueue(queue &Q);

address alokasi(infotype X);
void dealokasi(address P);

address findElm(queue Q, infotype X);
boolean fFindElm(queue Q, address P);

void insert(queue &Q, address P);
void deleteQueue(queue &Q, address &P);

void printInfo(queue Q);
int nbList(queue Q);
void delAll(queue &Q);

#endif
