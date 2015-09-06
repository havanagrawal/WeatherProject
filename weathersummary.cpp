/*
 * Driver program for weather extraction
 * Practice for Object oriented programming
 * Problem statement: http://codekata.com/kata/kata04-data-munging/
 */

#include "Iter.h"
#include "List.h"
#include "Node.h"
#include "Weather.h"
#include<climits>
#include<fstream>
#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main() {
	ifstream weather("./weather.dat");
	string line;
	
	List list_of_weather_data;
	
	while (getline(weather, line)) {
		Weather wt;
		int status = Weather::parseWeather(line, wt);
		if (!status) {
			Node *n = new Node(wt);
			list_of_weather_data.addLast(n);
		}
	}
	
	Iter iterator(list_of_weather_data);
	
	int min_spread = INT_MAX;
	int day_of_min_spread;
	
	while (iterator.valid()) {
		Node* temp = iterator.next();
		double spread = (temp->getData()).getSpread();
		if (spread < min_spread) {
			min_spread = spread;
			day_of_min_spread = temp->getData().getDay();
		}
	}
	
	cout << "The minimum temperature variation was on day: " << day_of_min_spread << endl;
	cout << "The variation was of: " << min_spread << endl;	
}
