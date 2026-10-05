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

int main() {
    return 0;
}
