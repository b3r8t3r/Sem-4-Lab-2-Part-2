#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

string Read() {
    ifstream in("input.txt");
    string txt;
    getline(in, txt);
    return txt;
}

void Write(string txt) {
    ofstream out("output.txt");
    out << txt;
}

void Analize(string txt) {
    
    vector<int> id;
    string result;
    for (int i = 0; i < txt.size(); i++) {
        if (txt[i] == '#') id.push_back(i);
    }
    
    if ((fmod((int)id.size(), 2) == 0) && ((int)id.size())) {
        result = "Everything is fine";
    }
    else {
        result = "Everything is not fine";
    }

    Write(result);
}



int main()
{
    string text = Read();
    Analize(text);
}
