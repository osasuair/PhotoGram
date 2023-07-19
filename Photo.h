#ifndef PHOTO_H
#define PHOTO_H

#include <iostream>
#include <string>

#include "Date.h"

using namespace std;

class Photo {

    friend ostream& operator<<(ostream& out, const Photo& photo);

    public: 
        Photo(const string& title, const string& category, const Date& date, const string& content);

        bool equals(const string& title) const;
        inline const Date& getDate() const { return date; }
        inline const string& getCategory() const { return category; }

        void print(ostream& out) const;
        void display(ostream& out) const;

    private:
        string title;
        string content;
        string category;
        Date date;
};
#endif