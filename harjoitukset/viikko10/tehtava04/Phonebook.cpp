#include "Phonebook.hpp"
#include <algorithm>


using std::vector;
using std::string;
using std::remove_if;

Phonebook::Phonebook() {

}

void Phonebook::add(contact contact) {
    contacts.push_back(contact);
}

vector<contact> Phonebook::find(string name) {
    vector<contact> matches;

    for (auto contact : contacts)
        if (contact.name == name)
            matches.push_back(contact);
    
    return matches;
}
