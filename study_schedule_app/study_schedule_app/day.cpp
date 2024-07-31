#include "day.h"
/*
 * Name: Joshua Shifman
 * Version: 1.0
 */

Day::Day(int dayOfWeek) {
	this->dayOfWeek = dayOfWeek;

}

Day::~Day() {};

void Day::add_task(string taskName, string taskDetails, Time startTime, Time endTime) {
	Task newTask(taskName, taskDetails, startTime, endTime);

	// Add the Task object to the tasks vector
	tasks.push_back(newTask);
}

void Day::print_tasks() {
    std::cout << "Tasks for day " << dayOfWeek << ":\n";
    for (auto& task : tasks) {
        task.print_task();
    }
    std::cout << std::endl;
}