#include <iostream>
#include "clsDate.h"

using namespace std;

int main()

{

    // Some Examples
    //You can try any method at your own..

    cout << "Date 1 (Current Date) : ";
    clsDate Date1;
    Date1.Print();

    cout << "Date 1 (Add One Day) : ";
    Date1.AddOneDay();
    Date1.Print();

    cout << "\nDate 2 : ";
    clsDate Date2("31/1/2022");
    Date2.Print();

    cout << "Date 2 (Day Name) : ";
    cout << Date2.DayName() << endl;

    cout << "\nDate 3 : ";
    clsDate Date3(20, 12, 2022);
    Date3.Print();

    cout << "Date 3 (Decrease Date By 2 Weeks) : ";
    Date3.DecreaseDateByXWeeks(2);
    Date3.Print();

    cout << "\nDate 4 (Date By Day Order In A Year): ";
    clsDate Date4(273, 2022);
    Date4.Print();
    cout << "Date 4 (Is it last day in the month?) : ";
    if (Date4.IsLastDayInMonth())
        cout << "YES.";
    else
        cout << "NO.";

    cout << "\nDate 4 (Month Calendar) : ";
    Date3.PrintMonthCalendar();

    cout << "\nDate 5 : ";
    clsDate Date5("35/1/2022");
    Date5.Print();

    cout << "Date 5 (Is it valid date?) : ";
    if(Date5.IsValid())
        cout << "YES.";
    else
        cout << "NO.\n";

    cout << "\nMy Birth Day : ";
    clsDate Date6(1, 10, 2003);
    Date6.Print();

    cout << "My Age In Days: " <<
        clsDate::CalculateMyAgeInDays(clsDate(1, 10, 2003)) << endl;

    system("pause>0");
    return 0;
};