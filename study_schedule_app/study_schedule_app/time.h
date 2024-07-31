#ifndef TIME_H
#define TIME_H

#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;

    Time(int h, int m) : hours(h), minutes(m) {}

    // Converts time to minutes since midnight
    int toMinutes() const {
        return hours * 60 + minutes;
    }

    // Convert minutes since midnight to a Time object
    static Time fromMinutes(int minutes) {
        return Time(minutes / 60, minutes % 60);
    }

    // Print time in HH:MM format
    void print() const {
        cout << (hours < 10 ? "0" : "") << hours << ":"
            << (minutes < 10 ? "0" : "") << minutes;
    }
};

#endif // TIME_H
