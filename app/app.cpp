#include "app.h"
#include <algorithm>

namespace vsite::oop::v2
{
    color::color() : red(0.0), green(0.0), blue(0.0) {}

    void color::set_red(double r) {
        red = std::clamp(r, 0.0, 1.0);
    }

    void color::set_green(double g) {
        green = std::clamp(g, 0.0, 1.0);
    }

    void color::set_blue(double b) {
        blue = std::clamp(b, 0.0, 1.0);
    }

    double color::get_red() const { return red; }
    double color::get_green() const { return green; }
    double color::get_blue() const { return blue; }

    uint32_t color::get_color_ref() const {
        return RGB(static_cast<int>(red * 255), static_cast<int>(green * 255), static_cast<int>(blue * 255));
    }

    double color::get_luminance() const {
        return (0.2126 * red + 0.7152 * green + 0.0722 * blue);
    }
}
