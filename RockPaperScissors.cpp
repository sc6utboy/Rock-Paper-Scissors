//
// Created by Yankee on 30.09.2026.
//

#include <iostream>
#include <ctime>

char getUserChoice();
char getCompChoice();
void showChoice(char choice);
void chooseWinner(char player, char comp);

int main() {
    char player;
    char comp;
    char again;

    do {
        std::cin.clear();
        fflush(stdin);

        player = getUserChoice();
        std::cout << "Your choice: ";
        showChoice(player);

        comp = getCompChoice();
        std::cout << "Computer choice: ";
        showChoice(comp);

        chooseWinner(player, comp);

        std::cout << "Play again? (y/n) ";
        std::cin >> again;
    }while (again == 'y');
    std::cout << "Good Luck!!\n";

    return 0;
}

char getUserChoice() {
    char player;
    std::cout << "Rock-Paper-Scissors game!\n";

    do {
        std::cout << "Choose one of the following\n";
        std::cout << "*************************\n";
        std::cout << "'r' For rock\n";
        std::cout << "'p' For paper\n";
        std::cout << "'s' For scissors\n";
        std::cin >> player;

    }while (player != 'r' && player != 'p' && player != 's');

    return player;
}

char getCompChoice() {
    srand(time(NULL));
    int num = rand() % 3 + 1;
    switch (num) {
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}
void showChoice(char choice) {
    switch (choice) {
        case 'r': std::cout << "Rock\n";
            break;
        case 'p': std::cout << "Paper\n";
            break;
        case 's': std::cout << "Scissors\n";
            break;
    }

}
void chooseWinner(char player, char comp) {
    switch (player) {
        case 'r':
            if (comp == 'r') {
            std::cout << "It's a tie!\n";
            }
            else if (comp == 'p') {
                std::cout << "You loose!\n";
            }
            else {
                std::cout << "you win!\n";
            }
            break;
        case 'p':
            if (comp == 'p') {
                std::cout << "It's a tie!\n";
            }
            else if (comp == 's') {
                std::cout << "You loose!\n";
            }
            else {
                std::cout << "You win!\n";
            }
            break;
        case 's':
            if (comp == 's') {
                std::cout << "It's a tie!\n";
            }
            else if (comp == 'r') {
                std::cout << "You loose!\n";
            }
            else {
                std::cout << "You win!\n";
            }
            break;
    }
}
