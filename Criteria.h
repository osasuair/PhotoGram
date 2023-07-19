#ifndef CRITERIA_H
#define CRITERIA_H

#include <iostream>
#include <string>
#include "Photo.h"

using namespace std;

class Criteria {
	friend ostream& operator<<(ostream&, const Criteria&);

	public:
		virtual bool matches(const Photo& photo) const = 0;
		virtual void print(ostream& out) const = 0;	
};

class Cat_Criteria : public Criteria {
	public:
		Cat_Criteria(const string& cat);

		virtual bool matches(const Photo& photo) const;
		virtual void print(ostream& out) const;	

	private:
		string category;
};

class Date_Criteria : public Criteria {
	public:
		Date_Criteria(const Date& start, const Date& end);

		virtual bool matches(const Photo& photo) const;
		virtual void print(ostream& out) const;	

	private:
		Date startDate;
		Date endDate;
};

class CandD_Criteria : public Criteria {
	public:
		CandD_Criteria(const Date& start, const Date& end, const string& category);

		virtual bool matches(const Photo& photo) const;
		virtual void print(ostream& out) const;	

	private:
		string category;
		Date startDate;
		Date endDate;
};

#endif