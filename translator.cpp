#include "translator.h"
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

unordered_map<string, unordered_map<string, string>> dictionary = {
    /*English*/
    {"English", {
        {"Hello", "Привіт"},
        {"World", "Світ"},
        {"Goodbye", "До побачення"},
        {"Good morning", "Доброго ранку"},
        {"Good evening", "Доброго вечора"},
        {"Good night", "Добраніч"},
        {"How are you?", "Як справи?"},
        {"Fine", "Добре"},
        {"Thank you", "Дякую"},
        {"Please", "Будь ласка"},
        {"Sorry", "Вибачте"},
        {"Yes", "Так"},
        {"No", "Ні"},
        {"I don't know", "Я не знаю"},
        {"I don't understand", "Я не розумію"},
        {"What is your name?", "Як вас звати?"},
        {"My name is", "Мене звати"},
        {"Where are you from?", "Звідки ви?"},
        {"I am from", "Я з"},
        {"How old are you?", "Скільки вам років?"},
        {"I am", "Мені"},
        {"years old", "років"},
        {"What time is it?", "Котра година?"},
        {"It is", "Зараз"},
        {"o'clock", "годин"},
        {"What is the date today?", "Яка сьогодні дата?"},
        {"Today is", "Сьогодні"},
        {"What day is today?", "Який сьогодні день?"},
        {"Today is", "Сьогодні"},
        {"Monday", "Понеділок"},
        {"Tuesday", "Вівторок"},
        {"Wednesday", "Середа"},
        {"Thursday", "Четвер"},
        {"Friday", "П'ятниця"},
        {"Saturday", "Субота"},
        {"Sunday", "Неділя"}
    }},
    /*French*/
    {"French", {
        {"Bonjour", "Привіт"},
        {"Monde", "Світ"},
        {"Au revoir", "До побачення"},
        {"Bonjour", "Доброго ранку"},
        {"Bonsoir", "Доброго вечора"},
        {"Bonne nuit", "Добраніч"},
        {"Comment ?a va?", "Як справи?"},
        {"Bien", "Добре"},
        {"Merci", "Дякую"},
        {"S'il vous pla?t", "Будь ласка"},
        {"D?sol?", "Вибачте"},
        {"Oui", "Так"},
        {"Non", "Ні"},
        {"Je ne sais pas", "Я не знаю"},
        {"Je ne comprends pas", "Я не розумію"},
        {"Comment tu t'appelles?", "Як вас звати?"},
        {"Je m'appelle", "Мене звати"},
        {"D'o? viens-tu?", "Звідки ви?"},
        {"Je viens de", "Я з"},
        {"Quel ?ge as-tu?", "Скільки вам років?"},
        {"J'ai", "Мені"},
        {"ans", "років"},
        {"Quelle heure est-il?", "Котра година?"},
        {"Il est", "Зараз"},
        {"heures", "годин"},
        {"Quelle est la date aujourd'hui?", "Яка сьогодні дата?"},
        {"Aujourd'hui c'est", "Сьогодні"},
        {"Quel jour sommes-nous aujourd'hui?", "Який сьогодні день?"},
        {"Aujourd'hui c'est", "Сьогодні"},
        {"Lundi", "Понеділок"},
        {"Mardi", "Вівторок"},
        {"Mercredi", "Середа"},
        {"Jeudi", "Четвер"},
        {"Vendredi", "П'ятниця"},
        {"Samedi", "Субота"},
        {"Dimanche", "Неділя"}
    }},
    /*German*/
    {"German", {
        {"Hallo", "Привіт"},
        {"Welt", "Світ"},
        {"Auf Wiedersehen", "До побачення"},
        {"Guten Morgen", "Доброго ранку"},
        {"Guten Abend", "Доброго вечора"},
        {"Gute Nacht", "Добраніч"},
        {"Wie geht's?", "Як справи?"},
        {"Gut", "Добре"},
        {"Danke", "Дякую"},
        {"Bitte", "Будь ласка"},
        {"Entschuldigung", "Вибачте"},
        {"Ja", "Так"},
        {"Nein", "Ні"},
        {"Ich wei? nicht", "Я не знаю"},
        {"Ich verstehe nicht", "Я не розумію"},
        {"Wie hei?t du?", "Як вас звати?"},
        {"Ich hei?e", "Мене звати"},
        {"Woher kommst du?", "Звідки ви?"},
        {"Ich komme aus", "Я з"},
        {"Wie alt bist du?", "Скільки вам років?"},
        {"Ich bin", "Мені"},
        {"Jahre alt", "років"},
        {"Wie sp?t ist es?", "Котра година?"},
        {"Es ist", "Зараз"},
        {"Uhr", "годин"},
        {"Welches Datum ist heute?", "Яка сьогодні дата?"},
        {"Heute ist", "Сьогодні"},
        {"Welcher Tag ist heute?", "Який сьогодні день?"},
        {"Heute ist", "Сьогодні"},
        {"Montag", "Понеділок"},
        {"Dienstag", "Вівторок"},
        {"Mittwoch", "Середа"},
        {"Donnerstag", "Четвер"},
        {"Freitag", "П'ятниця"},
        {"Samstag", "Субота"},
        {"Sonntag", "Неділя"}
    }}
};

void translate_to_ukr(const string& language, const string& text) {
    if (dictionary.find(language) != dictionary.end()) {
        auto phrases = dictionary[language];
        if (phrases.find(text) != phrases.end()) {
            cout << phrases[text] << endl;
        }
        else {
            cout << "Incorrect translation!" << endl;
        }
    }
    else {
        cout << "Incorrect language!" << endl;
    }
}