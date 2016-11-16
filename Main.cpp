#include <string>
#include <iostream>     
#include <stdlib.h>   
#include <time.h>  
using namespace std;

int z[4][4] = { 0 };

int main() {
	srand(time(NULL));

	void randnum();
	void warray();
	void move(int y, int x, int b);
	void spawn(int v, int x, int y);

	string tinputa;

	int tinputb;
	int tinputc;
	int tinputd;

			while (true) {
				warray();
				cin >> tinputa >> tinputb >> tinputc >> tinputd;
				if (tinputa == "spawn"){
					spawn(tinputb, tinputc, tinputd);
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
	int cord;
	if (b == 1) {}
	if (b == 2) {}
	if (b == 3) {}
	if (b == 4) {}
}
void spawn(int v, int x, int y) {
	if (z[y][x] == 0) {
		z[y][x] = v;
	}
}