#include <iostream>
#include <string>

using namespace std;

// Task 1: Create the Node[cite: 41]
// Each node stores data, a pointer to the previous node, and a pointer to the next node.[cite: 41]
struct Node {
    string data;
    Node* prev;
    Node* next; //[cite: 41, 42]
};

// Create a new node
Node* createNode(string data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->prev = nullptr;
    newNode->next = nullptr;
    return newNode;
}

// Add node to the end of the list
void addNode(Node*& head, Node*& tail, string data) {
    Node* newNode = createNode(data);
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

// Task 3: Forward Traversal
void forwardTraversal(Node* head) {
    Node* current = head;
    cout << "Forward:\n";
    while (current != nullptr) {
        cout << current->data << endl;
        current = current->next;
    }
    cout << endl;
}

// Task 4: Backward Traversal
void backwardTraversal(Node* tail) {
    Node* current = tail;
    cout << "Backward:\n";
    while (current != nullptr) {
        cout << current->data << endl;
        current = current->prev;
    }
    cout << endl;
}

// Task 5: Insert in the Middle
void insertAfter(Node*& tail, Node* current, string data) {
    if (current == nullptr) return;

    Node* newNode = createNode(data);
    newNode->next = current->next;
    newNode->prev = current;

    if (current->next != nullptr) {
        current->next->prev = newNode;
    } else {
        // If inserted at the very end, update the tail
        tail = newNode;
    }
    current->next = newNode;
}

// Task 6: Delete a Node
void deleteNode(Node*& head, Node*& tail, string data) {
    Node* current = head;

    while (current != nullptr && current->data != data) {
        current = current->next;
    }

    if (current == nullptr) {
        cout << data << " not found." << endl;
        return;
    }

    if (current == head) {
        head = current->next;
    }

    if (current == tail) {
        tail = current->prev;
    }

    if (current->prev != nullptr) {
        current->prev->next = current->next;
    }

    if (current->next != nullptr) {
        current->next->prev = current->prev;
    }

    delete current;
}

// Clear all nodes
void clearList(Node*& head, Node*& tail) {
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    head = nullptr;
    tail = nullptr;
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;
    addNode(head, tail, "Song A: Bohemian Rhapsody");
    addNode(head, tail, "Song B: The cure");
    addNode(head, tail, "Song C: Stop the wedding");
    addNode(head, tail, "Song D: Numb");
    addNode(head, tail, "Song E: Bring me to life");

    cout << "FULL LIST CREATION\n";
    forwardTraversal(head);

    cout << "TRAVERSALS\n";
    forwardTraversal(head); 
    backwardTraversal(tail); 

    cout << "INSERT IN THE MIDDLE\n";
    cout << "Action: Inserting 'Song X: Dropdead' between Song B and Song C.\n";
    Node* current = head;
    while (current != nullptr && current->data != "Song B: The cure") {
        current = current->next;
    }
    insertAfter(tail, current, "Song X: Dropdead"); //[cite: 42]
    
    cout << "\nAfter Insertion:\n";
    forwardTraversal(head);
    backwardTraversal(tail);

    cout << "PREDICT BEFORE RUNNING\n";
    cout << "Prediction: If Song C (Stop the wedding) is deleted, Song X will connect directly to Song D.\n\n"; //[cite: 42]

    cout << "DELETE A NODE\n";
    cout << "Action: Deleting 'Song C: Stop the wedding'.\n"; //[cite: 42]
    deleteNode(head, tail, "Song C: Stop the wedding"); //[cite: 42]
    
    cout << "\nAfter Deletion:\n";
    forwardTraversal(head);
    backwardTraversal(tail);

    clearList(head, tail);
    return 0;
}































































































































































































































