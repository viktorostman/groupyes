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
	void move(int b, int x, int y);
	void spawn(int v, int x, int y);
	void del(int x, int y);

	string tinputa;

	int tinputb;
	int tinputc;
	int tinputd;

			while (true) {
				warray();
				cin >> tinputa;
				if (tinputa == "spawn") {
					cin >> tinputb >> tinputc >> tinputd;
					spawn(tinputb, tinputc, tinputd);
				}
				if (tinputa == "del") {
					cin >> tinputb >> tinputc;
					del(tinputb, tinputc);
				}
				if (tinputa == "move") {
					cin >> tinputb >> tinputc >> tinputd;
					move(tinputb, tinputc, tinputd);
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

void move(int b, int x, int y) {
	void del(int x, int y);
	int cord;
	if (b == 1) {
		for (; z[y - 1][x-1] =) {

		}
		del(x, y);
	}
	else if (b == 2) {}
	else if (b == 3) {}
	else if (b == 4) {}
}
void spawn(int v, int x, int y) {
	if (z[y-1][x-1] == 0) {
		z[y-1][x-1] = v;
	}
}
void del(int x, int y) {
	if (z[y - 1][x - 1] != 0) {
		z[y - 1][x - 1] = 0;
	}
}