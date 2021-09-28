/*
 * Shree Murthy
 * 2374658
 * shmurthy@chapman.edu
 * CPSC 350-03
 * Assignment 2 
 **/

//This file will translate all tutnese words into their respective english phrases

//include the proper header file to have access to all private and public methods to acheive proper Tut to English translations.
#include "TutTranslator.h"

//default constructor
TutTranslator::TutTranslator(){

} 
//default destructor
TutTranslator::~TutTranslator(){
    isTut = false; //reset the member variable
} 

/** translateTutToEnglish: translate tutnese strings into the correct english phrase
  * Returns a string of the proper english translation
  * Requires parameter, s, representing the tutnese string to be translated
  */
string TutTranslator::translateTutToEnglish(string s){
    
    string temp = ""; //this will hold the tutnese string
    string engTemp = ""; //this variable will 
    string englishStr = "";

    //create a left and right pointer that will read the given string until there is a valid tutnese string that can be translated
    int left = 0;
    int right = 0;

    for(int i = 0; i < s.length(); ++i){
        //check if the character is a non-alphabetic character
        if(!((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))){
            temp += s[i];
        }
        //convert uppercase characters to lowercase ones to make it easy to translate
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            temp += tolower(s[i]);
        }
        else{
            temp += s[i];
        }
        
        //if condition that accounts for squatu/squatut case
        if(temp == "squatu"){
            
            //accounts for squatut
            if(s[i+1] == 't'){
                englishStr += translateTutLetters(temp+s[i+1]);
                i+=1;
            }
            //accounts for squatu
            else{
                englishStr += translateTutLetters(temp);
                i+=1;
            }
            

        }
        //translate string normally 
        else{
            englishStr += translateTutLetters(temp);

        }
        
        //if the temp variable was translated properly...isTut is set to true
        if(isTut == true){
            left = i; //move the left pointer to position i (aka the last character in the valid tutnese string)
            left++; //increment left pointer to make sure it is starting on the next, if possible, character in string s.           
            temp = ""; //clear out the temp variable to make sure it is ready to read the next characters
            isTut = false; //reset isTut to false to make sure there are no mistranslations  
        }
        //else we have to continue iterating through the string
        else{
            if(isTut == false){
                //checks if i is at the end of the string
                if(i == s.length()-1){ 
                    englishStr += s[left]; //the character at position left is "chopped" off and added to the englishStr variable
                    i = left; //reset the i variable to the left pointer
                    left += 1; //increment the left pointer to the next character
                    temp = ""; //clear temp so it can start reading the new string
                    
                }
            }
            
        }
          
        
        
    }
    //take the final english string and the original tutnese string and pass them through this method that will preserve capitalization
    englishStr = capitalize(s, englishStr);
    return englishStr;



} 

/** translateTutLetters: a helper method that handles all the translations of the characters into their respective english letter
  * Returns a string of the english letter
  * Requires parameter, temp, representing the tutnese string to be translated
  */
string TutTranslator::translateTutLetters(string temp){
    
    string s = ""; //string to be retunred w/english letter
    if(temp == "bub"){
            isTut = true;
            s +="b";
        }
        else if(temp == "cash"){
            isTut = true;
            s +="c";
        }
        
        else if(temp == "dud"){
            isTut = true;
            s +="d";
        }
        
        else if(temp == "fuf"){
            isTut = true;
            s +="f";
        }
        
        else if(temp == "gug"){
            isTut = true;
            s +="g";
        }
        
        else if(temp == "hash"){
           isTut = true;
           s +="h";
        }
        
        else if(temp == "jay"){
            isTut = true;
            s +="j";
        }
        else if(temp == "kuck"){
            isTut = true;
            s +="k";
        }
        else if(temp == "lul"){
            isTut = true;
            s +="l";
        }
        else if(temp == "mum"){
            isTut = true;
            s += "m";
        }
        else if(temp == "nun"){
            isTut = true;
            s += "n";
        }
        else if(temp == "pub"){
            isTut = true;
            s += "p";
        }
        else if(temp == "quack"){
            isTut = true;
            s += "q";
        }
        else if(temp == "rug"){
            isTut = true;
            s += "r";
        }
        else if(temp == "sus"){
            isTut = true;
            s += "s";
        }
        else if(temp == "tut"){
            isTut = true;
            s += "t";
        }
        else if(temp == "vuv"){
            isTut = true;
            s += "v";
        }
        else if(temp == "wack"){
            isTut = true;
            s += "w";
        }
        else if(temp == "ex"){
           isTut = true;
           s += "x";
        }
        else if(temp == "yub"){
            isTut = true;
            s += "y";
        }
        else if(temp == "zub"){
           isTut = true;
           s += "z";
        }
        
        
        else {
            //this if-else block deals with double letter scenarios
            if(temp.substr(0, 4) == "squa"){
                if(temp == "squatut"){
                    isTut = true;
                    return "tt";
                }
                if(temp.substr(4, 6) == "ex"){
                    isTut = true;
                    return "xx";
                    
                } 
                else if(temp.substr(0,5) == "squat"){
                    if(temp.substr(5,6) == "a"){
                        isTut = true;
                        s += "aa";
                        
                    }
                    if(temp.substr(5,6) == "e"){
                        isTut = true;
                        return "ee";
                    }
                    
                    if(temp.substr(5,6) == "i"){
                        isTut = true;
                        return "ii";

                    }
                    
                    if(temp.substr(5,6) == "o"){
                        isTut = true;
                        return "oo";
                    }  
                    if(temp.substr(5,6) == "u"){
                        isTut = true;
                        return "uu";
                    }
                        
                        
                        
            }
            else{
                s += translateTutLetters(temp.substr(4, temp.length()));
                s += translateTutLetters(temp.substr(4, temp.length()));
            
                
            }
        }
            


    }
    
    return s;


  

}

/** capitalize: a helper method that makes sure the tutnese capitalization is preserved in the english string
  * Returns a string of updated english string 
  * Requires parameter, tutString and engString, representing the original tut string and the english string to be updated
  */
string TutTranslator::capitalize(string tutString, string engString){
    string newEngString = ""; //updated english string that will be returned
    string tutTemp = tutString;
    string engTemp = engString;

    //while loop that runs as long as the string as a space (i.e read every word of the string)
    while(tutTemp.find(" ", 0) != string::npos){
        //check if english string needs to be capitalized
        if(tutTemp[0] == toupper(tutTemp[0])){
            engTemp[0] = toupper(engTemp[0]);
            
        }
        //add the updated english word to newEngString
        newEngString += engTemp.substr(0, engTemp.find(" ", 0)) + " ";
        
        //shorten the tut and english strings such that you don't re-read the same words
        tutTemp = tutTemp.substr(tutTemp.find(" ", 0) + 1, tutTemp.length());
        engTemp = engTemp.substr(engTemp.find(" ", 0) + 1, engTemp.length());
        
    }
    //translate the last word left in the string
    if(tutTemp[0] == toupper(tutTemp[0])){
            engTemp[0] = toupper(engTemp[0]);
            newEngString += engTemp;
    }
    else{
        newEngString += engTemp;
    }
    

    return newEngString;
}

