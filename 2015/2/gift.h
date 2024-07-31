#pragma once
#ifndef GIFT_H
#define GIFT_H

#include<string>
#include<array>
#include<sstream>

class Gift {
    public:
        Gift(const std::string& text_dim);

        int get_gift_area();
        int get_width() {return sides[0];};
        int get_length() {return sides[1];};
        int get_height() {return sides[2];};

    private:
        std::string entry;
        std::array<int, 3> areas; // wl, wh, lh
        std::array<int, 3> sides; // w, l, h
        int get_smallest_side_area();
};

#endif
