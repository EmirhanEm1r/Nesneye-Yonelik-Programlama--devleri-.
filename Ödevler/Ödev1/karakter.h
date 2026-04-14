#ifndef KARAKTER_H
#define KARAKTER_H
#include <string>

// Header dosyalarında using namespace std; kullanmak iyi bir pratik değildir, std:: kullanırız.
class Karakter {
protected:
    std::string isim;
    int can;
    int saldiriGucu;

public:
    Karakter(std::string _isim, int _can, int _saldiriGucu);
    std::string getIsim();
    int getCan();
    void hasarAl(int hasar);
    void iyiles(int miktar);
    virtual void saldir(Karakter& hedef); // Çok biçimlilik için virtual
};

#endif