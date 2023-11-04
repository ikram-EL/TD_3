//
// Created by IKRAM EL OMARI on 31/10/2023.
//

#ifndef UNTITLED19_COMPLEX_H
#define UNTITLED19_COMPLEX_H


class complex {
private :
    float real;
    float imag;
public :
    complex (float x, float y);
    // Redéfinition de l'opérateur d'addition
    complex operator + (complex&);
    // Redéfinition de l'opérateur de soustraction
    complex  operator - (complex& );
    // Redéfinition de l'opérateur de multiplication
    complex operator * (complex&);
    void display ();

};


#endif //UNTITLED19_COMPLEX_H
