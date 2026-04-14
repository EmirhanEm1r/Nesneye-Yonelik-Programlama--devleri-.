#ifndef SAVASCILAR_H
#define SAVASCILAR_H
#include "Karakter.h"

// Oyuncu sınıfı Karakter'den kalıtım (inheritance) alır
class Oyuncu : public Karakter {
public:
    Oyuncu(std::string _isim, int _can, int _saldiriGucu);
    void saldir(Karakter& hedef) override; // Metodu eziyoruz (Override)
};

// Dusman sınıfı Karakter'den kalıtım alır
class Dusman : public Karakter {
public:
    Dusman(std::string _isim, int _can, int _saldiriGucu);
    void saldir(Karakter& hedef) override;
};

#endif