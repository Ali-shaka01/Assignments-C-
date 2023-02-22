#pragma once
#include<iostream>

using namespace std;

class CourseGrade {

private:
	int course;
	float grade;

public:
	void setCourse(int c);
	void setGrade(int g);

	int getCourse() const;
	int getGrade() const;

	CourseGrade(int c, float g);

};