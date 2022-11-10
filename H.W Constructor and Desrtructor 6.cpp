
#include <bits/stdc++.h>
using namespace std;

class Time {
private:
	int hours, minutes, seconds;

public:
	Time(int hours, int minutes, int seconds) :
		hours(hours), minutes(minutes), seconds(seconds) {
		SetTime(hours, minutes, seconds);
		SetHours(hours);
		SetMinutes(minutes);
		SetSeconds(seconds);
		// to avoid Duplication

	}

	void SetTime(int hours, int minutes, int seconds) {
		this->hours = hours;
		this->minutes = minutes;
		this->seconds = seconds;
	}
	int GetTotalSeconds() {
		return hours * 60 * 60 + minutes * 60 + seconds;
	}
	int GetTotalMinutes() {
		return hours * 60 + minutes;
	}
	string ToSring(string seperator = "-") {
		ostringstream oss;
		oss << hours << seperator << minutes << seperator << seconds;
		return oss.str();
	}
	void PrintHHMMSS() {
		cout << ToSring(":") << "\n";
	}
	int GetHours() {
		return hours;
	}
	Time& SetHours(int hours) {
		this->hours = hours;
		return *this;   // return object
	}
	int GetMinutes() {
		return minutes;
	}
	Time& SetMinutes(int minutes) {
		if (minutes < 0)
			minutes = 0;
		this->minutes = minutes % 60;   // to fix logic error
		this->hours += minutes / 60;
		return *this;
	}
	int GetSeconds() {
		return seconds;
	}
	Time& SetSeconds(int seconds) {
		if (seconds < 0)
			seconds = 0;
		this->seconds = seconds % 60;    // to fix logic error
		this->minutes += seconds / 60;
		return *this;
	}
};

int main() {
	Time t(0, 120, 120);
	Time t2(0, 0, 0);
	t2.SetHours(5).SetMinutes(45).SetSeconds(20);
	t.PrintHHMMSS();
	t2.PrintHHMMSS();
	return 0;
}