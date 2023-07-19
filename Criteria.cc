
#include "Criteria.h"

// Cat_Criteria Class
Cat_Criteria::Cat_Criteria(const string& cat) : category(cat) {}

bool Cat_Criteria::matches(const Photo& photo) const {
    return category == photo.getCategory();
}

void Cat_Criteria::print(ostream& out) const {
    out << "Cat_Criteria matches by Category. Category = " << category << ";";
}

// Date_Criteria Class
Date_Criteria::Date_Criteria(const Date& start, const Date& end) : startDate(start), endDate(end) {}

bool Date_Criteria::matches(const Photo& photo) const {
    return (photo.getDate() >= startDate && photo.getDate() <= endDate);
}

void Date_Criteria::print(ostream& out) const {
    out << "Date_Criteria matches by Dates. startDate = " << startDate << "; endDate = " << endDate << ";";
}

// CandD_Criteria Class
CandD_Criteria::CandD_Criteria(const Date& start, const Date& end, const string& category) : startDate(start), endDate(end), category(category) {}

bool CandD_Criteria::matches(const Photo& photo) const{
    return (category == photo.getCategory()) && (photo.getDate() >= startDate && photo.getDate() <= endDate);
}

void CandD_Criteria::print(ostream& out) const {
    out << "CandD_Criteria matches by Category and Dates. startDate = " << startDate << "; endDate = " << endDate << "; category = " << category << ";";
}

// overload output method
ostream& operator<<(ostream& out, const Criteria& crit) {
    crit.print(out);
    return out;
}