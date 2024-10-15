#include <iostream>
#include "fibonacci.h"

using namespace std;

int main() {
    int indice;
    int valeur;
    cout<<"Entrez la valeur de l'indice  n "<<endl;
    cin>>indice;
    valeur = calcul(indice);
    cout<<"la valeur de F("<<indice<<") = "<<valeur<<endl;
    return 0;
}
