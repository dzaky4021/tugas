#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    float persentaseKehadiran;
    Mahasiswa* next;
};

Mahasiswa* head = nullptr;

void insertHead(string nim, string nama, float persentaseKehadiran) {
    Mahasiswa* mahasiswaBaru = new Mahasiswa;

    mahasiswaBaru->nim = nim;
    mahasiswaBaru->nama = nama;
    mahasiswaBaru->persentaseKehadiran = persentaseKehadiran;
    mahasiswaBaru->next = head;

    head = mahasiswaBaru;
}

void insertLast(string nim, string nama, float persentaseKehadiran) {
    Mahasiswa* mahasiswaBaru = new Mahasiswa;

    mahasiswaBaru->nim = nim;
    mahasiswaBaru->nama = nama;
    mahasiswaBaru->persentaseKehadiran = persentaseKehadiran;
    mahasiswaBaru->next = nullptr;

    if (head == nullptr) {
        head = mahasiswaBaru;
        return;
    }

    Mahasiswa* current = head;

    while (current->next != nullptr) {
        current = current->next;
    }

    current->next = mahasiswaBaru;
}

void deleteHead() {
    if (head == nullptr) {
        cout << "Daftar mahasiswa kosong." << endl;
        return;
    }

    Mahasiswa* temp = head;
    head = head->next;

    delete temp;

    cout << "Mahasiswa paling depan berhasil dihapus." << endl;
}

void deleteLast() {
    if (head == nullptr) {
        cout << "Daftar mahasiswa kosong." << endl;
        return;
    }

    if (head->next == nullptr) {
        delete head;
        head = nullptr;

        cout << "Mahasiswa paling belakang berhasil dihapus." << endl;
        return;
    }

    Mahasiswa* current = head;

    while (current->next->next != nullptr) {
        current = current->next;
    }

    delete current->next;
    current->next = nullptr;

    cout << "Mahasiswa paling belakang berhasil dihapus." << endl;
}

int main() {
    return 0;
}
