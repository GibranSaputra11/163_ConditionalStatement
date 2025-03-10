#include <iostream>
using namespace std;

double luas, alas, tinggi;

void prosedurInput(){
    cout << "Masukan Nilai Alas : ";
    cin >> alas;

    cout << "Masukan Nilai Tinggi : ";
    cin >> tinggi;
}

//contoh fungsi tidak menggunakan parameter
double prosedurHitungLuas(){
    return 0.5 * alas * tinggi;
}

//contoh fungsi dengan parameter
double prosedurHitungLuasa2 (double a, double t){
    return 0.5 * a * t;
}

void prosedurOutput (){
    cout << "Luas Segitiga = " << prosedurHitungLuas() << endl;
}

void prosedurOutput2 (){
    cout << "Luas Segitiga = " << prosedurHitungLuasa2(alas,tinggi) << endl;
}

int main(){
    prosedurInput();
    prosedurOutput();
    prosedurOutput2();
}