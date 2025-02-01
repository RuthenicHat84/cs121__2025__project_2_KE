/* Kayden Ewers
 * CS121
 * Horse Race (No OOP)
 * simulates a digital horse race with 5 racers present. First to the end of the 15 segment long track wins.
 * users step through each turn of the race, where horses advance one step with each input from the user.
 */

#include <iostream>
#include <random>


// constants and functions used in entire program
const int TRACKLENGTH = 15;
const int MAXHORSES = 5;

// horseNum is used to identify which of the 5 horses in the array we are currently referring to
void advance(int horseNum, int* racers);
void printLane(int horseNum, int* racers);
bool isWinner(int horseNum, int* racers);

//boolean to run the race
//create data for the horses (racers) that will be simulated
bool gameRunning = true;
int racers[] = {0,0,0,0,0};


// calls all functions
int main(){
	
	// while the game is running, command output information, and expect input back.
	while (gameRunning){
	std::cout << "Press Enter for Next Frame..." << std::endl;
        std::cin.get();

		// when input is gotten back from user, run advance and printLane functions for every horse.
		// print needs to be before advance, or it will give some of the horses a head-start.
		for (int i = 0; i < MAXHORSES; i++){
			printLane(i, racers);
			advance(i, racers);
		
			// if isWinner returns true, set game running to false.
			if (isWinner(i, racers)){
				gameRunning = false;
			} // end if
		} // end for
	} // end while	

	return 0;

} // end main

void advance(int horseNum, int* racers){

	// create int coin (for a 'heads or tails' coin flip)
	// coin initally set to a random number that won't be used in the data, to avoid overlap.
	int coin = 100;
	
	// random number generator
	// creates a random number, either 0 or 1, and assigns the value associated with coin to that number
	std::random_device rd;
  	std::uniform_int_distribution<int> dist(0, 1);
	coin = dist(rd);

	// assigns the value of the horse equal to either value + 0, or value + 1
	// if the coin rolls a 0, it effectively does nothing, and the horse stays where it is.
	racers[horseNum] += coin;
} // end advance

void printLane(int horseNum, int* racers){
	
	// create the track, and set the character type to periods
	char track[] = "...............";
	for (int i = 0; i < TRACKLENGTH; i++){
		track[i] = '.';
        } // end for
   	
	//print the horse at it's position in the track, dictated by the horse's value
	track[racers[horseNum]] = '0' + horseNum;
    	std::cout << track << std::endl;
} // end printLane

bool isWinner(int horseNum, int* racers){
	
	// if horse is not at the end of track, return false and move on.
	if(racers[horseNum] < TRACKLENGTH - 1){
		return false;
	} // end if
	
	// otherwise, if the horse is at the end of the track, print the winning horse and return true.
	else{
		std::cout << "HORSE " << horseNum <<" IS THE WINNER!" << std::endl;
		return true;
	} // end else

} // end isWinner
