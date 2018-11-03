#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <iostream>
#include <string>
#include "virtualcampus.h"
#include "universitymember.h"

using namespace std;
class Administrator: public UniversityMember
{
public:
        Administrator();
        Administrator(string _name, string _surname, string _surname2, char* _ID, char _type);
        ~Administrator();
};

#endif // ADMINISTRATOR_H
