#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main (){
   // perhitungan
   float alas = 8, tinggi = 10;
   float miring;

   cout << "Nilai Alas = " << alas << endl;
   cout << "Nilai Tinggi = " << tinggi << endl;

   miring = sqrt ( pow(alas,2) + pow(tinggi,2));
   cout << "Nilai Sisi Miring = " << miring << endl;

  return 0;
}
