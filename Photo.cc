#include "Photo.h"

Photo::Photo(const string& title, const string& category, const Date& date, const string& content)
    : title(title), category(category), date(date), content(content) {}

bool Photo::equals(const string& title) const{
    return this->title == title;
}

void Photo::print(ostream& out) const{
    out << "Photo - title = " << title << "; category = " << category << "; date = " << date << ";";
}

void Photo::display(ostream& out) const{
    print(out);
    out << content << endl;
}

ostream& operator<<(ostream& out, const Photo& photo) {
    photo.print(out);
    return out;
}