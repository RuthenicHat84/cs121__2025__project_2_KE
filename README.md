# HorseRace

Procedural Horse Racing *without OOP*

Overview
A horse-race game in C++.  The main purpose of this project is to explore the C++ programming language and build a project using a procedural style of programming (Later, we will re-write this project in another style: object-oriented.)

The general idea is this.  You have 5 horses named 9 (with great creativity) 0 through four.  The horses are all on a track that is 15 characters long.

On each turn, each horse flips a coin.  (No, I don't know exactly how a horse would do this, but go with me here.)  If the horse gets 'heads,' it advances one space, and for 'tails' it stays in the same spot. 

The user presses the "Enter" key to get the next turn, and the race proceeds until one or more of the horses has finished the race.

## Global Variables
```

CONST int TRACKLENGTH set to 15
CONST int MAXHORSES set to 5
bool gameRunning starts with true
int * pointer array set to {0,0,0,0,0} (the hidden positions of the horses, in the order of the horses. example: {0,0,0,3,0} will read "horse 3 is on the 4th tile" (since tile 1 is number 0))

```

## Fuctions

void advance(int horseNum, int * pointer array);

```

int coin = 100 (number doesn't matter, just needs to be something not going to be used by code)
create random generator
create distributor from 0 to 1
for (every horse):
	horse position += coin distributor

```

void printLane(int horseNum, int * pointer array);

```
track is initally an array of 15 dots
function printLane(int horseNum, int * pointer horses)
    for (every horse):
        get array[horseNum] position
        update position on track
        print out track
        
```

bool isWinner(int horseNum , int * pointer array);

```

if (horseNum >= TRACKLENGTH):
	return true

```

## Main():

```

while(gameRunning is true):
	print "Please Enter for Next Frame"
	get input from user
	
	for (every horse):
		call advance function
		call printLane function

		if (isWinner returns true):
			set gameRunning to false

return 0

```
