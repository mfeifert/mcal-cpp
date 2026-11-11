#include <iostream>
#include <string>
#include <sstream>
#include "event.h"

Event::Event()
{
	prompt();
}

void Event::prompt()
{
	std::cout << "Date: ";
	getline(std::cin, date);
	std::cout << "Start time: ";
	getline(std::cin, start_time);
	std::cout << "End time: ";
	getline(std::cin, end_time);
	std::cout << "Calendar: ";
	getline(std::cin, calendar);
	std::cout << "Tags: ";
	getline(std::cin, tags);
	std::cout << "Title: ";
	getline(std::cin, title);
	std::cout << "Location: ";
	getline(std::cin, location);
	std::cout << "Description: ";
	getline(std::cin, description);
}

std::string Event::to_string() const
{
	std::ostringstream output;

	output << date;

	if (!start_time.empty()) {
		output << " " << start_time;
        } else {
		output << " -----";
	}
	
	if (!end_time.empty()) {
		output << "-" << end_time;
	} else {
		output << "------";
	}

	output << " " << calendar;

	output << ":" << tags;

	if (!title.empty())
		output << " [" << title << "]";

	if (!location.empty())
		output << " <" << location << ">";

	if (!description.empty())
		output << " " << description;

	return output.str();
}
