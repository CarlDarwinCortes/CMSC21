#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>      // Allows the use of functions isalpha, tolower, or toupper

//takes user's input and store it to 
void scan_word(int counts[26]){
    int i;
    char ch;

    //
    printf("Enter a word: ");
    //Loops through single characters using getchar
    for(i=0;(ch=getchar()) != '\n' && i < 26; i++)
        counts[toupper(ch)-'A']++;  //converts all characters to uppercases to avoid sensitive-case scenarios.
}

//Function that checks whether first_word or second_word are the same or not. returns true if they are anagram. 
bool is_anagram(int occurences1[26],int occurences2[26]){
    int i;
    bool anagram=true;
    //Iterates through all characters inside the string to check similarities.
    for(i=0; i<26; i++)
    {
        if(occurences1[i] != occurences2[i] )
        {
            anagram=false;
            break;
        }
    }
    return anagram;
}

int main(){

    //Initialized Empty Arrays
    int first_word[26]={0};
    int second_word[26]={0};

    //Function Call
    scan_word(first_word);
    scan_word(second_word);

    //Checks whether the first & second words are Anagrams
    if( equal_array(first_word,second_word) == true)
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");

    return 0;
}