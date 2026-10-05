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

void cetakDaftar() {
    if (head == nullptr) {
        cout << "Daftar mahasiswa kosong." << endl;
        return;
    }

    Mahasiswa* current = head;
    int nomor = 1;

    cout << endl;
    cout << "=============================================" << endl;
    cout << "       DAFTAR KEHADIRAN MAHASISWA" << endl;
    cout << "=============================================" << endl;

    while (current != nullptr) {
        cout << nomor << ". ";
        cout << "NIM: " << current->nim;
        cout << " | Nama: " << current->nama;
        cout << " | Kehadiran: " << current->persentaseKehadiran << "%" << endl;

        current = current->next;
        nomor++;
    }

    cout << "=============================================" << endl;
}

int main() {

    insertLast("101", "Mahesa", 95);
    insertLast("102", "Layya", 90);
    insertLast("103", "Gyio", 88);
    insertLast("104", "Anja", 92);
    insertLast("105", "Fathin", 85);
    insertLast("106", "Nara", 94);
    insertLast("107", "Glen", 89);
    insertLast("108", "Rasya", 91);
    insertLast("109", "Fadhil", 96);
    insertLast("110", "Fariz", 87);
    insertLast("111", "Fazli", 93);
    insertLast("112", "Harel", 90);
    insertLast("113", "Vendra", 86);
    insertLast("114", "Naufal", 95);
    insertLast("115", "Nigel", 84);
    insertLast("116", "Dare", 98);

    int pilihan;

    do {
        cout << endl;
        cout << "====================================" << endl;
        cout << "      MENU LINKED LIST MAHASISWA" << endl;
        cout << "====================================" << endl;
        cout << "1. Insert Head" << endl;
        cout << "2. Insert Last" << endl;
        cout << "3. Delete Head" << endl;
        cout << "4. Delete Last" << endl;
        cout << "5. Cetak Daftar" << endl;
        cout << "0. Keluar" << endl;
        cout << "====================================" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        if (pilihan == 1) {
            string nim, nama;
            float kehadiran;

            cout << "Masukkan NIM: ";
            cin >> nim;

            cout << "Masukkan Nama: ";
            cin.ignore();
            getline(cin, nama);

            cout << "Masukkan Persentase Kehadiran: ";
            cin >> kehadiran;

            insertHead(nim, nama, kehadiran);

            cout << "Mahasiswa berhasil ditambahkan di depan." << endl;
        }
        else if (pilihan == 2) {
            string nim, nama;
            float kehadiran;

            cout << "Masukkan NIM: ";
            cin >> nim;

            cout << "Masukkan Nama: ";
            cin.ignore();
            getline(cin, nama);

            cout << "Masukkan Persentase Kehadiran: ";
            cin >> kehadiran;

            insertLast(nim, nama, kehadiran);

            cout << "Mahasiswa berhasil ditambahkan di belakang." << endl;
        }
        else if (pilihan == 3) {
            deleteHead();
        }
        else if (pilihan == 4) {
            deleteLast();
        }
        else if (pilihan == 5) {
            cetakDaftar();
        }
        else if (pilihan == 0) {
            cout << "Program selesai." << endl;
        }
        else {
            cout << "Pilihan tidak valid." << endl;
        }

    } while (pilihan != 0);

    return 0;
}
