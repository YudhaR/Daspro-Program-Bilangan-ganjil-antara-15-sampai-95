/*
    Program Validasi
    Ket : Program untuk cek bilangan ganjil antara 15 sampai 95
    By  : Yudha Rizqia Grafer
    Tgl : 05 Oktober 2022
*/

#include <iostream>

using namespace std;

int main()
{
    //Kamus
    int bilangan;

    //Algoritma
    cout << "Masukan Bilangan : ";
    cin >> bilangan;
    if ((bilangan %  2 == 1) && (bilangan > 15) && (bilangan < 95))
    {
        cout << bilangan << " adalah bilangan ganjil antara 15 sampai 95 " << endl;
    }
    cout << "Cek Selesai";
    return 0;
}
