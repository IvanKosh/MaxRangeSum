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

int main(int argc, char *argv[]) {
	
	fp = fopen(argv[1], "r");
    char buffer[128];
	short n;
    short i;
    freopen(argv[1], "r", stdin);
	
	for (i = 0; i < 100; i++) {
		mas[i] = 0;
	}
	
	scanf("%i;%i", &n, &mas[0]);
	i = 0;
L1:
    while(scanf("%i",&mas[i])==1 && buffer[i] != EOF)
        ++i;
	
	if(scanf(";%i", &mas[0])==1) {
		i++;
		goto L1;
	}
	
    //print values parsed to int array.    
    for(int j=0; j<i; ++j)
        printf("[%i]: %i\n",j,mas[j]);

	
	
	
    fclose(stdin);
	
	
//	FILE *pFile;
//	pFile = fopen (argv[1], "r");
//	
//	int i, n;
//	
//	fscanf (pFile, "%i;%i", &n, &mas[0]);
	
	//cout << n << ' ' << i;
	
	/*ifstream stream(argv[1]);
	string line;
	short i, n;
	fscanf(stream, "%d;%d", n, mas[0]);
	
	for (i = 0; i < 100; i++) {
		mas[i] = 0;
	}
	while (fscanf(stream, "%d", mas[i])) {
		i++;
	}
	
	for (i = 0; i < 100; i++) {
		cout << mas[i];
	}*/
	return 0;
}

