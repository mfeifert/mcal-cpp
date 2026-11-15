#ifndef EVENT_H
#define EVENT_H

#include <string>

class Event
{
public:
	Event();
	void prompt();
	void format_fields();
	std::string to_string() const;
private:
	// std::string start_date;
	// std::string end_date;
	std::string date;
	std::string start_time;
	std::string end_time;
	std::string calendar;
	std::string tags;
	std::string title;
	std::string location;
	std::string description;
};

#endif
