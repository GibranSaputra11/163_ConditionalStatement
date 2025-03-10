#include <iostream>
using namespace std;

double luas, alas, tinggi;

//memasukan nilai
void prosedurInput(){
    cout << "Masukan Nilai Alas : ";
    cin >> alas;

    cout << "Masukan Nilai Tinggi : ";
    cin >> tinggi;
}

//contoh fungsi dengan parameter
double prosedurHitungLuasa2 (double a, double t){
    return 0.5 * a * t;
}

string ukuranSegitiga(double l){
    //jika luas > 60
    if (l > 60){
        return "Besar";
    }
    else{
        return "Kecil";
    }

}

//Menampilkan 
void prosedurOutput2 (){
    cout << "Luas Segitiga = " << ukuranSegitiga(prosedurHitungLuasa2(alas,tinggi)) << endl;
}

int main(){
    prosedurInput();
    prosedurOutput2();
}