#include <iostream>
#include <format>
#include "app.h"
#include "C:\vsite\oop\v01\app\app.h"
#include "C:\vsite\oop\v01\app\app.cpp"


using namespace vsite::oop::v2;
using namespace vsite::oop::v1;

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

	std::cout << to_hex(c.get_color_ref());
}
