#ifndef WEATHER_H
#define WEATHER_H

#include<string>

//  : day(day_no), max_temperature(max_t), min_temperature(min_t)
class Weather {	

	public:
		Weather();
		Weather(int day_no, double max_t, double min_t);

		double getSpread();
		std::string toString() const;
		static int parseWeather(std::string line, Weather &w);
		
	private:
		int day;
		double max_temperature;
		double min_temperature;
};

#endif
