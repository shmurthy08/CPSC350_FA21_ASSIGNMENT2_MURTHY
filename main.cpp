/*
 * Shree Murthy
 * 2374658
 * shmurthy@chapman.edu
 * CPSC 350-03
 * Assignment 2 
 **/


//This file is the standard main file that will read in command line inputs and then use the FileProcessor/FileProcessorTut methods to provide the final ouput of the program.

//include the iostream library for cin/cout outputs
#include <iostream>
//include the FileProcessor for English to Tutnese translation
#include "FileProcessor.h"
//include the FileProcessor for Tutnese to English translation
#include "FileProcessorTut.h"

//import the standard c++ library 
using namespace std;

int main(int argc, char** argv){
    FileProcessorTut *t = new FileProcessorTut();
    FileProcessor *f = new FileProcessor();
    
    //if there are no command line inputs for the read and write files then output this error
    if(argc == 1){
        cout << "Not enough inputs provided." << endl;
    }
    // //if there is only one command line input then state this error 
    if(argc == 2){
        cout << "Not enough inputs provided.";
    }
    //If there are two command line inputs then state this error.
    if(argc == 3){
        cout << "Not enough inputs provided." << endl;
    }
    //If there are three or more command line inputs read the third input to see what file processor to use and then call the right method.
    if(argc >= 4){
        string type = argv[3];
        if(type == "T2E"){
            t->processTutFile(argv[1], argv[2]);

        }        
        if(type == "E2T"){
            f->processFile(argv[1], argv[2]);
        }
    }
    //delete any dynamically allocated memory
    delete t;
    delete f;
    






    return 0;
}
