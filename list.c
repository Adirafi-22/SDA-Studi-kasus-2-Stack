#include "list.h"

// Membuat list kosong
void CreateList(List *L) {
    First(*L) = Nil;
}

// Mengecek apakah list kosong
boolean ListEmpty(List L) {
    return (First(L) == Nil);
}

// Alokasi elemen baru
address Alokasi(infotype X) {
    address P = (address)malloc(sizeof(ElmtList));
    if (P != Nil) {
        Info(P) = X;
        Next(P) = Nil;
    }
    return P;
}

// Dealokasi elemen
void DeAlokasi(address P) {
    free(P);
}

// Insert First
void InsertFirst(List *L, address P) {
    Next(P) = First(*L);
    First(*L) = P;
}

// Insert Last
void InsertLast(List *L, address P) {
    if (ListEmpty(*L)) {
        First(*L) = P;
    } else {
        address last = First(*L);
        while (Next(last) != Nil) {
            last = Next(last);
        }
        Next(last) = P;
    }
}

// Delete First
void DelFirst(List *L, address *P) {
    if (!ListEmpty(*L)) {
        *P = First(*L);
        First(*L) = Next(First(*L));
        Next(*P) = Nil;
    }
}

// Delete Last
void DelLast(List *L, address *P) {
    if (!ListEmpty(*L)) {
        address prev = Nil;
        *P = First(*L);

        while (Next(*P) != Nil) {
            prev = *P;
            *P = Next(*P);
        }

        if (prev == Nil) {
            First(*L) = Nil;
        } else {
            Next(prev) = Nil;
        }
    }
}

// Cetak List
void PrintInfo(List L) {
    address P = First(L);
    printf("List: ");
    while (P != Nil) {
        printf("%d -> ", Info(P));
        P = Next(P);
    }
    printf("NULL\n");
}

