#include <iostream>
#include <string>
using namespace std;


string tentukanStatus(int matematika, int bahasaInggris)
 {
    double rataRata = (matematika + bahasaInggris) / 2.0;
    if (rataRata >= 70 || matematika > 80) {
        return "diterima";
    } else {
        return "ditolak";
    }
}

int main() {
    const int jumlahKandidat = 20;
    string namaKandidat[jumlahKandidat];
    int nilaiMatematika[jumlahKandidat];
    int nilaiBahasaInggris[jumlahKandidat];
    string statusPenerimaan[jumlahKandidat];

    
    for (int i = 0; i < jumlahKandidat; ++i)
     {
        cout << "Masukkan nama kandidat ke-" << i + 1 << ": ";
        
        getline(cin >> ws, namaKandidat[i]);
        
        cout << "Masukkan nilai matematika kandidat ke-" << i + 1 << ": ";
        
        cin >> nilaiMatematika[i];
        
        cout << "Masukkan nilai bahasa Inggris kandidat ke-" << i + 1 << ": ";
        
        cin >> nilaiBahasaInggris[i];
        
        statusPenerimaan[i] = tentukanStatus(nilaiMatematika[i], nilaiBahasaInggris[i]);
    }

    
    cout << "\nDaftar status penerimaan kandidat:\n";
    
    cout << "-----------------------------------\n";
    
    cout << "Nama\t\tStatus\n";
    
    cout << "-----------------------------------\n";
    
    for (int i = 0; i < jumlahKandidat; ++i) {
        cout << namaKandidat[i] << "\t\t" << statusPenerimaan[i] << endl;
    }

    
    char ulangi;
    cout << "\nApakah Anda ingin mengulang program? (y/n): ";
    cin >> ulangi;
    if (ulangi == 'y' || ulangi == 'Y') {
        main(); 
    }

    return 0;
}

//1. int Nama, Nim, Daerah;
//2. 
//3. struct siswa     { string nim;
//                      string nama;};
//    int main() {
//    siswa ss [2];
//    for (int i=0;i<2;i++)
//        {
//        cout << "data ke-" << i+1 <<":"<<endl;
//        cout << "Nomor siswa : ";
//        getline (cin,ss[i].nim);
//        cout << "Nama siswa : ";
//        getline (cin,ss[i].nama) ;
//        cin.ignore (1,'\n');
//        cout << endl;
//        };
//        for (int i=0;i<2;i++)
//        {
//        cout <<  endl;
//        cout << "\n NIM     :  " <<ss[i].nim ;
//        cout << "\n Nama    :  " <<ss[i].nama ;
//        }
//    }
//
//4.int bilangan1, bilangan2;
//void inputData ()
//{
//    cout << "masukan bilangan pertama :";
//    cin >> bilangan1;
//    cout << "masukan bilangan kedua";
//    cin >> bilangan2;
//}
//int penjumlahan (int a, int b)
//{
//    return a + b
//}
//int pengurangan (int a, int b)
//{
//    return a - b
//}