#include <iostream>
#include <fstream>
#include <vector>
#include "gift.h"

std::vector<Gift> gifts;
int total_area = 0;

int main(int argc, char* argv[]) {
    std::ifstream file("input.txt");
    std::string line; 
    while (std::getline(file, line)) {
        gifts.push_back(Gift(line));
        //std::cout << gifts.back().get_text_entry() << std::endl;
    }

    for (auto& gift : gifts)
        total_area += gift.get_gift_area();

    std::cout << "Total Area: " << total_area << std::endl;

    return 0;
}
