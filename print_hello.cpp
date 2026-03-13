#include <iostream>
using namespace std;

// Fonction pour calculer le PGCD avec l'algorithme d'Euclide
int pgcd(int a, int b) {
    while (b != 0) {
        int reste = a % b;
        a = b;
        b = reste;
    }
    return a;
}

int main() {
    int x, y;
    cout << "Entrez deux entiers : ";
    cin >> x >> y;

    cout << "Le PGCD de " << x << " et " << y << " est : " << pgcd(x, y) << endl;
    return 0;
}


