//
// Created by IKRAM EL OMARI on 31/10/2023.
//

#include "complex.h"
#include <iostream>
using namespace std;

    complex :: complex (float x , float y) : real(x) , imag(y) {}
// Redéfinition de l'opérateur d'addition
    complex complex :: operator + (complex& other) {
    return complex (real +other.real,imag + other.imag );
    }
// Redéfinition de l'opérateur de soustraction
    complex  complex :: operator - (complex& other) {
    return complex (real -other.real,imag -other.imag );
    }
// Redéfinition de l'opérateur de multiplication
    complex  complex :: operator * (complex &other){
    float A = real* other.real - imag *other.imag;
    float B=real*other.imag + imag *other.real;
    return complex (A,B);
    }
// affichage nombre complexe
    void complex :: display () {
        cout<<real <<"+" << imag <<endl;
     }
