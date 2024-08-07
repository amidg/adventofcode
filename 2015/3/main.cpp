#include <iostream>
#include <vector>

// custom
#include "input.h"
#include "house.h"

int main() {
    std::pair<int, int> curr_xy {0, 0}; //
    std::vector<House> houses; 

    // iterate over the elf commands
    House temp(curr_xy);
    std::vector<House>::iterator found_house;
    for (int i = 0; i < commands.size(); i++) {
        // read command
        switch (commands[i]) {
            case NORTH:
                ++curr_xy.second;
                break;
            case SOUTH:
                --curr_xy.second;
                break;
            case EAST:
                ++curr_xy.first;
                break;
            case WEST:
                --curr_xy.first;
                break;
        }

        // add house
        temp.apply_coordinates(curr_xy);
        if ( (found_house = std::find(houses.begin(), houses.end(), temp)) != houses.end()) {
            found_house->add_gift();
        } else {
            houses.push_back(temp);
        }
    }

    // check how many houses have more than one gift
    int result = 0;
    for (auto& house : houses) {
        if (house.get_gifts() >= 1)
            ++result;
    }

    std::cout << result << std::endl;

    return 0;
}
