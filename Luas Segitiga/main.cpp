#include <iostream>

using namespace std;

int main()
{
    int alas, tinggi;
    float luas;

    cout << "=======================================================" << endl;
    cout << "============== MENGHITUNG LUAS SEGITIGA ===============" << endl;
    cout << "=======================================================" << endl <<endl;

    cout << "Masukkan Nilai Alas : ";
    cin >> alas;
    cout << "Masukkan Nilai Tinggi : ";
    cin >> tinggi;
    luas = 0.5 * alas * tinggi;
    cout << "luas segitiga = " << luas << endl;
    return 0;

}
