#include <iostream>
#include <string>
#include <map>
#include "Phonebook.hpp"

using std::cin;
using std::cout;
using std::string;
using std::stoi;
using std::map;

Phonebook contacts;

void add_contact();

void find_contact();

void exit_program();

int main() {
    contacts = Phonebook();

    map<string, void (*)()> operations = {
        { "1", &add_contact },
        { "2", &find_contact },
        { "3", &exit_program }
    };

    string input;
    do {
        cout << "Valitse jokin seuraavista:\n"
             << " 1. Lisää yhteystieto\n"
             << " 2. Etsi yhteystieto\n"
             << " 3. Lopeta ohjelma\n\n";

        cout << "Syötä valintasi: "; cin >> input;

        auto it = operations.find(input);
        if (it != operations.end()){
            auto func = (*it).second;
            func();
        }
        else
            cout << "Virheellinen syöte.\n";

        cout << '\n';

    } while (input != "3");

    return 0;
}

void find_contact() {
    string name;
    cout << "Syötä haettavan henkilön nimi: "; cin >> name;
    
    auto matches = contacts.find(name);

    if (matches.size() > 0) {
        cout << "Löysin seuraavat numerot:\n";
        for (auto match : matches)
            cout << " - " << match.number << '\n';
    }
    else
        cout << "En löytänyt nimellä ketään.\n";
}

void add_contact() {
    contact contact;

    cout << "Syötä nimi: "; cin >> contact.name;
    cout << "Syötä numero: "; cin >> contact.number;

    contacts.add(contact);

    cout << "Yhteystieto lisätty\n";
}

void exit_program() {
    cout << "Näkemiin!\n";
}
