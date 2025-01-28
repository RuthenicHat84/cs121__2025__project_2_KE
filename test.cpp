#include <iostream>
#include <random>

int main(){
int counter = 0;
int coin = 0;
std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);
while(counter <= 10){
	counter += 1;
	coin = dist(rd);
	std::cout << coin << std::endl;
	}
}
