#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> words;
    int i = 0;
    string s = "";
    s.append("ooooo");
    s.append("ooooo");
    cout << s[2] << endl;
    words.push_back(s);
    cout << words[i];
}