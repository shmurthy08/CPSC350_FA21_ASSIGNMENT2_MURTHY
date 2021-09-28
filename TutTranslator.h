/*
 * Shree Murthy
 * 2374658
 * shmurthy@chapman.edu
 * CPSC 350-03
 * Assignment 2
 **/

//This header file sets up all the needed methods and libraies to make sure we translate tutnese words into english words
#ifndef TUTTRANSLATOR_H
#define TUTTRANSLATOR_H

//include input/output library for cin/cout and others
#include <iostream>

//includes the standard C++ library 
using namespace std;

class TutTranslator{

public:
    TutTranslator(); //default constructor
    ~TutTranslator(); //default destructor
    string translateTutToEnglish(string s); //translate tutnese characters into its corresponding english characters. 
    
private:
    
    string translateTutLetters(string temp); //a helper method designed to handle all translations (double and single characters)
    string capitalize(string tutString, string engString); //a method that takes the final english string and capitalizes it, if necessary
    bool isTut = false; //a boolean variable that checks if a string is a valid tutnese string
};


#endif
