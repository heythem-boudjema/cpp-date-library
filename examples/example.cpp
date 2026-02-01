#include <iostream>
#include "clsString.h"
#include "clsDate.h"

int main() {
    using std::cout;
    using std::endl;

    clsDate date1(10, 1, 2023);
    clsDate date2(25, 12, 2023);

    cout << "Date 1: ";
    date1.Print();
    cout << endl;

    cout << "Date 2: ";
    date2.Print();
    cout << endl;

    int diff = clsDate::DifferenceInDays(date1, date2);
    cout << "Difference in days: " << diff << endl;

    clsDate newDate = date1;
    newDate.IncreaseDateByXMonths(3);
    cout << "Date after 3 months: ";
    newDate.Print();
    cout << endl;

    newDate.DecreaseDateByXDays(15);
    cout << "Date after decreasing 15 days: ";
    newDate.Print();
    cout << endl;

    clsDate vacationStart("01/02/2026");
    clsDate vacationEnd = vacationStart.CalculateVacationReturnDate(vacationStart, 12);
    cout << "Vacation return date: ";
    vacationEnd.Print();
    cout << endl;

    std::string formattedDate = clsDate::DateToString(vacationEnd);
    cout << "Vacation return date formatted: " << formattedDate << endl;

    return 0;
}
