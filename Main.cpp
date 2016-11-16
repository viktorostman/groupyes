#include <string>
#include <iostream>     
#include <stdlib.h>   
#include <time.h>  
using namespace std;

int z[4][4] = { 0 };

int main(){
	srand(time(NULL));
	void randnum();
	void warray();
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
	 
		

			if ((rand() % 9) > 8 ){

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

