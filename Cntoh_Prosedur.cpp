#include <iostream>
using namespace std;

double luas, alas, tinggi;

void prosedurInput(){
    cout << "Masukan Nilai Alas : ";
    cin >> alas;

    cout << "Masukan Nilai Tinggi : ";
    cin >> tinggi;
}

void prosedurHitungLuas(){
    luas = (alas * tinggi) * 1/2;
}

void prosedurOutput (){
    cout << "Luas Segitiga = " << luas << endl;
}


int main(){
    prosedurInput();
    prosedurHitungLuas();
    prosedurOutput();

}