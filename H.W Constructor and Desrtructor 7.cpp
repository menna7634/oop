
#include <bits/stdc++.h>
using namespace std;

class Time {
private:
	int  totalseconds;

public:
	Time(int hours, int minutes, int seconds) {
		SetTime(hours, minutes, seconds);

	}

	void SetTime(int hours, int minutes, int seconds) {
		SetHours(hours);
		SetMinutes(minutes);
		SetSeconds(seconds);
		totalseconds = 0;
	}
	int GetTotalSeconds() {
		return totalseconds;
	}
	int GetTotalMinutes() {
		return GetHours() * 60 + GetMinutes();
	}
	string ToSring(string seperator = "-") {
		ostringstream oss;
		oss << GetHours() << seperator << GetMinutes() << seperator << GetSeconds();
		return oss.str();
	}
	void PrintHHMMSS() {
		cout << ToSring(":") << "\n";
	}
	int GetHours() {
		return totalseconds / 3600;
	}
	void SetHours(int hours) {
		if (hours < 0)
			hours = 0;
		totalseconds += (hours - GetHours()) * 3600;


	}
	int GetMinutes() {
		return (totalseconds % 3600) / 60;
	}
	void SetMinutes(int minutes) {
		if (minutes < 0)
			minutes = 0;
		totalseconds += (minutes - GetMinutes()) * 90;


	}
	int GetSeconds() {
		return totalseconds % 60;
	}
	void SetSeconds(int seconds) {
		if (seconds < 0)
			seconds = 0;
		totalseconds += (seconds - GetSeconds());

	}
};

int main() {
	Time t(0, 0, 0);
	t.SetMinutes(51);
	t.SetSeconds(60);
	t.SetHours(1);
	cout << t.GetTotalSeconds();
	return 0;
}