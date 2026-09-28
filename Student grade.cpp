#include <iostream>
#include <string>
using namespace std;

// 1. Struct Definition
struct nilaiSTD {
    double clo1;
    double clo2;
    double clo3;
    double clo4;
    double nilaiAkhir;
    string indeks;
};

// 2. Function to Calculate Final Score
double hitungNilaiAkhir(double clo1, double clo2, double clo3, double clo4) {
    return (0.30 * clo1) + (0.30 * clo2) + (0.20 * clo3) + (0.20 * clo4);
}

// 3. Function to Determine Grade Index
string tentukanIndeks(double nilai) {
    if (nilai > 80) return "A";
    else if (nilai > 70) return "AB";
    else if (nilai > 65) return "B";
    else if (nilai > 60) return "BC";
    else if (nilai > 50) return "C";
    else if (nilai > 40) return "D";
    else return "E";
}

int main() {
    const int JML_MAHASISWA = 3;
    nilaiSTD mahasiswa[JML_MAHASISWA];

    cout << "=== STUDENT GRADE SYSTEM ===" << endl;

    // Loop for User Input
    for (int i = 0; i < JML_MAHASISWA; i++) {
        cout << "\nMahasiswa " << i + 1 << endl;
        cout << "CLO 1: ";
        cin >> mahasiswa[i].clo1;
        cout << "CLO 2: ";
        cin >> mahasiswa[i].clo2;
        cout << "CLO 3: ";
        cin >> mahasiswa[i].clo3;
        cout << "CLO 4: ";
        cin >> mahasiswa[i].clo4;

        // Calculate Final Score & Grade Index
        mahasiswa[i].nilaiAkhir = hitungNilaiAkhir(
            mahasiswa[i].clo1,
            mahasiswa[i].clo2,
            mahasiswa[i].clo3,
            mahasiswa[i].clo4
        );
        mahasiswa[i].indeks = tentukanIndeks(mahasiswa[i].nilaiAkhir);
    }

    // Loop for Displaying Output
    cout << "\n=== HASIL ===" << endl;
    for (int i = 0; i < JML_MAHASISWA; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        cout << "Nilai Akhir: " << mahasiswa[i].nilaiAkhir << endl;
        cout << "Indeks: " << mahasiswa[i].indeks << endl << endl;
    }

    return 0;
}
