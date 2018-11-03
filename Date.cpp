#include "date.h"

Date::Date()
{
    month = 0, day = 0, year = 0;
}
Date::Date(int _m, int _d, int _y)
{
    month = Month;
    day = Day;
    year = Year;
}
void Date::setDay(int _d)
{
    if (d < 1 && d > 31)
        cout << "The day is invalid" << endl;
    else
    day = d;

}
void Date::setMonth(int _m)
{
    if (m < 1 && m > 12)
        cout << "The month is invalid" << endl;
    else
    month = m;

}
void Date::setYear(int _y)
{
    if (y < 1950 && y > 2020)
        cout << "The year is invalid" << endl;
    else
        year = y;
}
void Date::showDate()
{
    cout << month << " /" << day << " /" << year << endl;
}




//ESTO ES EL CODIGO PARA CUANDO NECESITEMOS QUE EL ADMIN META LA FECHA



/*

    int Month, Day, Year;

    cout << "Please enter a month (between 1 - 12) " << endl;
    cin >> Month;

    cout << "Please enter a day (between 1 - 31) " << endl;
    cin >> Day;

    cout << "Please enter a year (between 1950 - 2020) " << endl;
    cin >> Year;


    Date newDate(Month, Day, Year);
    newDate.showDate();

*/


