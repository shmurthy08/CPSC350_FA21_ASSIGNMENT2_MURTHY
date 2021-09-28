/*
 * Shree Murthy
 * 2374658
 * shmurthy@chapman.edu
 * CPSC 350-03
 * Assignment 2 
 **/

//This is a header file to set up file reading/writing
#ifndef FILEPROCESSORTUT_H
#define FILEPROCESSORTUT_H


//include input/output library for cin/cout and others
#include <iostream>
//enables us to read and write to files
#include <fstream>

//includes the standard C++ library 
using namespace std;


//Class to handle all file processing
class FileProcessorTut{

public:
    FileProcessorTut(); //default constructor
    ~FileProcessorTut(); //default destructor
    void processTutFile(string in, string out); //void method that will read from a file and write the Tutnese to the output file
    

};


#endif