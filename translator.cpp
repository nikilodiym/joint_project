#include "translator.h"
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

unordered_map<string, unordered_map<string, string>> dictionary = {
    /*English*/
    {"English", {
        {"Hello", "�����"},
        {"World", "���"},
        {"Goodbye", "�� ���������"},
        {"Good morning", "������� �����"},
        {"Good evening", "������� ������"},
        {"Good night", "�������"},
        {"How are you?", "�� ������?"},
        {"Fine", "�����"},
        {"Thank you", "�����"},
        {"Please", "���� �����"},
        {"Sorry", "�������"},
        {"Yes", "���"},
        {"No", "ͳ"},
        {"I don't know", "� �� ����"},
        {"I don't understand", "� �� ������"},
        {"What is your name?", "�� ��� �����?"},
        {"My name is", "���� �����"},
        {"Where are you from?", "����� ��?"},
        {"I am from", "� �"},
        {"How old are you?", "������ ��� ����?"},
        {"I am", "���"},
        {"years old", "����"},
        {"What time is it?", "����� ������?"},
        {"It is", "�����"},
        {"o'clock", "�����"},
        {"What is the date today?", "��� ������� ����?"},
        {"Today is", "�������"},
        {"What day is today?", "���� ������� ����?"},
        {"Today is", "�������"},
        {"Monday", "��������"},
        {"Tuesday", "³������"},
        {"Wednesday", "������"},
        {"Thursday", "������"},
        {"Friday", "�'������"},
        {"Saturday", "������"},
        {"Sunday", "�����"}
    }},
    /*French*/
    {"French", {
        {"Bonjour", "�����"},
        {"Monde", "���"},
        {"Au revoir", "�� ���������"},
        {"Bonjour", "������� �����"},
        {"Bonsoir", "������� ������"},
        {"Bonne nuit", "�������"},
        {"Comment ?a va?", "�� ������?"},
        {"Bien", "�����"},
        {"Merci", "�����"},
        {"S'il vous pla?t", "���� �����"},
        {"D?sol?", "�������"},
        {"Oui", "���"},
        {"Non", "ͳ"},
        {"Je ne sais pas", "� �� ����"},
        {"Je ne comprends pas", "� �� ������"},
        {"Comment tu t'appelles?", "�� ��� �����?"},
        {"Je m'appelle", "���� �����"},
        {"D'o? viens-tu?", "����� ��?"},
        {"Je viens de", "� �"},
        {"Quel ?ge as-tu?", "������ ��� ����?"},
        {"J'ai", "���"},
        {"ans", "����"},
        {"Quelle heure est-il?", "����� ������?"},
        {"Il est", "�����"},
        {"heures", "�����"},
        {"Quelle est la date aujourd'hui?", "��� ������� ����?"},
        {"Aujourd'hui c'est", "�������"},
        {"Quel jour sommes-nous aujourd'hui?", "���� ������� ����?"},
        {"Aujourd'hui c'est", "�������"},
        {"Lundi", "��������"},
        {"Mardi", "³������"},
        {"Mercredi", "������"},
        {"Jeudi", "������"},
        {"Vendredi", "�'������"},
        {"Samedi", "������"},
        {"Dimanche", "�����"}
    }},
    /*German*/
    {"German", {
        {"Hallo", "�����"},
        {"Welt", "���"},
        {"Auf Wiedersehen", "�� ���������"},
        {"Guten Morgen", "������� �����"},
        {"Guten Abend", "������� ������"},
        {"Gute Nacht", "�������"},
        {"Wie geht's?", "�� ������?"},
        {"Gut", "�����"},
        {"Danke", "�����"},
        {"Bitte", "���� �����"},
        {"Entschuldigung", "�������"},
        {"Ja", "���"},
        {"Nein", "ͳ"},
        {"Ich wei? nicht", "� �� ����"},
        {"Ich verstehe nicht", "� �� ������"},
        {"Wie hei?t du?", "�� ��� �����?"},
        {"Ich hei?e", "���� �����"},
        {"Woher kommst du?", "����� ��?"},
        {"Ich komme aus", "� �"},
        {"Wie alt bist du?", "������ ��� ����?"},
        {"Ich bin", "���"},
        {"Jahre alt", "����"},
        {"Wie sp?t ist es?", "����� ������?"},
        {"Es ist", "�����"},
        {"Uhr", "�����"},
        {"Welches Datum ist heute?", "��� ������� ����?"},
        {"Heute ist", "�������"},
        {"Welcher Tag ist heute?", "���� ������� ����?"},
        {"Heute ist", "�������"},
        {"Montag", "��������"},
        {"Dienstag", "³������"},
        {"Mittwoch", "������"},
        {"Donnerstag", "������"},
        {"Freitag", "�'������"},
        {"Samstag", "������"},
        {"Sonntag", "�����"}
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