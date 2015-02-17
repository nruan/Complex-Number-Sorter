/***********************************************************
 * Nico Ruan 
 * complex.cpp
 * Description: contains all the function implementations for 
 * dealing with the complex numbers
 ***********************************************************/
#include <iostream>
#include "complex.h" 

using namespace std;

Complex::Complex()
{}

Complex::Complex(float r, float im){
  real = r;
  imag = im;
}

Complex Complex::operator+(Complex num){
  Complex sum;
  sum.real = real + num.real;
  sum.imag = imag + num.imag;
  return sum;
}
 
Complex Complex::operator*(Complex num){
  Complex product;
  float real_R, real_I, imag_R, imag_I;//first part is the part of first num second is
  //part of second
  //(r1*im1) * (r2*im2)
  real_R = real * num.real;//r1*r2
  real_I = real * num.imag;//r1*im2
  imag_R = imag * num.real;//im1*r2
  imag_I = imag * num.imag;//im1*im2 (i*i = -1 so we have to multiply by -1)

  product.real = real_R + (0-imag_I);
  product.imag = real_I + imag_R;
  return product;
}

ostream& operator<<(ostream& os, Complex num){
  
  if(num.imag > 0)
    os << num.real << '+' << num.imag << 'i';
  else
    os << num.real << num.imag << 'i';
  return os;
}


istream& operator>>(istream &is, Complex &num){
  double r, im;
  char i;
  is >> r >> im >> i;
  num = Complex(r,im);
  return is;
}

bool operator< (Complex num1,Complex num2){
  if (num1.real == num2.real && num1.imag < num2.imag)
    return true;
  return num1.real < num2.real;
}

bool compare(Complex i, Complex j){
  return i < j;
}
