 #include<iostream>
 using namespace std;

 const int MAX_MATKUL=100;

 void inputmatakuliah(string matkul[],int sks[],int &total_matkul,int index=0){
    if(index>=MAX_MATKUL){
        cout<<"Maksimal mata kuliah tercapai!\n";
        return ;
    }
    cin.ignore();
    cout<<"Mata kuliah "<<index +1<<"(ketik 'selesai' untuk berhenti):";
    string nama;
    getline(cin,nama);
    if(nama=="selesai")return;
    int skstemp;
    while(true){
        cout<<"SKS untuk "<<nama<<":";
        cin>>skstemp;
        cin.ignore();
        if(skstemp<=0){
            cout<<"sks harus di atas 0! silakan coba lagi.\n";
        }else{
            break;
        }
    }

    matkul[index]= nama;
    sks[index]= skstemp;
    total_matkul++;
    inputmatakuliah(matkul,sks,total_matkul,index+1);
 }

 int hitungtotalsks(int sks[],int total_matkul,int index=0){
    if(index>=total_matkul)return 0;
    return sks[index]+hitungtotalsks(sks,total_matkul,index +1);
 }

 int main(){
    string nim,nama;
    string matkul[MAX_MATKUL];
    int sks[MAX_MATKUL];
    int total_matkul=0;

    cout<<"Masukkan NIM :";
    getline(cin,nim);
    cout<<"Masukkan Nama :";
    getline(cin,nama);

    inputmatakuliah(matkul,sks,total_matkul);

    int total=hitungtotalsks(sks,total_matkul);
    long long biaya =total * 125000*0.85;

    cout<<"\n----Hasil----\n";
    cout<<"NIM :"<<nim<<"\nNama :"<<nama<<"\nDaftar mata kuliah :\n";
    for(int i=0;i<total_matkul;i++){
        cout<<"-"<<matkul[i]<<"("<<sks[i]<<"SKS)\n";
    }
    cout<<"Total SKS:"<<total<<"\nTotal Pembayaran:Rp"<<biaya<<endl;

    return 0;
 }
