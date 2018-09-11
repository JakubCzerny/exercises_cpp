/*
 * maze.cpp
 *
 *  Created on: Sep 11, 2018
 *      Author: kuba
 */

#include <iostream>
using namespace std;

typedef enum {wood , stone} material;

typedef struct {
	int x,y;
	bool isWall;
	material type;
} field;

const int m = 12;
const int n = 16;

//#define n 16
//#define m 12

int x = 5;
int y = 5;

field playground[n][m];

int main() {
	bool exit = false;

	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			playground[i][j].x=i;
			playground[i][j].y=j;
			playground[i][j].isWall=(i==0||i==(n-1)||(j==0&&i!=3) ||j==(m-1));

			if (playground[i][j].isWall && !(i==3 && j==0)){
				playground [i][j].type=stone;
			} else {
				playground [i][j].type=wood;
			}
		}
	}

	while (!exit){
		for (int j=0; j<m; j++) {
			for (int i=0; i<n; i++) {
				if (i == x && j == y) {
					cout << "O";
				} else if (playground[i][j].isWall){
					cout << "*";
				} else {
					cout << " ";
				}
			}
			cout << endl;
		}

		char input = cin.get();

		if (input == 'q') {
			exit = true;
		} else if (input == 'l' && !playground[x-1][y].isWall){
			x--;
		} else if (input == 'r' && !playground[x+1][y].isWall){
			x++;
		} else if (input == 'u' && !playground[x][y-1].isWall){
			y--;
		} else if (input == 'd' && !playground[x][y+1].isWall){
			y++;
		}
	}
}
