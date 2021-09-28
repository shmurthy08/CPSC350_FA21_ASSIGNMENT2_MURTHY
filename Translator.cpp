/*
 * Shree Murthy
 * 2374658
 * shmurthy@chapman.edu
 * CPSC 350-03
 * Assignment 2 
 **/



//The Translator program will translate english words and sentences to tutnese by calling upon the Model class and its methods. 


//include the Translator's header file to create the necessary methods
#include "Translator.h"
//include the Model's header file to provide access to methods to translate words/sentences
#include "Model.h"

//includes the standard C++ library 
using namespace std;


//Default Constructor
Translator::Translator(){

}
//Default Destructor
Translator::~Translator(){

} 

/** A method to translate English words into its tutnese form
 * The method will require a string input and then the method will parse the word to check for double characters as well as translate all characters into its tutunese form. 
 * The method will return a string
 */
string Translator::translateEnglishWord(string word){
    Model m;
    string result = "";
    char temp = 'a';
    for(int i = 0; i < word.length(); ++i){
        //set the temp char variable to the letter in the string at i 
        temp = word[i];        

        //check the letter at i and i + 1, while ignoring their case, to see if they are the same which prompts the program to use the translateDoubleCharacter method. 
        if(tolower(temp) == tolower(word[i+1]) && (temp >= 'a' && temp <= 'z')){
            result += m.translateDoubleCharacter(temp);
            i++;
        }
        else{
            result += m.translateSingleCharacter(temp);
        }
    }

    return result;

} 

/** A method to translate English sentences into its tutnese form 
 * The method will require a string input and then will parse the sentence to find all the words that need to be converted and call the necessary methods to acheive the tutnese form.
 * The method will return a string. 
 */
string Translator::translateEnglishSentence(string sen){
    string result = ""; //string that will represent the final sentence in tutnese form

    char l = 'a'; //char variable set to a default value that will be updated as the for-loop parses through the word
    
    
    string temp = ""; //temp string to hold the word to be translated
    for(int i = 0; i < sen.length(); ++i){

        //check if the character is a space and then make sure to translate the word before the space
        if(sen[i] == ' '){
            result += translateEnglishWord(temp);
            temp = ""; //clear the temp string such that the next word in the sentence can be converted
            result += " "; //after translating the word before the space...add the space to make sure spacing is preserved from the original sentence.
           
        }
        //if i doesn't equal a space character then add the character to the temp string 
        else{
            l = sen[i];
            temp += l;
                        
        }
       
       
        
    }
    //After the for-loop ends this will translate whatever is left inside the temp string
    result += translateEnglishWord(temp);
    return result;
}