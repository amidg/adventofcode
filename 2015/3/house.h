#ifndef HOUSE_H
#define HOUSE_H

#include <utility>

class House {
public:
    House(int x, int y) { pos = std::make_pair(x, y); };
    explicit House(const std::pair<int, int>& xy) { pos = xy; };
    friend inline bool operator==(const House& lhs, const House& rhs) {
        return lhs.pos.first == rhs.pos.first && lhs.pos.second == rhs.pos.second;
    }
    inline void apply_coordinates(const std::pair<int, int> xy) { pos = xy; };
    inline int get_gifts() const { return gifts; };
    void add_gift() { ++gifts; };
private:
    std::pair<int, int> pos;
    int gifts;
};

#endif
