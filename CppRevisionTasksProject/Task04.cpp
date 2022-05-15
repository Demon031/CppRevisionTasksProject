﻿/*	Задание 04. Шоколадка
*
*   Шоколадка имеет вид прямоугольника, разделенного на N×M равных долек.
*   Шоколадку можно один раз разломить по прямой на две части.
*   Определите, можно ли таким образом отломить от шоколадки ровно K долек.
*   Отломить можно всего один раз между дольками по разделительной линии.
*
*	Формат входных данных [input]
*	Функция получает на вход три целых числа n, m и k.
*
*	Формат выходных данных [output]
*	Функция должна возвратить одно из двух слов: "YES" или "NO".
*
*	[Sample function input 1]: 4 2 6
*	[Sample function output 1]: YES
*
*	[Sample function input 2]: 3 4 4
*	[Sample function output 2]: YES
*
*	[Sample function input 3]: 2 10 7
*	[Sample function output 3]: NO
*/

#include "Tasks.h"

string task04(int n, int m, int k) {
	return (n * m > k && (k % n == 0 || k % m == 0))? "YES" : "NO";
}