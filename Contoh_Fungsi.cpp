#include <iostream>
using namespace std;

double luas, alas, tinggi;

void prosedurInput(){
    cout << "Masukan Nilai Alas : ";
    cin >> alas;

    cout << "Masukan Nilai Tinggi : ";
    cin >> tinggi;
}

double prosedurHitungLuas(){
    return 0.5 * alas * tinggi;
}

void prosedurOutput (){
    cout << "Luas Segitiga = " << prosedurHitungLuas() << endl;
}


int main(){

    prosedurInput();
    prosedurOutput();

}