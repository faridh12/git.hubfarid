#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib> 
using namespace std;

typedef long long LL;
typedef string Str;
typedef char Ch;

class date {
private:
    int pil;
    int pilihan;
    Str ya;
    LL nik[3];
    Str nama[3];
    Str ttl[3];        
    Str jk[3];         
    Ch gol[3][3];      
    Str almt[3];       
    Str rt_rw[3];
    Str kel[3];        
    Str kec[3];        
    Str agm[3];        
    Str status[3];     
    Str kerja[3];      
    Str wni[3];        
    Str berlaku[3];    

public:
    void inputData();
    void displayData();
    void display1(int i); 
    void menu();
    void editdataktp();
    void editdataktpnik();
    void editdata(int index);
    void menuedit();
    void bubblesort();
};

void date::bubblesort() {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (nik[j] > nik[j + 1]) {
                swap(nik[j], nik[j + 1]);
                swap(nama[j], nama[j + 1]);
                swap(ttl[j], ttl[j + 1]);
                swap(jk[j], jk[j + 1]);
                swap(gol[j], gol[j + 1]);
                swap(almt[j], almt[j + 1]);
                swap(rt_rw[j], rt_rw[j + 1]);
                swap(kel[j], kel[j + 1]);
                swap(kec[j], kec[j + 1]);
                swap(agm[j], agm[j + 1]);
                swap(status[j], status[j + 1]);
                swap(kerja[j], kerja[j + 1]);
                swap(wni[j], wni[j + 1]);
                swap(berlaku[j], berlaku[j + 1]);
            }
        }
    }
}

void date::editdata(int index) {
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

        switch(pilihan) {
            case 1:
                cout << "NIK baru: "; cin >> nik[index];
                break;
            case 2:
                cout << "Nama baru: "; getline(cin, nama[index]);
                break;
            case 3:
                cout << "TTL baru: "; getline(cin, ttl[index]);
                break;
            case 4:
                cout << "Jenis kelamin baru: "; getline(cin, jk[index]);
                break;
            case 5:
                cout << "Golongan darah baru: "; cin >> gol[index];
                break;
            case 6:
                cout << "Alamat baru: "; getline(cin, almt[index]);
                break;
            case 7:
                cout << "RT/RW baru: "; getline(cin, rt_rw[index]);
                break;
            case 8:
                cout << "Desa/Kelurahan baru: "; getline(cin, kel[index]);
                break;
            case 9:
                cout << "Kecamatan baru: "; getline(cin, kec[index]);
                break;
            case 10:
                cout << "Agama baru: "; getline(cin, agm[index]);
                break;
            case 11:
                cout << "Status Perkawinan baru: "; getline(cin, status[index]);
                break;
            case 12:
                cout << "Pekerjaan baru: "; getline(cin, kerja[index]);
                break;
            case 13:
                cout << "Kewarganegaraan baru: "; getline(cin, wni[index]);
                break;
            case 14:
                cout << "Berlaku Hingga baru: "; getline(cin, berlaku[index]);
                break;
            case 0:
                return;
            default:
                cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 0);
}

void date::inputData() {
    cout << "====== MASUKKAN DATA KTP ======" << endl;
    for(int i = 0; i < 3; i++) {
        cout << "Masukkan data Ke-" << i+1 << ":" << endl;
        cout << "Masukkan NIK: ";
        cin >> nik[i];
        cin.ignore();
        cout << "Masukkan Nama: ";
        getline(cin, nama[i]);
        cout << "Masukkan Tempat/Tgl Lahir: ";
        getline(cin, ttl[i]);
        cout << "Masukkan Jenis Kelamin: ";
        getline(cin, jk[i]);
        cout << "Masukkan Golongan Darah (A/B/AB/O): ";
        cin >> gol[i];
        cin.ignore();
        cout << "Masukkan Alamat: ";
        getline(cin, almt[i]);
        cout << "Masukkan RT/RW: ";
        getline(cin, rt_rw[i]);
        cout << "Masukkan Kelurahan/Desa: ";
        getline(cin, kel[i]);
        cout << "Masukkan Kecamatan: ";
        getline(cin, kec[i]);
        cout << "Masukkan Agama: ";
        getline(cin, agm[i]);
        cout << "Masukkan Status Perkawinan: ";
        getline(cin, status[i]);
        cout << "Masukkan Pekerjaan: ";
        getline(cin, kerja[i]);
        cout << "Masukkan Kewarganegaraan: ";
        getline(cin, wni[i]);
        cout << "Masukkan Berlaku Hingga: ";
        getline(cin, berlaku[i]);
        cout << "===========================================" << endl;
    }
}

