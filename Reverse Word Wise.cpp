Program Statement-
Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on.
Individual words should remain as it is.

Input format :
String in a single line

Output format :
Word wise reversed string in a single line

Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.

Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome

Sample Input 2:
Always indent your code
Sample Output 2:
code your indent Always

Solution-
#include <bits/stdc++.h>
using namespace std;
void reverseStringWordWise(char input[]) {
    // Write your code here
    vector <string> words;
    string word="";
    
    int size=strlen(input);
    for(int i=0;i<=size;i++){
        
        if(input[i]!=' ' && input[i]!='\0')
            word+=input[i];
        else{
            words.push_back(word);
            word="";
        }
    }
    
    reverse(words.begin(),words.end());
    
    string ans="";
    for(int i=0;i<words.size();i++){
        if(i!=words.size()-1)
            ans+=words[i]+" ";
        else
            ans+=words[i];
    }
    
    strcpy(input,ans.c_str());

}

Main Code(already given)-
#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
