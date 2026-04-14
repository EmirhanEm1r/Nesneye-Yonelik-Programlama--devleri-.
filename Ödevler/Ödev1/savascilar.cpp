#include "Savascilar.h"
#include <iostream>

using namespace std;

// Oyuncu Constructor'ı, üst sınıfın (Karakter) constructor'ını çağırır
Oyuncu::Oyuncu(string _isim, int _can, int _saldiriGucu) : Karakter(_isim, _can, _saldiriGucu) {}

void Oyuncu::saldir(Karakter& hedef) {
    cout << "\n=> [SEN] " << isim << " kilicini savurdu! " << saldiriGucu << " hasar verdin." << endl;
    hedef.hasarAl(saldiriGucu);
}

// Dusman Constructor'ı
Dusman::Dusman(string _isim, int _can, int _saldiriGucu) : Karakter(_isim, _can, _saldiriGucu) {}

void Dusman::saldir(Karakter& hedef) {
    cout << "\n=> [DUSMAN] " << isim << " vahsi bir sekilde isirdi! " << saldiriGucu << " hasar aldin." << endl;
    hedef.hasarAl(saldiriGucu);
}