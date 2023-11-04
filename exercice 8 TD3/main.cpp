#include <iostream>
using namespace std;

template <typename T>
T carre(T valeur) {
    return valeur * valeur;
}

int main() {
    int entier = 5;
    double reel = 3.5;

    cout << "Le Carré de " << entier << " : " << carre(entier) <<endl;
    cout << "Le Carré de " << reel << "  : " << carre(reel) <<endl;

    return 0;
}