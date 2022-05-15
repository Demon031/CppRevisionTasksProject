/*	Задание 02. Два числа
*
*	Даны два целых числа. Программа должна вывести единицу,
*	если первое число больше второго, двойку, если второе больше первого,
*	или ноль, если они равны.
*
*	Формат входных данных [input]
*	Функция принимает два целых числа.
*
*	Формат выходных данных
*	Функция должна вывести результирующее число.
*
*	[Sample function input 1]:  7 6
*	[Sample function output 1]: 1
*
*	[Sample function input 2]: 6 7
*	[Sample function output 2]: 2
*
*	[Sample function input 3]: 7 7
*	[Sample function output 3]: 0
*/

#include "Tasks.h"

int task02(int a, int b) {
	return (a == b ? 0 : (a > b ? 1 : 2));

}