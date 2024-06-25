#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;


string longestEvenWord(const string& sentence) {
    stringstream ss(sentence);
    string word, longestWord;
    
    while (ss >> word) {
        if (word.size() % 2 == 0 && word.size() > longestWord.size()) longestWord = word;
    }
    
    return longestWord.empty() ? "00" : longestWord;
}

int main() {
    string sentence = "It is a pleasant day today";
    cout << "The longest even-length word is: " << longestEvenWord(sentence) << endl;
    return 0;
}
