/***********************************************
 * Nico Ruan
 * complex.h
 * stores the prototypes and class members for 
 * the program
 **********************************************/
#include<algorithm> 
#include<vector>
#include <iostream>
using namespace std;

class Complex
{
 public:
  float real, imag;
  Complex();
  Complex(float, float);
  Complex operator+(Complex);
  Complex operator*(Complex);
};

ostream& operator<<(ostream&,Complex);
istream& operator>>(istream&,Complex&);
bool operator<(Complex,Complex);
bool compare(Complex i, Complex j);
