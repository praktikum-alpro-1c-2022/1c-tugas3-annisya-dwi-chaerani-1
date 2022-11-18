#include <iostream>
#include <cmath>
#include <string>
#include <conio.h>

using namespace std;

int main(){
    string pilihan;
    float I, V, R;

    cout << "Pilih apa yang ingin anda hitung (I/V/R): ";
    cin >> pilihan;

    if(pilihan=="I"){
        cout << "Masukkan nilai V: ";
        cin >> V;
        cout << "Masukkan nilai R: ";
        cin >> R;
        I = V/R;
        cout << "Nilai I adalah: "<<I;
    }else if(pilihan=="V"){
        cout << "Masukkan nilai I: ";
        cin >> V;
        cout << "Masukkan nilai R: ";
        cin >> R;
        V = I*R;
        cout << "Nilai V adalah: "<<V;
    }else if(pilihan=="R"){
        cout << "Masukkan nilai V: ";
        cin >> V;
        cout << "Masukkan nilai R: ";
        cin >> R;
        R = V/I;
        cout << "Nilai R adalah: "<<R;
    }else{
        cout << "Input anda salah";
    }

    return 0;
}
