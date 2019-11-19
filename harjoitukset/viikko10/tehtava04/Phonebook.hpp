#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <vector>

struct contact {
    std::string name;
    std::string number;
};

class Phonebook {
private:
    std::vector<contact> contacts;
public:
    Phonebook();
    void add(contact contact);
    std::vector<contact> find(std::string name);
};

#endif
