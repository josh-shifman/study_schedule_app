#ifndef TASK_H
#define TASK_H

#include <string>
#include "time.h"

using namespace std;

class Task {
private:
	string taskName;
	string taskDetails;
	Time startTime;
	Time endTime;
    int taskDuration;

public:
    Task();
    Task(string taskName, string taskDetails, Time startTime, Time endTime);

    string get_name();
    string get_details();
    Time get_start_time();
    Time get_end_time();
    int get_duration();
    // Print task details
    void print_task();
};
#endif