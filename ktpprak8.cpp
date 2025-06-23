#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <limits> 
using namespace std;

class date {
private:
    string dataKTP[3][14]; 
    int pil;
    int pilihan;

public:
    void inputData();
    void displayData();
    void display1(int i);
    void menu();
    void editdata(int index);
    void bubblesort();
    void searchByNIK();
};

// Fungsi untuk mencari data berdasarkan NIK
void date::searchByNIK() {
    system("cls");
    cout << "====== PENCARIAN DATA BERDASARKAN NIK ======" << endl;
    string cariNIK;
    cout << "Masukkan NIK yang ingin dicari: ";
    cin >> cariNIK;

    bool found = false;
    for (int i = 0; i < 3; i++) {
        if (dataKTP[i][0] == cariNIK) {
            cout << "Data ditemukan!" << endl;
            display1(i); // Menampilkan data yang ditemukan
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Data dengan NIK \"" << cariNIK << "\" tidak ditemukan!" << endl;
    }

    system("pause");
    system("cls");
}

// Fungsi untuk menginput data KTP
void date::inputData() {
    cout << "====== MASUKKAN DATA KTP ======" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Masukkan data Ke-" << i + 1 << ":" << endl;
         
        cout << "Masukkan NIK: ";
        cin.ignore();
        getline(cin, dataKTP[i][0]); 
        
        cout << "Masukkan Nama: ";
        getline(cin, dataKTP[i][1]);
        
        cout << "Masukkan Tempat/Tgl Lahir: ";
        getline(cin, dataKTP[i][2]);
        
        cout << "Masukkan Jenis Kelamin: ";
        getline(cin, dataKTP[i][3]);
        
        cout << "Masukkan Golongan Darah (A/B/AB/O): ";
        getline(cin, dataKTP[i][4]); 
        
        cout << "Masukkan Alamat: ";
        getline(cin, dataKTP[i][5]);
        
        cout << "Masukkan RT/RW: ";
        getline(cin, dataKTP[i][6]);
        
        cout << "Masukkan Kelurahan/Desa: ";
        getline(cin, dataKTP[i][7]);
        
        cout << "Masukkan Kecamatan: ";
        getline(cin, dataKTP[i][8]);
        
        cout << "Masukkan Agama: ";
        getline(cin, dataKTP[i][9]);
        
        cout << "Masukkan Status Perkawinan: ";
        getline(cin, dataKTP[i][10]);
        
        cout << "Masukkan Pekerjaan: ";
        getline(cin, dataKTP[i][11]);
        
        cout << "Masukkan Kewarganegaraan: ";
        getline(cin, dataKTP[i][12]);
        
        cout << "Masukkan Berlaku Hingga: ";
        getline(cin, dataKTP[i][13]);
        
        cout << "===========================================" << endl;
    }
    system("pause");
    menu();
}

// Fungsi untuk menampilkan data KTP
void date::display1(int i) {
    cout << "Data ke-" << i + 1 << endl;
    cout << "================================================================" << endl;
    cout << "NIK               : " << dataKTP[i][0] << endl;
    cout << "Nama              : " << dataKTP[i][1] << endl;
    cout << "Tempat/Tgl Lahir  : " << dataKTP[i][2] << endl;
    cout << "Jenis Kelamin     : " << dataKTP[i][3] << "    Gol Darah: " << dataKTP[i][4] << endl;
    cout << "Alamat            : " << dataKTP[i][5] << endl;
    cout << "RT/RW             : " << dataKTP[i][6] << endl;
    cout << "Kel/Desa          : " << dataKTP[i][7] << endl;
    cout << "Kecamatan         : " << dataKTP[i][8] << endl;
    cout << "Agama             : " << dataKTP[i][9] << endl;
    cout << "Status Perkawinan : " << dataKTP[i][10] << endl;
    cout << "Pekerjaan         : " << dataKTP[i][11] << endl;
    cout << "Kewarganegaraan   : " << dataKTP[i][12] << endl;
    cout << "Berlaku Hingga    : " << dataKTP[i][13] << endl;
    cout << "================================================================" << endl;
}

void date::displayData() {
    for (int i = 0; i < 3; i++) {
        display1(i);
    }
}

