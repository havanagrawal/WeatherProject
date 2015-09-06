#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
#include "Weather.h"
#include "Node.h"
#include "List.h"

using namespace std;

int main() {
	ifstream weather("./weatherhead.dat");
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
	
	cout << list_of_weather_data.print();
	
}
