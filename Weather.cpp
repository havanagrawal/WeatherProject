#include "Weather.h"
#include<string>
#include<sstream>

Weather::Weather() {}

Weather::Weather(int day_no, double max_t, double min_t) : day(day_no), max_temperature(max_t), min_temperature(min_t) {}

double Weather::getSpread() const {
	return max_temperature - min_temperature;
}

int Weather::getDay() const{
	return day;
}

std::string Weather::toString() const {
	std::stringstream s;
	s << day << "\t" << max_temperature << "\t" << min_temperature << "\n";
	return s.str();
}

int Weather::parseWeather(std::string line, Weather &w) {
	std::stringstream stream(line);
	
	int day;
	double max_t, min_t;
	stream >> day >> max_t >> min_t;
	
	if (!stream) {
		return -1;
	}
	w.day = day;
	w.max_temperature = max_t;
	w.min_temperature = min_t;
	
	return 0;
}
