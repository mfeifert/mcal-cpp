#include <fstream>
#include <iostream>
#include <string>
#include "event.h"

void new_event();
void write_to_file(std::string&);

int main()
{
	new_event();

	return 0;
}

void new_event()
{
	Event event;
	std::string event_string{event.to_string()};

	std::cout << event_string << std::endl;
	write_to_file(event_string);
}

void write_to_file(std::string& e)
{
	std::ofstream f;
	f.open("mycal", std::ios::app);

	f << e << std::endl;

	f.close();
}
