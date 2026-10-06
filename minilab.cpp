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

// Menampilkan seluruh isi daftar
void cetakDaftar() {
    if (head == nullptr) {
        cout << "Daftar mahasiswa kosong." << endl;
        return;
    }
    Mahasiswa* current = head;
    int nomor = 1;
    cout << endl;
    cout << "=============================================" << endl;
    cout << "        DAFTAR KEHADIRAN MAHASISWA" << endl;
    cout << "=============================================" << endl;
    while (current != nullptr) {
        cout << nomor << ". NIM: " << current->nim << " | Nama: " << current->nama << " | Kehadiran: " << current->persentaseKehadiran << "%" << endl;
        current = current->next;
        nomor++;
    }
    cout << "=============================================" << endl;
}

int main() {
    // Ruang untuk 16 data awal (Tugas Orang 3)

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

        // Ruang untuk pilihan 1 (Tugas Orang 2)
        // Ruang untuk pilihan 2 (Tugas Orang 3)
        // Ruang untuk pilihan 3 & 4 (Tugas Orang 4)

        if (pilihan == 5) {
            cetakDaftar();
        } else if (pilihan == 0) {
            cout << "Program selesai." << endl;
        } else {
            cout << "Pilihan tidak valid." << endl;
        }

    } while (pilihan != 0);

    return 0;
}
