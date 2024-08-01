#include "gift.h"

Gift::Gift(const std::string& text_dim): entry(text_dim) {
    // fragment string text entry into the integral side entries
    std::stringstream stream(entry);
    std::string segment;
    for (int i = 0; std::getline(stream, segment, 'x'); i++) {
        sides[i] = std::stoi(segment);
    }

    // calculate areas
    areas[0] = sides[0]*sides[1];
    areas[1] = sides[0]*sides[2];
    areas[2] = sides[1]*sides[2];
}

int Gift::get_smallest_side_area() {
    int i = 0;
    int smallest_area = areas[0];
    for (; i < areas.size(); i++)
        if (smallest_area > areas[i])
            smallest_area = areas[i];
    return smallest_area;
}

int Gift::get_gift_area() {
    int smallest_area = get_smallest_side_area();
    return 2*areas[0]+2*areas[1]+2*areas[2]+smallest_area;
}
