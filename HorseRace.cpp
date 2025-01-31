/*
 *
 *
 */
#include <iostream>
#include <random>

const TRACKLENGTH = 15
const MAXHORSES = 5
void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

int main(){
/*	bool gameRunning = true;
	while (gameRunning){
		for (int i = 0; i < MAXHORSES; i++){
			advance(i, horses);
			printLane(i, horses);
			if (isWinner(i, horses)){
				gameRunning = false;
			} // end if
		} // end for
	} // end while	
} // end main

void advance(horseNum, horses){
	int coin = 100;
	int i = 0
	std::random_device rd;
  	std::uniform_int_distribution<int> dist(1, 100);
	for( i in
} // end advance

void printLane(horseNum, horses){
*/
	char track[16];
	for (int i = 0; i < TRACKLENGTH; i++){
		track[i] = ".";
		std::cout<<track<<" ";

	} // end for
} // end printLane
/*
bool isWinner(horseNum, horses){

} // end isWinner
*/
