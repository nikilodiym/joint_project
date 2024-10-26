#include "translator.h"
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

void translate(const string& targetLanguage, const string& text) {
    unordered_map<string, unordered_map<string, string>> translations = {
        {"Ukrainian", {{"hello", "Привіт"}, {"goodbye", "До побачення"}, {"thank you", "Дякую"}, {"yes", "Так"}, {"no", "Ні"}, {"how are you", "Як справи"}, {"please", "Будь ласка"}, {"sorry", "Вибачте"}, {"excuse me", "Вибачте"}, {"I love you", "Я тебе кохаю"}}},
        {"French", {{"hello", "bonjour"}, {"goodbye", "au revoir"}, {"thank you", "merci"}, {"yes", "oui"}, {"no", "non"}, {"how are you", "comment ça va"}, {"please", "s'il vous plaît"}, {"sorry", "pardon"}, {"excuse me", "excusez-moi"}, {"I love you", "je t'aime"}}},
        {"German", {{"hello", "hallo"}, {"goodbye", "auf wiedersehen"}, {"thank you", "danke"}, {"yes", "ja"}, {"no", "nein"}, {"how are you", "wie geht es dir"}, {"please", "bitte"}, {"sorry", "entschuldigung"}, {"excuse me", "entschuldigen Sie mich"}, {"I love you", "ich liebe dich"}}},
        {"Spanish", {{"hello", "hola"}, {"goodbye", "adiós"}, {"thank you", "gracias"}, {"yes", "sí"}, {"no", "no"}, {"how are you", "cómo estás"}, {"please", "por favor"}, {"sorry", "lo siento"}, {"excuse me", "perdón"}, {"I love you", "te quiero"}}},
        {"Italian", {{"hello", "ciao"}, {"goodbye", "arrivederci"}, {"thank you", "grazie"}, {"yes", "sì"}, {"no", "no"}, {"how are you", "come stai"}, {"please", "per favore"}, {"sorry", "mi dispiace"}, {"excuse me", "scusa"}, {"I love you", "ti amo"}}}
    };

    if (translations.find(targetLanguage) != translations.end()) {
        auto phrases = translations[targetLanguage];
        if (phrases.find(text) != phrases.end()) {
            cout << phrases[text] << endl;
        }
        else {
            cout << "Translation not found for the provided text." << endl;
        }
    }
    else {
        cout << "Target language not supported." << endl;
    }
}