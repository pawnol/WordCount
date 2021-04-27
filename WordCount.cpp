/*
Word Count
Name
Date
This program should use a function to count the number
of words in the text entered by the user. However, the
body of the function has not been written yet. Write
the body of the function so that the program works. Use
the provided pseudocode as a guide.
*/
#include <iostream>
#include <string>
using namespace std;

/*
Counts the number of words within the piece of text.
*/
int countWords(string text)
{
    // write your code here!
}

// You do not need to do anything with the main()!
int main()
{
    string sentence;
    cout << "Enter a sentence >> ";
    getline(cin, sentence);
    cout << "The sentence has " << countWords(sentence) << " words.\n";
    return 0;
}
