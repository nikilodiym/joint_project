#include "translator.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    string targetLanguage, text;

    cout << "Enter the target language: ";
    getline(cin, targetLanguage);
    cout << "Enter text in English to translate: ";
    getline(cin, text);

    translate(targetLanguage, text);

    system("pause");
    return 0;
}
