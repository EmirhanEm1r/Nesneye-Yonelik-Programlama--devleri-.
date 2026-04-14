#include <iostream>
#include "Karakter.h"
#include "Savascilar.h"

using namespace std;

int main() {
    Oyuncu kahraman("Sovalye", 100, 25);
    Dusman canavar("Goblin", 80, 15);

    cout << "=== KARANLIK MAGARAYA HOS GELDIN ===" << endl;
    cout << "Karsina bir " << canavar.getIsim() << " cikti! Savas basliyor...\n" << endl;

    while (kahraman.getCan() > 0 && canavar.getCan() > 0) {
        cout << "---------------------------------" << endl;
        cout << kahraman.getIsim() << " Can: " << kahraman.getCan() << " | " << canavar.getIsim() << " Can: " << canavar.getCan() << endl;
        cout << "1. Saldir\n2. Iksir Ic (20 Can)\nSeciminiz (1/2): ";
        
        int secim;
        cin >> secim;

        if (secim == 1) kahraman.saldir(canavar);
        else if (secim == 2) kahraman.iyiles(20);
        else cout << "Yanlis secim, sira kacti!" << endl;

        if (canavar.getCan() <= 0) {
            cout << "\nTEBRIKLER! " << canavar.getIsim() << " yere yigildi." << endl;
            break;
        }

        canavar.saldir(kahraman);

        if (kahraman.getCan() <= 0) {
            cout << "\nMAALESEF YENILDIN!" << endl;
            break;
        }
    }

    cout << "Oyun bitti. Cikmak icin bir tusa basin...";
    system("pause>nul");
    return 0;
}