void date::display1(int i) {
    const int lebar = 60;
    cout << "Data ke-" << i+1 << endl;
    cout << "================================================================" << endl;
    cout << setw((lebar + 18) / 2) << "KARTU TANDA PENDUDUK (KTP)" << endl;
    cout << "NIK               : " << nik[i] << endl;
    cout << "Nama              : " << nama[i] << endl;
    cout << "Tempat/Tgl Lahir  : " << ttl[i] << endl;
    cout << "Jenis Kelamin     : " << jk[i] << "    Gol Darah: " << gol[i] << endl;
    cout << "Alamat            : " << almt[i] << endl;
    cout << "RT/RW             : " << rt_rw[i] << endl;
    cout << "Kel/Desa          : " << kel[i] << endl;
    cout << "Kecamatan         : " << kec[i] << endl;
    cout << "Agama             : " << agm[i] << endl;
    cout << "Status Perkawinan : " << status[i] << endl;
    cout << "Pekerjaan         : " << kerja[i] << endl;
    cout << "Kewarganegaraan   : " << wni[i] << endl;
    cout << "Berlaku Hingga    : " << berlaku[i] << endl;
}

void date::displayData() {
    for(int i = 0; i < 3; i++) {
        display1(i);
    }
}

void date::editdataktp() {
    string cari;
    cout << "Masukkan Nama Ktp yang mau kamu edit: ";
    cin >> cari;
    bool found = false;
    
    for(int i = 0; i < 3; i++) {
        if(cari == nama[i]) {
            found = true;
            display1(i);
            editdata(i);
            system("cls");
            cout << "Hasil setelah di ubah" << endl;
            display1(i);
            system("pause");
            system("cls");
            menuedit();
            return;
        }
    }
    
    if(!found) {
        cout << "Data tidak di temukan" << endl;
        system("pause");
        editdataktp();
    }
}

void date::editdataktpnik() {
    LL cari;
    cout << "Masukkan Nik Ktp yang mau kamu edit: ";
    cin >> cari;
    bool found = false;
    
    for(int i = 0; i < 3; i++) {
        if(cari == nik[i]) {
            found = true;
            display1(i);
            editdata(i);
            system("cls");
            cout << "Hasil setelah di ubah" << endl;
            display1(i);
            system("pause");
            system("cls");
            menuedit();
            return;
        }
    }
    
    if(!found) {
        cout << "Data tidak di temukan" << endl;
        system("pause");
        editdataktpnik();
    }
}

void date::menuedit() {
    cout << "Apakah anda ingin mengedit data ktp (ya/tidak) :";
    cin >> ya;
    if(ya == "ya" || ya == "YA") {
        do {
            cout << "===== MENU =====" << endl;
            cout << "1. Cari Data Edit Berdasarkan Nama" << endl;
            cout << "2. Cari Data Edit Berdasarkan Nik" << endl;
            cout << "0. Keluar" << endl;
            cout << "Masukkan pilihan :";
            cin >> pil;
            
            switch(pil) {
                case 1:
                    system("cls");
                    editdataktp();
                    break;
                case 2:
                    system("cls");
                    editdataktpnik();
                    break;
                case 0:
                    cout << "program selesai" << endl;
                    return;
                default:
                    cout << "Inputan tidak valid" << endl;
                    break;
            }
        } while(pil != 0);
    } else {
        system("cls");
        menu();
    }
}

void date::menu() {
    system("cls");
    cout << "Input Data KTP\n";
    inputData();
    
    do {
        cout << "===== MENU UTAMA =====" << endl;
        cout << "1. Edit ktp" << endl;
        cout << "2. Lihat data ktp" << endl;
        cout << "3. Urutkan data berdasarkan NIK" << endl;
        cout << "0. keluar" << endl;
        cout << "Masukkan pilihan :";
        cin >> pil;
        
        switch(pil) {
            case 1:
                system("cls");
                menuedit();
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
            case 0:
                cout << "program selesai" << endl;
                return;
            default:
                cout << "Inputan tidak valid" << endl;
                break;
        }
    } while(pil != 0);
}

int main() {
    date dt;
    dt.menu();
    return 0;
}