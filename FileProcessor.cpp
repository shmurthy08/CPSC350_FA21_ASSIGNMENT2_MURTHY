/*
 * Shree Murthy
 * 2374658
 * shmurthy@chapman.edu
 * CPSC 350-03
 * Assignment 2 
 **/

//This program will take in an input and output file and read through each line of the input file and translates them into the Tutnese form. It will, finally, write into the output file.



//Include the FileProcessor header to access and build the necessary methods
#include "FileProcessor.h"
//include the translator header file to be able to call functions from the Translator file
#include "Translator.h"
//include fstream to read and write into files
#include <fstream> 


//Default Constructor
FileProcessor::FileProcessor(){
    
} 
//Default Destructor
FileProcessor::~FileProcessor(){
    
}

/** Process files and be able to read the input file and translate them into the tutnese form for the output file
 * 
 */
void FileProcessor::processFile(string inOne, string outOne){
    //Create a Translator object to be able to call the translation methods
    Translator t;

    //String that holds the words from the input file
    string words;
    //string that holds the tutnese form of the word
    string tutForm ;
    
    
    //Input file: holds english words/sentences
    ifstream inFile(inOne);
    
    
    
   
    //Check if the input file is open to be read
    if(inFile.is_open()){
        //Output file: holds translated words/sentences
        ofstream resultText(outOne);
        //Read the file and translate them into results file
        while(getline(inFile, words)){
            
            tutForm = t.translateEnglishSentence(words);
            resultText << tutForm << "\n";
        }
        //close the input file to avoid memory issues
        inFile.close();
        //close the output file to avoid memory issues
        resultText.close();
    }
    //if the file cannot be opened output this error
    else{
        cout << "Unable to open file" << endl;
    }


    
}