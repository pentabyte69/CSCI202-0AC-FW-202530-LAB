#include "date.h"

date::date(int month, int day, int year)
{
    setMonth(month);
    setYear(year);
    setDay(day);
}

int date::getMonth()
{
    return month;
}

int date::getDay()
{
    return day;
}

int date::getYear()
{
    return year;
}

bool date::isLeapYear()
{
    // Not fully shown, but standard logic likely:
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        return true;
    }
    return false;
}