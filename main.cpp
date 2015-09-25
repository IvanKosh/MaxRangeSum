/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 23 Сентябрь 2015 г., 20:56
 */

#include <iostream>
//#include <fstream>
//#include <stdio.h>

#include <stdio.h>

using namespace std;

FILE *fp;
short mas[100];

int main(int argc, char *argv[]) {
	
	fp = fopen(argv[1], "r");
    char buffer[128];
	short n, temp;
    short i, j, scanresult;
    freopen(argv[1], "r", stdin);
	
	for (i = 0; i < 100; i++) {
		mas[i] = 0;
	}
	
	// Получить n
	// Если ;MAS 
	// (пока) продолжать получать числа и записывать в массив
	// вывести получившийся массив(кроме последнего числа) с n
	// (потом)произвести расчеты
	// (потом)Найти самое большое число и вывести
	// присвоить n последнее число массива
	// перейти на "Если ;MAS
	
	scanf ("%i;", &n);
	i = 0;
L:
	scanresult = scanf("%i", &mas[i]);
	while(scanresult == 1) {
		if (scanresult == 0) {
		}
		++i;
		scanresult = scanf("%i", &mas[i]);
	}

	cout << n << ';';
	for(int j = 0; j < i-1; ++j)
		printf("%i ", mas[j]);
	
	n = mas[i-1];
	if(scanf(";%i", &mas[0]) == 1) {
		i = 1;
		cout << endl;
		goto L;
	}
	else {
		cout << n;
		cout << endl;
	}
	return 0;
}

