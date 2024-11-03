#include <iostream>
#include <format>
#include "app.h"

using namespace vsite::oop::v2;

int main()
{
	color c;
	double r = 0;
	double g = 0;
	double b = 0;

	std::cin >> r >> g >> b;

	c.set_red(r);
	c.set_green(g);
	c.set_blue(b);

	std::cout << std::format("{:X}", c.get_color_ref());
}
