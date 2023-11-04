#include <iostream>
using namespace std;

class Test {
public:
    static int tableau[];
    static const int tableauSize = 10; // Définir la taille du tableau
public:
    static int division(int indice, int diviseur) {
        if (diviseur == 0) {
            throw runtime_error("Division par zéro n'est pas autorisée.");
        }
        if (indice < 0 || indice >= tableauSize) {
            throw out_of_range("Indice de tableau invalide.");
        }
        return tableau[indice] / diviseur;
    }
};

int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5};

int main() {
    int x, y;
    cout << "Entrez l’indice de l’entier à diviser: " << endl;
    cin >> x;
    cout << "Entrez le diviseur: " << endl;
    cin >> y;

    try {
        int resultat = Test::division(x, y);
        cout << "Le résultat de la division est: " << resultat << endl;
    } catch (const runtime_error& e) {
        cerr << "Erreur: " << e.what() << endl;
    } catch (const out_of_range& e) {
        cerr << "Erreur: " << e.what() << endl;
    }

    return 0;
}
