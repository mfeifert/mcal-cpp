#include <fstream>
#include <iostream>
#include "event.h"

void write_to_file(std::string&);

int main()
{
	Event event;
	std::string event_string{event.to_string()};
	std::cout << event_string << std::endl;
	write_to_file(event_string);
        
	return 0;
}

void write_to_file(std::string& event_string)
{
	std::ofstream f;
        f.open("mycal", std::ios::app);

	f << event_string << std::endl;

        f.close();
}
