#include <stdio.h>
#include <ctype.h> // for toupper, isalpha
#include <stdbool.h>

// scan the word
void scan_word(int *occurences){

    char c;

    while ((c = getchar()) != '\n'){ 
        if (isalpha(c)){                            // check if the element is an alphabet   
           (*(occurences + toupper(c) - 'A'))++;    // assigns index to the array and increments it
        }
    }

}

// compare if the two arrays are similar
bool is_anagram(int *occurrences1, int *occurrences2) {

    // check each element of the two arrays
    for (int i = 0; i < 26; i++) { 
        if (*(occurrences1 + i) != *(occurrences2 + i)) {
            return false;
        }
    }

    return true;
}

int main(void){

    int letters1[26] = {0};
    int letters2[26] = {0};

    printf("Enter first word: ");
    scan_word(letters1); // scan the first word

    printf("Enter second word: ");
    scan_word(letters2); // scan the second word

    bool anagram = is_anagram(letters1, letters2); 

    if (anagram){ // if true
        printf("The words are anagrams.\n");
        return 0;
    } else { // if false
        printf("The words are not anagrams.\n");
        return 0;
    }

}