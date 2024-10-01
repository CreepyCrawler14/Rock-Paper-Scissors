#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

std::srand(std::time(0));

while (1 == 1) {

int choice;
std::cout << std::endl << "Make your choice: Rock (1) Paper (2) Scissors (3) Exit (0) " << std::endl; 
std::cin >> choice;

if (choice == 0) {
  exit(0);
  }

int computer_choice = std::rand() % 3;

if (choice == 1) {
  if (computer_choice == 0) {
    std::cout << "The computer chose rock, it's a tie!" << std::endl;
  }
}

if (choice == 2) {
  if (computer_choice == 0) {
    std::cout << "The computer chose rock, you win!" << std::endl;
  }
}

if (choice == 3) {
  if (computer_choice == 0) {
    std::cout << "The computer chose rock, you lose!" << std::endl;
  }
}

if (choice == 1) {
  if (computer_choice == 1) {
    std::cout << "The computer chose paper, you lose!" << std::endl;
  }
}

if (choice == 2) {
  if (computer_choice == 1) {
    std::cout << "The computer chose paper, it's a tie!" << std::endl;
  }
}

if (choice == 3) {
  if (computer_choice == 1) {
    std::cout << "The computer chose paper, you win!" << std::endl;
  }
}

if (choice == 1) {
  if (computer_choice == 2) {
    std::cout << "The computer chose scissors, you win!" << std::endl;
  }
}

if (choice == 2) {
  if (computer_choice == 2) {
    std::cout << "The computer chose scissors, you lose!" << std::endl;
  }
}

if (choice == 3) {
  if (computer_choice == 2) {
    std::cout << "The computer chose scissors, it's a tie!" << std::endl;
  }
}

}

}
