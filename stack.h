#ifndef STACK_H
#define STACK_H

#include "list.h"

// Struktur Stack berbasis Linked List
typedef struct {
    List L;
} Stack;

// Prototipe fungsi ADT Stack
void CreateStack(Stack *S);
boolean IsEmptyStack(Stack S);
void Push(Stack *S, int value);
int Pop(Stack *S);
void ClearStack(Stack *S);

#endif

