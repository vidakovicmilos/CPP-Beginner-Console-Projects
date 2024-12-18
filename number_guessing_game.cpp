#include<iostream>
#include<ctime>
int main() {

	int num;
	int guess = 0;
	int tries = 0;

	srand(time(NULL));
	num = (rand() % 100) + 1;

	std::cout << "**************** NUMBER GUESSING GAME ****************" << std::endl << std::endl;
	

	do {
		std::cout << "Enter a guess between (1 - 100): ";
		std::cin >> guess;
		tries++;

	    if(guess > num){
			std::cout << "Too high!" << std::endl;
		}
		else if(guess < num){
			std::cout << "Too low!" << std::endl;
		}
		else{
			std::cout << std::endl;
			std::cout << "******************************************************" << std::endl;
			std::cout << "CORRECT!" << std::endl;
			std::cout << "Number of tries: " << tries << std::endl;
			std::cout << "******************************************************" << std::endl;
		}
	} while (guess != num);

	return 0;
}