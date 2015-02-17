/*****************************************************************
 * Nico Ruan 
 * CS 460 
 * Homework 2
 * Description: sorts complex numbers and also finds the sum and 
 * product of the complex numbers. They are read in from an input
 * file.
 * Developement time: time actually coding was like 4 hrs, 
 * with research and trying to submit correctly, probably closer to 10 hrs.
 ****************************************************************/

#include <iomanip>
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include "complex.h"
#include "SetLimits.h"

using namespace std;

int main(int argc, char * argv[]){
  SetLimits();
  float r, im;
  char i;
  Complex CSum(0,0), CProd(1,1), compNum;
  vector<Complex> CompV;
  int count;
  ifstream input (argv[1]);
  while(input >> compNum){
    if (count < 1)
      CProd = compNum;
    CompV.push_back(compNum);
    if (count > 0)
      CProd = CProd * compNum;
    CSum = CSum + compNum;
    count ++;
  }
  
  sort(CompV.begin(), CompV.end(), compare);
  cout << "The sum of the complex numbers is: " << CSum << endl;
  cout << "The product of the complex numbers is: " << CProd << endl;
  
  for (int i = 0; i < CompV.size(); i++){//prints output
    cout << CompV[i] << endl;
  }
  return 0; 
}
/*
bool compare(Complex i, Complex j){
  return i < j;
  }*/
