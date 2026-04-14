#include "Karakter.h"
#include <iostream>

using namespace std;

// Constructor (Kurucu)
Karakter::Karakter(string _isim, int _can, int _saldiriGucu) {
    isim = _isim;
    can = _can;
    saldiriGucu = _saldiriGucu;
}

string Karakter::getIsim() { return isim; }

int Karakter::getCan() { return can; }

void Karakter::hasarAl(int hasar) {
    can -= hasar;
    if (can < 0) can = 0;
}

void Karakter::iyiles(int miktar) {
    can += miktar;
    cout << isim << " bir iksir icti ve " << miktar << " can yeniledi! (Guncel Can: " << can << ")" << endl;
}

void Karakter::saldir(Karakter& hedef) {
    cout << isim << " saldiriyor! " << saldiriGucu << " hasar verdi." << endl;
    hedef.hasarAl(saldiriGucu);
}