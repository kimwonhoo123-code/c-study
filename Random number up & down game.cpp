#include <iostream>
#include <random>

void fgame();

int main() {
	std::cout << "Hello! Welcome to the UP&DOWN NUMBER GAME!" << '\n' << std::endl;
	std::cout << "Guess the Numbers! You can guess one of the numbers from 1 to 100. You have 10 chances" << '\n' << std::endl;

	fgame(); //game start

	std::cout <<'\n' << "You Want To Play More?" << '\n';
	std::cout << "Yes = 1 / No = 0 : " << std::endl;

	int y_n = 0;

	std::cin >> y_n;

	while (y_n != 1 && y_n != 0 ) {
		std::cout << "You Entered Wrong Number. Plese Re-Enter(1 or 0) " << ">>" << std::endl;
		std::cin >> y_n;
	}

	if (y_n == 1) {
		main();
	}
	else if (y_n == 0) {
		std::cout << "Good Bye!!" << std::endl;
		return 0;
	}
     
}

void fgame() {

	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(1, 100);

	int ran_num = dis(gen);
	int guess_num = 0;

	for (int i = 0; i < 10; i++) {
		std::cout << "Gueww the number!"<< ">>";
		std::cin >> guess_num;

		if (guess_num > ran_num&& i<9) {
			std::cout << "DOWN!" << '\n';
		}
		else if (guess_num < ran_num && i <9) {
			std::cout << "UP!" << '\n';
		}
		else if (guess_num == ran_num) {
			std::cout << "CORRECT!! Congratulations!" << '\n' << std::endl;
			break;
		}
		if(i == 9)
			std::cout<< '\n' << "!!Game Over!!" << '\n'
			<<"The Number Is " << ran_num << std::endl;
	}
	
}