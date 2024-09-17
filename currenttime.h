#pragma once
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

string getcurrenttime() {
	time_t now = time(nullptr);
	tm localtime;
	localtime_s(&localtime, &now);
	char buffer[80];
	strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", &localtime);
	return string(buffer);
}
