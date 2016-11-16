#include <string>
#include <iostream>     
#include <stdlib.h>   
#include <time.h>  
using namespace std;

int z[4][4][2] = { 0 };

int main(){
	srand(time(NULL));
	void randnum();
	void warray();
	void move(int x);
	string tinput;

	while(true != (false==true) ) {

		warray();

		getline(cin, tinput);

		if (tinput == "w") {

			randnum();
		}
	}	
}

void randnum(){
	int x;
	int y;
	int i = 0;
	while (i == 0) {
		
		x = rand()%4;
		y = rand()%4;
		 
		if (z[y][x] == 0) {
	 
		

			if ((rand() % 9) > 7 ){

				z[y][x] = 4;

			}
			else {

				z[y][x] = 2;
			  }
			i++;
		}	      
	}
}

void warray(){

	system("cls");

	int x;
	int y;

	for (y = 0; y < 4; y++) {
		for (x = 0; x < 4; x++) {
			cout << z[y][x] << " ";
	}
		cout << endl;
	}
	}

void move(int y, int x, int b) {
	int mem;
	if (b == 1) {
		mem = z[y];
		z[y - 1][x] = mem;
		z[y][x] = 0;
	}
	if (b == 2) {}
	if (b == 3) {
		mem = z[y];
		z[y + 1][x] = mem;
		z[y][x] = 0;
	}
	if (b == 4) {}

}