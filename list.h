#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"

#define Nil NULL
#define Info(P) (P)->info
#define Next(P) (P)->next
#define First(L) (L).First

typedef int infotype;
typedef struct tElmtList *address;
typedef struct tElmtList {
    infotype info;
    address next;
} ElmtList;

typedef struct {
    address First;
} List;

/* Prototipe fungsi */
void CreateList(List *L);
boolean ListEmpty(List L);
address Alokasi(infotype X);
void DeAlokasi(address P);

/* Operasi Insert */
void InsertFirst(List *L, address P);
void InsertLast(List *L, address P);

/* Operasi Delete */
void DelFirst(List *L, address *P);
void DelLast(List *L, address *P);

/* Cetak List */
void PrintInfo(List L);

#endif

