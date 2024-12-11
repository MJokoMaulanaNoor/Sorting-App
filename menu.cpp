#include <iostream>
#include <conio.h>
using namespace std;

// Inisialisasi variabel global
int n;

// Fungsi untuk menukar dua nilai
void tukar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Fungsi untuk menampilkan menu
void dMenu() {
    system("cls");
    cout << "Aplikasi Tampilan Menu" << "\n";       
    cout << "1. Input Data" << "\n";            
    cout << "2. Tampilkan Data" << "\n";            
    cout << "3. Sorting Ascending" << "\n";           
    cout << "4. Sorting Descending" << "\n";            
    cout << "5. Exit" << "\n";           
    cout << "Masukan angka :";        
}

// Fungsi untuk menampilkan pesan menu
void mPertama(string pesan) {
    system("cls");
    cout << "Halo, saya menu " << pesan;
    getch();
}

int main() {
    int data[100];
    char pl;

    do {
        dMenu();
        pl = getch();
        switch (pl) {
            case '1':
                system("cls");
                cout << "Masukkan jumlah data: ";
                cin >> n;
                for (int i = 0; i < n; i++) {
                    cout << "Data ke-" << i + 1 << ": ";
                    cin >> data[i];
                }
                break;
            
            case '2':
                system("cls");
                cout << "Data dalam array: \n";
                for (int i = 0; i < n; i++) {
                    cout << "Data ke-" << i + 1 << ": " << data[i] << "\n";
                }
                getch();
                break;

            case '3':
                // Sorting ascending
                for (int i = 0; i < n - 1; i++) {
                    for (int j = i + 1; j < n; j++) {
                        if (data[i] > data[j]) {
                            tukar(&data[i], &data[j]);
                        }
                    }
                }
                system("cls");
                cout << "Data telah diurutkan secara ascending.\n";
                getch();
                break;

            case '4':
                // Sorting descending
                for (int i = 0; i < n - 1; i++) {
                    for (int j = i + 1; j < n; j++) {
                        if (data[i] < data[j]) {
                            tukar(&data[i], &data[j]);
                        }
                    }
                }
                system("cls");
                cout << "Data telah diurutkan secara descending.\n";
                getch();
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
