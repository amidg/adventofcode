#include <iostream>
#include <cstring>
#include "input.h"

int curr_floor = 0;
int basement_index = 0; // first index that makes Santa enter the basement. Indeces start with 1

int main(int argc, char* argv[]) {
    std::cout << strlen(puzzle_input) << std::endl;
    for (int i = 1; *puzzle_input != '\0'; puzzle_input++, i++) {
        // calculate current floor index
        if (*puzzle_input == '(')
            curr_floor++;
        else if (*puzzle_input == ')')
            curr_floor--;

        // calculate index at which santa enters basement for the first time
        if (curr_floor < 0 && basement_index == 0)
            basement_index = i;
    }

    std::cout << "Resulting Floor: " << curr_floor << std::endl;
    std::cout << "First index to enter basement: " << basement_index << std::endl;

    return 0;
}
