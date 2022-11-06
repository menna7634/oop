

#include <iostream>
using namespace std;
class Date {
private:
	int year;
	int month;
	int day;
public:
	// setters and getters
	void setyear(int y) {
		year = y;
	}
	void setmonth(int m) {
		month = m;
	}
	void setday(int d) {
		day = d;
	}
	int getyear() {
		return year;
	}
	int getmonth() {
		return month;
	}
	int getday() {
		return day;
	}
	void showall() {
		cout << year << "," << month << "," << day << "\n";
	}
	void showmonthyear() {
		cout << month << "," << year << "\n";
	}
	void showdaymonth() {
		cout << day << "," << month << "\n";

	}
	
};
class timee {
private:
	int hour;
	int minute;
	int second;
public:
	void settime(int h, int m, int s);
	void gettime();
};
	void timee::settime(int h,int m ,int s) {
		hour = h;
		minute = m;
		second = s;
	}
	void timee::gettime() {
		cout<<hour << "," << minute << "," << second;
	}

int main()
{
	Date d1;
	d1.setyear(2022);
	d1.setmonth(11);
	d1.setday(7);
	d1.showall();
	d1.showdaymonth();

	timee t1;
	t1.settime(8, 2, 50);
	t1.gettime();
	

}

