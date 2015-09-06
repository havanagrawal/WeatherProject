#ifndef WEATHER_H
#define WEATHER_H

#include<string>

/*
 * Represents Weather data
 */
class Weather {	

	public:
		Weather();
		Weather(int day_no, double max_t, double min_t);

		/*
		 * Spread is difference between max and min temperature
		 */
		double getSpread() const;
		
		/*
		 * Retrieve the day number
		 * The current object holds data about
		 */
		int getDay() const;
		
		/*
		 * Returns a printable string format for the Weather object
		 */
		std::string toString() const;
		
		/*
		 * Parses a string into a Weather object
		 * Returns 0 on successful parse
		 */
		static int parseWeather(std::string line, Weather &w);
		
	private:
		int day;
		double max_temperature;
		double min_temperature;
};

#endif
