#include <bits/stdc++.h>
using namespace std;

int statistics_total_prints = 0;

class StudentGradesInfo {
private:
	string student_id;
	vector<double> grades;
	vector<string> courses_names;
	// track of how many times this function is called
	static int statistics_total_prints;
	double AdjustGrade(double grade) {
		if (grade < 0)
			return 0;
		if (grade > 100)
			return 100;
		return grade;
	}
public:


	StudentGradesInfo() {
		assert(false);   // when i call empty constructor program run in normal way ??
	}

	StudentGradesInfo( string student_id_) {  // remove name as parameter because we don't use it
		student_id = student_id_;
	}

	bool AddGrade(double grade, string course_name) {
		grade = AdjustGrade(grade);
		for (int i = 0; i < (int) courses_names.size(); ++i)
			if(course_name == courses_names[i])
				return false;	// already added
						grades.push_back(grade);
		courses_names.push_back(course_name);
		return true;
	}
	void PrintAllCourses() {
		++statistics_total_prints;

		cout << "Grades for student: " << student_id << "\n";
		for (int i = 0; i < (int) grades.size(); ++i)
			cout << "\t" << courses_names[i] << " = " << grades[i] << "\n";
	}
	pair<string, double> GetCourseGradeInfo(int pos) {
		if (pos < 0 || pos >= (int) grades.size())
			return make_pair("", -1);
		return make_pair(courses_names[pos], grades[pos]);
	}
	string GetStudentId() const {
		return student_id;
	}
	int GetTotalCoursesCount() const {
		return grades.size();
	}
	// Use GetTotalCoursesCount for naming consistency
	pair<double, double> get_total_gradesSum() const {
		double sum = 0, total = 0;
		for (int i = 0; i < (int) grades.size(); ++i)
			sum += grades[i], total += 100;
		return make_pair(sum, total);
	}
};
int StudentGradesInfo::statistics_total_prints = 0;

int main() {
   // StudentGradesInfo m();   //????
	StudentGradesInfo st1("S000123");
	st1.AddGrade(70, "Math");
	st1.AddGrade(70, "programming 1");
	st1.AddGrade(85, "programming 2");

	st1.PrintAllCourses();

	pair<double, double> p = st1.get_total_gradesSum();
	cout<<p.first<<"/"<<p.second<<"\n";

	cout<<"Bye\n";

	return 0;
}
