#include "time.h"
#include <iostream>

// Default Constructor
Time::Time() : hour(0), minute(0) {}

// Parameterized Constructor
Time::Time(int hour, int minute) : hour(hour), minute(minute) {}

int Time::getHour() {
    return hour;
}

int Time::getMinute() {
    return minute;
}

// Print time
void Time::print() {
    std::cout << (hour < 10 ? "0" : "") << hour << ":" << (minute < 10 ? "0" : "") << minute;
}

int Time::get_difference(Time& other) {
    int thisTotalMinutes = hour * 60 + minute;
    int otherTotalMinutes = other.hour * 60 + other.minute;

    // Calculate and return the absolute difference in minutes
    return std::abs(thisTotalMinutes - otherTotalMinutes);
}