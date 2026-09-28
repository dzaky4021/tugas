extern "C" int printf(const char*, ...);

struct ElmList {
    int info;
    ElmList* next;
};

struct List {
    ElmList* first;
};

// Function Implementations
void createList(List &L) {
    L.first = nullptr;
}

ElmList* createNewElement(int value) {
    ElmList* P = new ElmList;
    P->info = value;
    P->next = nullptr;
    return P;
}

void insertFirst(List &L, ElmList* P) {
    P->next = L.first;
    L.first = P;
}

void insertLast(List &L, ElmList* P) {
    if (L.first == nullptr) {
        L.first = P;
    } else {
        ElmList* Q = L.first;
        while (Q->next != nullptr) {
            Q = Q->next;
        }
        Q->next = P;
    }
}

void insertAfter(ElmList* Prec, ElmList* P) {
    if (Prec != nullptr) {
        P->next = Prec->next;
        Prec->next = P;
    }
}

void printList(List L) {
    ElmList* P = L.first;
    while (P != nullptr) {
        printf("%d ", P->info);
        P = P->next;
    }
    printf("\n");
}

ElmList* searchElement(List L, int key) {
    ElmList* P = L.first;
    while (P != nullptr) {
        if (P->info == key) {
            return P;
        }
        P = P->next;
    }
    return nullptr;
}

void deleteFirst(List &L) {
    if (L.first == nullptr) {
        printf("List is empty\n");
        return;
    }
    ElmList* P = L.first;
    L.first = L.first->next;
    P->next = nullptr;
    delete P;
}

int main() {
    List L;
    createList(L);

    insertLast(L, createNewElement(10));
    insertLast(L, createNewElement(20));
    insertLast(L, createNewElement(30));
    
    printList(L); // Target: 10 20 30

    insertFirst(L, createNewElement(5));
    printList(L); // Target: 5 10 20 30

    if (searchElement(L, 20) != nullptr) {
        printf("FOUND\n");
    } else {
        printf("NOT FOUND\n");
    }

    deleteFirst(L);
    printList(L); // Target: 10 20 30

    return 0;
}
