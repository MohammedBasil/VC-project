#ifndef UNIVERSITYMEMBER_H
#define UNIVERSITYMEMBER_H

#include <iostream>
#include<string>
#include “virtual_campus.h”

using namespace std;

class UniversityMember
{
public:
    UniversityMember();

private:
    string name;
    string surname;
    string surname2;
    char ID[7];
    char type;


};



#endif // UNIVERSITYMEMBER_H

