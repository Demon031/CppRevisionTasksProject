#pragma once
#include "Tasks.h"

#define RIGHT "completed successfully. Well DONE!!!"
#define WRONG "was not running successfully. Something was WRONG!"

void testingTask01() {

	bool result = task01(10, 15) == 15
		&& task01(40, 25) == 40
		&& task01(7, 7) == 7;

	cout << "Task 01 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask02() {

	bool result = task02(7, 6) == 1
		&& task02(6, 7) == 2
		&& task02(7, 7) == 0;

	cout << "Task 02 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask03() {

	bool result = task03(1, 1, 1) == "YES"
		&& task03(3, 4, 5) == "YES"
		&& task03(5, 3, 4) == "YES"
		&& task03(4, 5, 3) == "YES"
		&& task03(1, 2, 3) == "NO"
		&& task03(1, 1, 3) == "NO"
		&& task03(1, 3, 1) == "NO"
		&& task03(3, 1, 1) == "NO";

	cout << "Task 03 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask04() {

	bool result = task04(4, 2, 6) == "YES"
		&& task04(3, 4, 4) == "YES"
		&& task04(5, 5, 10) == "YES"
		&& task04(1, 1, 1) == "NO"
		&& task04(7, 7, 7) == "YES" 
		&& task04(3, 5, 1) == "NO"
		&& task04(3, 5, 2) == "NO"
		&& task04(3, 5, 3) == "YES"
		&& task04(3, 5, 4) == "NO"
		&& task04(3, 5, 5) == "YES"
		&& task04(3, 5, 6) == "YES"
		&& task04(3, 5, 7) == "NO"
		&& task04(3, 5, 8) == "NO"
		&& task04(3, 5, 9) == "YES"
		&& task04(3, 5, 10) == "YES"
		&& task04(3, 5, 11) == "NO"
		&& task04(3, 5, 12) == "YES"
		&& task04(3, 5, 13) == "NO"
		&& task04(3, 5, 14) == "NO"
		&& task04(3, 5, 15) == "NO"
		&& task04(2, 10, 7) == "NO"
		&& task04(9, 9, 3) == "NO"
		&& task04(1, 8, 10) == "NO"
		&& task04(1, 5, 6) == "NO"
		&& task04(2, 4, 9) == "NO";

	cout << "Task 04 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask05() {

	bool result = task05(4, 6, 5) == "NO"
		&& task05(3, 5, 5) == "YES"
		&& task05(1, 1, 1) == "YES"
		&& task05(1, 1, 2) == "YES"
		&& task05(1, 2, 2) == "YES"
		&& task05(2, 1, 2) == "YES"
		&& task05(2, 1, 1) == "NO"
		&& task05(1, 2, 1) == "NO";

	cout << "Task 05 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask06() {

	bool result = task06(4, 6, 5, 5) == "NO"
		&& task06(3, 5, 5, 4) == "YES"
		&& task06(1, 1, 1, 1) == "YES"
		&& task06(2, 2, 2, 2) == "YES"
		&& task06(1, 2, 2, 2) == "YES"
		&& task06(2, 1, 2, 2) == "YES"
		&& task06(1, 2, 1, 2) == "YES"
		&& task06(1, 2, 2, 1) == "YES"
		&& task06(2, 1, 1, 2) == "YES"
		&& task06(2, 1, 2, 1) == "YES"
		&& task06(3, 2, 2, 2) == "NO"
		&& task06(2, 3, 2, 2) == "NO"
		&& task06(3, 3, 2, 2) == "NO"
		&& task06(3, 3, 3, 2) == "NO"
		&& task06(3, 3, 2, 3) == "NO";
		
	cout << "Task 06 " << (result ? RIGHT : WRONG) << endl;
}