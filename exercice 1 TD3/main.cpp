#include <iostream>
#include "complex.h"

using namespace std;
int main() {
    float real1, imag1 , real2 , imag2;
    cout<<"enter la partie reélle du premier nombre complexe : ";
    cin>>real1;
    cout<<"enter la partie imaginaire du premier nombre complexe : ";
    cin>>imag1;
    cout<<"enter la partie reélle du deuxieme nombre complexe : ";
    cin>>real2;
    cout<<"enter la partie imaginaire du deuxieme nombre complexe  :";
    cin>>imag2;

    complex complex1( real1,imag1);
    complex complex2( real1,imag1);

    complex addition = complex1 + complex2;
    complex soustraction = complex1 - complex2;
    complex multiplication = complex1 * complex2;

    cout<<"addition"<<endl;
    complex1.display();

    cout<<"soustraction : ";
   addition.display();
    cout<<"addition  : ";
    soustraction.display();
    cout<<"multiplication : ";
   multiplication.display();


    return 0;
}
