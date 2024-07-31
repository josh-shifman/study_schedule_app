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
#include "task.h"
using namespace std;

class Day
{
private:
    int dayOfWeek;
    vector<Task> tasks;
protected:

public:
    // Constructer
    Day(int dayOfWeek);

    // Deconstructor
    ~Day();

    void add_task(string taskName, string taskDetails, Time startTime, Time endTime);

    void print_tasks();


};


#endif // !DAY_H