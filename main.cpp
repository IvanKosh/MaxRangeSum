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
short sum[100];
short n;

int main(int argc, char *argv[]) {
	
	fp = fopen(argv[1], "r");
    char buffer[128];
	short temp;
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
	if(scanf(";%i", &temp) == 1) {
		cout << n << ';';
		for(int j = 0; j < i-1; ++j)
			printf("%i ", mas[j]);
		cout << endl;
		
		
		
		n = mas[i-1];
		i = 1;
		mas[0] = temp;
		goto L;
	}
	else {	
		cout << n << ';';
		for(int j = 0; j < i; ++j)
			printf("%i ", mas[j]);
		cout << endl;
	}
	return 0;
}

