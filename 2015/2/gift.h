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
        int get_width() const {return sides[0];};
        int get_length() const {return sides[1];};
        int get_height() const {return sides[2];};
        std::string get_text_entry() const {return entry;};

    private:
        std::string entry;
        std::array<int, 3> areas; // wl, wh, lh
        std::array<int, 3> sides; // w, l, h
        int get_smallest_side_area();
};

#endif
