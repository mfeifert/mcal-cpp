#include <fstream>
#include <iostream>
#include "event.h"

void write_to_file(std::string&);

int main()
{
	Event event;
	std::string e{event.to_string()};

	std::cout << e << std::endl;
	write_to_file(e);
        
	return 0;
}

void write_to_file(std::string& e)
{
	std::ofstream f;
        f.open("mycal", std::ios::app);

	f << e << std::endl;

        f.close();
}
