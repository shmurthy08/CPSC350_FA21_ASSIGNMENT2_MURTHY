/*
 * Shree Murthy
 * 2374658
 * shmurthy@chapman.edu
 * CPSC 350-03
 * Assignment 2 
 **/

//This file handles the specfic translations of characters. It can translate english single and double characters. The program will hold the translations for every letter.

//include the methods from the respective header file
#include "Model.h"

//import the standard c++ library 
using namespace std;


//Default Constructor
Model::Model(){
    //default constructor

}

//Default Destructor
Model::~Model(){
    //default destructor
}

/** Translating a single character
 * This method takes in a single character (represented by param char s) and returns the Tutnese form of the character as a string output
 */
string Model::translateSingleCharacter(char s){
    if(s == 'B'){
        return "Bub";
    }
    else if(s == 'b'){
        return "bub";
    }
    else if(s == 'C'){
        return "Cash";
    }
    else if(s == 'c'){
        return "cash";
    }
    else if(s == 'D'){
        return "Dud";
    }
    else if(s == 'd'){
        return "dud";
    }
    else if(s == 'F'){
        return "Fuf";
    }
    else if(s == 'f'){
        return "fuf";
    }
    else if(s == 'G'){
        return "Gug";
    }
    else if(s == 'g'){
        return "gug";
    }
    else if(s == 'H'){
        return "Hash";
    }
    
    else if(s == 'h'){
        return "hash";
    }
    
    else if(s == 'J'){
        return "Jay";
    }
    
    else if(s == 'j'){
        return "jay";

    }
    else if(s == 'K'){
        return "Kuck";
    }
    else if(s == 'k'){
        return "kuck";
    }
    
    else if(s == 'L'){
        return "Lul";
    }
    
    else if(s == 'l'){
        return "lul";
    }
    
    else if(s == 'M'){
        return "Mum";
    }
    
    else if(s == 'm'){
        return "mum";
    }
    else if(s == 'N'){
        return "Nun";
    }
    
    else if(s == 'n'){
        return "nun";
    }
    
    else if(s == 'P'){
        return "Pub";
    }
    
    else if(s == 'p'){
        return "pub";
    }
    
    else if(s == 'Q'){
        return "Quack";
    }
    else if(s == 'q'){
        return "quack";
    }
    else if(s == 'R'){
        return "Rug";
    }
    else if(s == 'r'){
        return "rug";
    }
    
    else if(s == 'S'){
        return "Sus";
    }
    else if(s == 's'){
        return "sus";
    }
    
    else if(s == 'T'){
        return "Tut";
    }
    else if(s == 't'){
        return "tut";
    }
    
    else if(s == 'V'){
        return "Vuv";
    }
    else if(s == 'v'){
        return "vuv";
    }
    
    else if(s == 'W'){
        return "Wack";
    }
    else if(s == 'w'){
        return "wack";
    }
    
    else if(s == 'X'){
        return "Ex";
    }
    else if(s == 'x'){
        return "ex";
    }
    
    else if(s == 'Y'){
        return "Yub";
    }
    else if(s == 'y'){
        return "yub";
    }
    else if(s == 'Z'){
        return "Zub";
    }
    else if(s == 'z'){
        return "zub";
    }
    //convert the char input into a string such that the function can return a string output
    else{
        string c = "";
        c += s;
        return c;
    }

}


/** Translating a character that repeats (ex: the "e" in tree is a double character)
 * This method takes in a single character that is repeated (represented by param char s) and returns the Tutnese form of the character as a string output
 */
string Model::translateDoubleCharacter(char s){
    //check if letter is an uppercase vowel and then return the tutnese form
    if(s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U'){
        return "Squat" + toLower(s); //call the tolower method to preseve capitalization only at the beginning of the output
    }
    //check if letter is a lowercase vowel and then return the tutnese form
    else if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u'){

        string c = "";
        c += s; //convert the char input into a string such that the function can return a string output
        return "squat" + c;
    }
    else{
        return "squa" + translateSingleCharacter(s);
    }
}

/** A method that translates characters into its lowercase form. The existing std::string doesn't have a toLower() method. 
 * This method takes in a character and outputs its lowercase form as a string.
 */ 
string Model::toLower(char c){
    if(c == 'A'){
        return "a";
    }
    if(c == 'B'){
        return "b";
    }
    if(c == 'C'){
        return "c";
    }
    if(c == 'D'){
        return "d";
    }
    if(c == 'E'){
        return "e";
    }
    if(c == 'F'){
        return "f";
    }
    if(c == 'G'){
        return "g";
    }
    if(c == 'H'){
        return "h";
    }
    if(c == 'I'){
        return "i";
    }
    if(c == 'J'){
        return "j";
    }
    if(c == 'K'){
        return "k";
    }
    if(c == 'L'){
        return "l";
    }
    if(c == 'M'){
        return "m";
    }
    if(c == 'N'){
        return "n";
    }
    if(c == 'O'){
        return "o";
    }
    if(c == 'P'){
        return "p";
    }
    if(c == 'Q'){
        return "q";
    }
    if(c == 'R'){
        return "r";
    }
    if(c == 'S'){
        return "s";
    }
    if(c == 'T'){
        return "t";
    }
    if(c == 'U'){
        return "u";
    }
    if(c == 'V'){
        return "v";
    }
    if(c == 'W'){
        return "w";
    }
    if(c == 'X'){
        return "x";
    }
    if(c == 'Y'){
        return "y";
    }
    if(c == 'Z'){
        return "z";
    }
}



