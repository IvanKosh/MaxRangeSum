/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 23 Сентябрь 2015 г., 20:56
 */

//#include <iostream>
//#include <fstream>
//#include <stdio.h>

#include <stdio.h>

using namespace std;

FILE *fp;
short mas[100];
int sum[100];
int Max;
short n, j, l;

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
//		cout << n << ';';
//		for(j = 0; j < i-1; ++j)
//			printf("%i ", mas[j]);
//		cout << endl;
		
		for (l = 0; l < i; l++) {
			sum[l] = 0;
		}
		
		Max = 0;
		for (j = 0; j < i-n; j++) {
			for (l = j; l < j+n; l++) {
				sum[j] += mas[l];
			}
		}
		
		for (l = 0; l < i-n; l++) {
			//cout << sum[l] << ' ';
			if (Max < sum[l])
				Max = sum[l];
		}
		
		printf("%i\n", Max);
		//cout << Max << endl;
		
		n = mas[i-1];
		i = 1;
		mas[0] = temp;
		goto L;
	}
	else {	
//		cout << n << ';';
//		for(j = 0; j < i; ++j)
//			printf("%i ", mas[j]);
//		cout << endl;
		
		for (l = 0; l < i; l++) {
			sum[l] = 0;
		}
		
		Max = 0;
		for (j = 0; j < i-n+1; j++) {
			for (l = j; l < j+n; l++) {
				sum[j] += mas[l];
			}
		}
		
		for (l = 0; l < i-n+1; l++) {
			//cout << sum[l] << ' ';
			if (Max < sum[l])
				Max = sum[l];
		}
		
		printf("%i\n", Max);
		//cout << Max << endl;
	}
	return 0;
}

