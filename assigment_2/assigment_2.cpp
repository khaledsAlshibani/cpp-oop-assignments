#include <iostream>
using namespace std;

class Time
{
    int hours;
    int minutes;
    int seconds;

public:
    Time()
    {
        hours = minutes = seconds = 0;
    }

    Time(int hours = 11, int minutes = 59, int seconds = 59)
    {
        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;

        displayTime();
    }

    void displayTime() const
    {
        cout
            << (hours < 10 ? "0" : "") << hours << ":"
            << (minutes < 10 ? "0" : "") << minutes << ":"
            << (seconds < 10 ? "0" : "") << seconds << endl;
    }

    void mergeTimes(Time t1, Time t2) 
    {
        hours = t1.hours + t2.hours;
        minutes = t1.minutes + t2.minutes;
        seconds = t1.seconds + t2.seconds;

        minutes += seconds / 60; // To convert seconds to minutes as each minute has 60 seconds
        seconds %= 60; // To calc the remain number of seconds
        hours += minutes / 60; // To convert minutes to hours as each hour has 60 minutes
        minutes %= 60; // To calc the remain number of minutes

        if (hours >= 24) {
            hours = 24;
        }
    }
};

int main()
{
    const Time t1(1, 15, 30);
    const Time t2(25, 30, 45);
    Time t3(25, 50, 23);

    t3.mergeTimes(t1, t2);

    cout << "The Merged Time: ";
    t3.displayTime();

    return 0;
}