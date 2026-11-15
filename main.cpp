#include <fstream>
#include <iostream>
#include "event.h"

void write_to_file(Event&);

int main()
{
	Event event;

	std::cout << event << std::endl;
	write_to_file(event);
        
	return 0;
}

void write_to_file(Event& e)
{
	std::ofstream f;
        f.open("mycal", std::ios::app);

	f << e << std::endl;

        f.close();
}