// Fungsi untuk mengedit data KTP
void date::editdata(int index) {
    if (index < 0 || index >= 3) {
        cout << "Indeks tidak valid!" << endl;
        return;
    }

    do {
        cout << "\n== MENU EDIT DATA KTP ==\n";
        cout << "1. NIK\n";
        cout << "2. Nama\n";
        cout << "3. Tempat/Tgl Lahir\n";
        cout << "4. Jenis Kelamin\n";
        cout << "5. Golongan Darah\n";
        cout << "6. Alamat\n";
        cout << "7. RT/RW\n";
        cout << "8. Kelurahan/Desa\n";
        cout << "9. Kecamatan\n";
        cout << "10. Agama\n";
        cout << "11. Status Perkawinan\n";
        cout << "12. Pekerjaan\n";
        cout << "13. Kewarganegaraan\n";
        cout << "14. Berlaku Hingga\n";
        cout << "0. Selesai Edit\n";
        cout << "Pilihan Anda: ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1:
                cout << "NIK baru: ";
                getline(cin, dataKTP[index][0]);
                break;
            case 2:
                cout << "Nama baru: ";
                getline(cin, dataKTP[index][1]);
                break;
            case 3:
                cout << "TTL baru: ";
                getline(cin, dataKTP[index][2]);
                break;
            case 4:
                cout << "Jenis kelamin baru: ";
                getline(cin, dataKTP[index][3]);
                break;
            case 5:
                cout << "Golongan darah baru: ";
                getline(cin, dataKTP[index][4]); 
                break;
            case 6:
                cout << "Alamat baru: ";
                getline(cin, dataKTP[index][5]);
                break;
            case 7:
                cout << "RT/RW baru: ";
                getline(cin, dataKTP[index][6]);
                break;
            case 8:
                cout << "Desa/Kelurahan baru: ";
                getline(cin, dataKTP[index][7]);
                break;
            case 9:
                cout << "Kecamatan baru: ";
                getline(cin, dataKTP[index][8]);
                break;
            case 10:
                cout << "Agama baru: ";
                getline(cin, dataKTP[index][9]);
                break;
            case 11:
                cout << "Status Perkawinan baru: ";
                getline(cin, dataKTP[index][10]);
                break;
            case 12:
                cout << "Pekerjaan baru: ";
                getline(cin, dataKTP[index][11]);
                break;
            case 13:
                cout << "Kewarganegaraan baru: ";
                getline(cin, dataKTP[index][12]);
                break;
            case 14:
                cout << "Berlaku Hingga baru: ";
                getline(cin, dataKTP[index][13]);
                break;
            case 0:
                return;
            default:
                cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 0);
}

// Fungsi untuk mengurutkan data berdasarkan NIK
void date::bubblesort() {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (dataKTP[j][0] > dataKTP[j + 1][0]) {
                for (int k = 0; k < 14; k++) {
                    swap(dataKTP[j][k], dataKTP[j + 1][k]);
                }
            }
        }
    }
}

// Fungsi menu utama
void date::menu() {
    system("cls");


    do {
        cout << "===== MENU UTAMA =====" << endl;
        cout << "1. Edit KTP" << endl;
        cout << "2. Lihat Data KTP" << endl;
        cout << "3. Urutkan Data Berdasarkan NIK" << endl;
        cout << "4. Cari Data Berdasarkan NIK" << endl; // Tambahkan menu searching
        cout << "0. Keluar" << endl;
        cout << "Masukkan pilihan: ";
        if (!(cin >> pil)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input tidak valid! Harap masukkan angka.\n";
            continue;
        }

        switch (pil) {
            case 1:
                system("cls");
                cout << "Masukkan indeks data yang ingin diedit (0-2): ";
                cin >> pilihan;
                cin.ignore(); 
                if (pilihan >= 0 && pilihan < 3) {
                    editdata(pilihan);
                } else {
                    cout << "Indeks tidak valid!" << endl;
                }
                break;
            case 2:
                system("cls");
                displayData();
                system("pause");
                system("cls");
                break;
            case 3:
                system("cls");
                bubblesort();
                cout << "Data telah diurutkan berdasarkan NIK" << endl;
                displayData();
                system("pause");
                system("cls");
                break;
            case 4: 
                system("cls");
                searchByNIK();
                break;
            case 0:
                cout << "Program selesai" << endl;
                return;
            default:
                cout << "Inputan tidak valid" << endl;
                break;
        }
    } while (pil != 0);
}

int main() {
    date dt;
    dt.inputData();
    return 0;
}