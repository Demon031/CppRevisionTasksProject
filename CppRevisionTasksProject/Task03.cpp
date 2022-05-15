/*	Задание 03. Треугольник
*
*	Даны три натуральных числа a, b, c.
*	Определите, существует ли треугольник с такими сторонами.
*	Если треугольник существует, выведите строку YES, иначе выведите строку NO.
*
*	Формат входных данных [input]
*	Функция принимает три целых числа.
*
*	Формат выходных данных [output]
*	Функция должна возвратить строку "YES" и "NO".
*
*	[Sample function input 1]: 3 4 5
*	[Sample function output 1]: YES
*
*	[Sample function input 2]: 1 1 3
*	[Sample function output 2]: NO
*/

#include "Tasks.h"

string task03(int a, int b, int c) {
	return(a + b > c ? (b + c > a ? (a + c > b ? "YES" : "NO") : "NO") : "NO");
}