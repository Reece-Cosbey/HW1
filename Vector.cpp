/*
 * @file Vector.cpp
 * @author Reece Cosbey
 * @date 2023-16-2023
 * @brief this file runs all the functions held in Vector.h
 *
 *
 */

#include <iostream>
#include "Vector.h"

using namespace std;


Vector::Vector(){
  //Constructor
  vec_ptr = new int[vec_capacity];
  vec_capacity= 0;
  vec_size = 0;
}
Vector::Vector(const Vector &other){
  //Makes the values in the array match
  vec_size = other.vec_size;
  vec_capacity = other.vec_capacity;

  vec_ptr = new int[vec_capacity];

  int cycle = 0;

  while(cycle < vec_size){
    vec_ptr[cycle]=other.vec_ptr[cycle];
    cycle++;
  }

}
Vector::~Vector(){
  //Deconstructor
  delete[] vec_ptr;
  vec_capacity = 0;
  vec_size = 0;
}

Vector& Vector::operator=(const Vector &other){
  //Changes the New array values old values;
  delete[] this->vec_ptr;
  this->vec_size= other.vec_size;
  this->vec_capacity = other.vec_capacity;
  this->vec_ptr = new int[vec_capacity];

  int cycle = 0;
  while(cycle < vec_size){
    vec_ptr[cycle] = other.vec_ptr[cycle];
  }
  return this;
}
int Vector::size(){
  //Returns amount of elements in the vector
  int amount =0;
  int cycle = 0;
  while(cycle<vec_capacity){
    if(vec_ptr[cycle] != 0){
      amount++;
    }
    cycle++;
  }
  vec_size = amount;
  return vec_size;
}
int Vector::capacity(){
  //Returns Vector capacity
  return vec_capacity;
}
void Vector::push_back(int element){
  //puts inputed int to the end if the array
  reserve(vec_size+1);
  vec_ptr[vec_size+1] = element;
}
void Vector::reserve(int n){
  //increases the Array to Store elements
  if(n >= vec_capacity){
    vec_capacity= n2;
  }
}
int& Vector::operator[](unsigned int index){
  //Returns Access to position if it exists within the array;
  if(index >= vec_capacity){
  cout<< "Error" << endl;
}
  return vec_ptr[index];
}
