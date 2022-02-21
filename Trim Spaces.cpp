Problem Statement-
Given an input string S that contains multiple words, you need to remove all the spaces present in the input string.
There can be multiple spaces present after any word.
  
Input Format :
 String S
 
Output Format :
Updated string

Constraints :
1 <= Length of string S <= 10^6

Sample Input :
abc def g hi

Sample Output :
abcdefghi

Solution-
#include <string>
void trimSpaces(char input[]) {
    int n=strlen(input);
    int count = 0;
 
    for (int i = 0; input[i]; i++)
        if (input[i] != ' '){
            input[count] = input[i];
            count++;
        }
    input[count] = '\0'; 
}

Main Code(already given)-
#include <iostream>
#include <cstring>
using namespace std;

#include "solution.h"

int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}
