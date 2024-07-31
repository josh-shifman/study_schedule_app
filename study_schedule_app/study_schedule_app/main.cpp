#include "day.h"
using namespace std;
int main() {
	Day day1(1);
	day1.add_task("Task 1", "Complete task", Time(1,10), Time(2,30));
	day1.print_tasks();
	return 0;
}