#include <iostream>
#include <conio.h>
using namespace std;

// Variabel global
int n;
int data[100];

// Fungsi tukar
void tukar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Fungsi untuk input data
void masukkanData() {
    system("cls");
    cout << "Masukkan jumlah data: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Masukkan data ke-" << i + 1 << ": ";
        cin >> data[i];
    }
    cout << "Data berhasil dimasukkan.";
    getch();
}

// Fungsi untuk menampilkan data
void tampilkanData() {
    system("cls");
    cout << "Data: ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    getch();
}

// Fungsi sorting ascending
void sortingAsc() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                tukar(&data[j], &data[j + 1]);
            }
        }
    }
    cout << "Data telah diurutkan secara ascending.";
    getch();
}

// Fungsi sorting descending
void sortingDsc() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j] < data[j + 1]) {
                tukar(&data[j], &data[j + 1]);
            }
        }
    }
    cout << "Data telah diurutkan secara descending.";
    getch();
}

// Menu utama
void dMenu() {
    system("cls");
    cout << "Aplikasi Sorting Bubble" << "\n";
    cout << "1. masukkan data" << "\n";
    cout << "2. tampilkan data" << "\n";
    cout << "3. sorting asc" << "\n";
    cout << "4. sorting dsc" << "\n";
    cout << "5. Exit" << "\n";
    cout << "Masukan angka :";
}

int main() {
    char pl;
    do {
        dMenu();
        pl = getch();
        switch (pl) {
        case '1':
            masukkanData();
            break;
        case '2':
            tampilkanData();
            break;
        case '3':
            sortingAsc();
            break;
        case '4':
            sortingDsc();
            break;
        case '5':
            break;
        default:
            system("cls");
            cout << "Pilihan Tidak Tersedia";
            getch();
            break;
        }
    } while (pl != '5');
    return 0;
}
