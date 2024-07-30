#include <iostream>
#include <string>
#include "input.h"

int curr_floor = 0;

int main(int argc, char* argv[]) {
    for (; *puzzle_input != '\0'; puzzle_input++) {
        if (*puzzle_input == '(')
            curr_floor++;
        else if (*puzzle_input == ')')
            curr_floor--;
    }

    std::cout << "Resulting Floor: " << (int)curr_floor << std::endl;

    return 0;
}
