/*
 * Shree Murthy
 * 2374658
 * shmurthy@chapman.edu
 * CPSC 350-03
 * Assignment 2 
 **/

//This file is designed to read a input file and output the proper english string into an output file



//this includes the header file to handle file processing
#include "FileProcessorTut.h"
//includes the header file for translating
#include "TutTranslator.h"

FileProcessorTut::FileProcessorTut(){

 } //default constructor
FileProcessorTut::~FileProcessorTut(){

    } //default destructor

/** FileProcessorTut
  * Requires parameter, in and out, representing the input and output files
  */
void FileProcessorTut::processTutFile(string in, string out){
    //Create a TutTranslator object to be able to call the translation methods
    TutTranslator t;

    //String that holds the words from the input file
    string words;
    //string that holds the english form of the word
    string engForm;
    
   
    //Input file: holds tutnese words/sentences
    ifstream inFile(in);
    
    
    
   
    //Check if the input/output file are open to be read
    if(inFile.is_open()){
        //Output file: holds translated words/sentences
        ofstream resultText(out);
        //Read the file and translate them into results file
        while(getline(inFile, words)){
            
            engForm = t.translateTutToEnglish(words);
            resultText << engForm << "\n";
        }
        //close the input file to avoid memory issues
        inFile.close();
        //close the output file to avoid memory issues
        resultText.close();
    }
    //if the file cannot be opened output this error
    else{
        cout << "Unable to open files" << endl;
    }


    
}