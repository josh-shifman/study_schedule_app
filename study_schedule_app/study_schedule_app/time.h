#ifndef TIME_H
#define TIME_H

#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;

public:
    // Default Constructor
    Time();

    // Parameterized Constructor
    Time(int hour, int minute);

    // Getters
    int getHour();
    int getMinute();

    // Print time
    void print();

    int get_difference(Time& other);
};

#endif // TIME_H
