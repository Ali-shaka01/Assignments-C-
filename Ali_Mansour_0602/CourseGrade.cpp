#include "CourseGrade.h"

void CourseGrade::setCourse(int c)
{
	if (c >= 1000 || c <= 9999) {
		course = c;
	}
}

void CourseGrade::setGrade(int g)
{
	if (g >= 0.00 || g <= 100.00) {
		grade = g;
	}
}

int CourseGrade::getCourse() const
{
	return course;
}

int CourseGrade::getGrade() const
{
	return grade;
}

CourseGrade::CourseGrade(int c, float g)
{
	if (c >= 1000 || c <= 9999) {
		course = c;
	}

	if (g >= 0.00 || g <= 100.00) {
		grade = g;
	}
}
