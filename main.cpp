#include <fstream>
#include <iostream>
#include "event.h"

void write_to_file(Event&);

int main()
{
	Event event;
	std::cout << event.to_string() << std::endl;
	write_to_file(event);
        
	return 0;
}

void write_to_file(Event& event)
{
	std::ofstream f;
        f.open("mycal", std::ios::app);

	f << event.to_string() << std::endl;

        f.close();
}
