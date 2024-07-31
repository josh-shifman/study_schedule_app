#include "task.h"
Task::Task()
	: taskName("Unnamed task"), taskDetails("Add details here"), startTime(Time()), endTime(Time()) {}

// Parameterized Constructor
Task::Task(std::string taskName, std::string taskDetails, Time startTime, Time endTime)
	: taskName(taskName), taskDetails(taskDetails), startTime(startTime), endTime(endTime) {
	taskDuration = startTime.get_difference(endTime);
}

string Task::get_details() {
	return taskDetails;
}
string Task::get_name() {
	return taskName;
}
Time Task::get_start_time() {
	return startTime;
}
Time Task::get_end_time() {
	return endTime;
}

int Task::get_duration() {
	return taskDuration;
}

void Task::print_task() {
	cout << "Task: " << taskName << "\nDetails: " << taskDetails << "\n";
	cout << "Start Time: ";
	startTime.print();
	cout << "\nEnd Time: ";
	endTime.print();
	cout << "\nTask duration: " << taskDuration << " \n";
}