/*
 * Shree Murthy
 * 2374658
 * shmurthy@chapman.edu
 * CPSC 350-03
 * Assignment 2 
 **/

//This header file sets up all the needed methods and libraies to make sure we can translate characters to Tutnese
#ifndef MODEL_H
#define MODEL_H

//include input/output library for cin/cout and others
#include <iostream>


//includes the standard C++ library 
using namespace std;

class Model{

public:
    Model(); //default constructor
    ~Model(); //default destructor
    string translateSingleCharacter(char s); //Method to translate one character; returns string
    string translateDoubleCharacter(char s); //method to translate a character that is doubled (ex: "e" in tree is a repeated back to back); returns string:
    string toLower(char c); //a method that converts letters into lowercase string outputs
    
};

#endif