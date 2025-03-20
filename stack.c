#include "stack.h"

// Inisialisasi stack kosong
void CreateStack(Stack *S) {
    CreateList(&S->L);
}

// Mengecek apakah stack kosong
boolean IsEmptyStack(Stack S) {
    return ListEmpty(S.L);
}

// Push: Menambahkan elemen ke stack 
void Push(Stack *S, int value) {
    address P = Alokasi(value);
    if (P != Nil) {
        InsertFirst(&S->L, P);
    }
}

// Pop: Menghapus elemen dari stack
int Pop(Stack *S) {
    if (!IsEmptyStack(*S)) {
        address P;
        DelFirst(&S->L, &P);
        int value = Info(P);
        DeAlokasi(P);
        return value;
    } else {
        return -1;  
    }
}

// Membersihkan seluruh stack
void ClearStack(Stack *S) {
    while (!IsEmptyStack(*S)) {
        Pop(S);
    }
}

