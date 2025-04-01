#include <iostream>

using namespace std;

void leggi(int *& , int dim);
/*  *& -> referenza a un puntatore a intero
cioè la funzione può modificare il puntatore
stesso e non solo il valore a cui punta.
 */

void stampa(int *, int dim);


int main() {

    int *nV;
    int dim = 0;
    cout << "Inserire la dimensione del vettore: " << endl;
    cin >> dim;

    leggi(nV , dim);
    stampa(nV , dim);


    return 0;
}


void leggi(int *&nV , int dim) {

     nV = new int[dim];

    for (int i = 0; i < dim; i++) {
        int n = 0;
        cout << "Inserire l'elemento" << endl;
        cin >> n;

        nV[i] = n;
    }

}


void stampa(int *nV , int dim) {
    for (int i = 0; i < dim; i++) {
        cout << "Elemento n: " << i << " | " << "Valore-> "<< nV[i] << endl;

    }
}