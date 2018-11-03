#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
    int month, day, year;
public:
    Date();
    Date(int _m, int _d, int _y);
    ~Date();
    void setDay(int _d);
    void setMonth(int _m);
    void setYear(int _y);
    void showDate();

#endif // DATE_H

