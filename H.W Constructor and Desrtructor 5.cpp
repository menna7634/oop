

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

	// Duplication Happen Here As Function and Constructor Do Same Thing
	// Logic Error Will Happen 1-if I put Negative Number in (hours,minutes,seconds)
	//2- if I put number > 60 in Minutes or Seconds
	int GetTotalSeconds() {
		return hours * 60 * 60 + minutes * 60 + seconds;
	}
	int GetTotalMinutes() {
		return hours * 60 + minutes;
	}
	/*
	void PrintHHMMSS() {
		cout << hours << ":" << minutes << ":" << seconds << "\n"; // Duplication
	}
	*/
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
	void SetHours(int hours) {
		this->hours = hours;
	}
	int GetMinutes() {
		return minutes;
	}
	void SetMinutes(int minutes) {
		if (minutes < 0)
			minutes = 0;
		this->minutes = minutes % 60;   // to fix logic error
		this->hours += minutes / 60;

	}
	int GetSeconds() {
		return seconds;
	}
	void SetSeconds(int seconds) {
		if (seconds < 0)
			seconds = 0;
		this->seconds = seconds % 60;    // to fix logic error
		this->minutes += seconds / 60;
	}
};

int main() {
	Time t(0, 120, 120);
	Time t2(0, 0, 0);
	t2.SetHours(5);
	t2.SetMinutes(145);
	t2.SetSeconds(80);
	//t2.SetHours(5).SetMinutes(45).SetSeconds(20); // Can't Understand The Syntax Very Well
	t.PrintHHMMSS();
	t2.PrintHHMMSS();
	return 0;
}