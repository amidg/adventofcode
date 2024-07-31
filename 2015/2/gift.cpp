#include "gift.h"

Gift::Gift(const std::string& text_dim): entry(text_dim) {
    // fragment string text entry into the integral side entries
    std::stringstream stream(this->entry);
    std::string segment;
    for (int i = 0; std::getline(stream, segment, 'x'); i++) {
        this->sides[i] = std::stoi(segment);
    }

    // calculate areas
    this->areas[0] = this->sides[0]*this->sides[1];
    this->areas[1] = this->sides[0]*this->sides[2];
    this->areas[2] = this->sides[1]*this->sides[2];
}

int Gift::get_smallest_side_area() {
    int i = 0;
    int smallest_area = this->areas[0];
    for (; i < this->areas.size(); i++)
        if (smallest_area > this->areas[i])
            smallest_area = this->areas[i];
    return smallest_area;
}

int Gift::get_gift_area() {
    return this->areas[0]+this->areas[1]+this->areas[2]+get_smallest_side_area();
}
