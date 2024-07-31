/*
 * Name: Joshua Shifman
 * ID: 33879028
 *
 */
#ifndef DAY_H  // Header guards for Image.h 
#define DAY_H

#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Day
{
private:
    int dayOfWeek;
protected:

public:
    // Constructer
    Day(int dayOfWeek);

    // Deconstructor
    ~Day();

    void add_task(string taskName, string taskDetails, int startTime, int endTime, int);


};


#endif // !DAY_H