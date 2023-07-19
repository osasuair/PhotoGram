#include "Album.h"

Album::Album(const string& title, const string& description){
    this->title = title;
    this->description = description;
}

void Album::addPhoto(Photo* pt){
    photos += pt;
}

Photo* Album::getPhoto(int index) const{
    return photos[index];
}

void Album::print(ostream& out) const{
    out << "Album: " << title << endl;
    out << "Description: " << description << endl;
    out << "Number of photos: " << size() << endl;
}

void Album::display(ostream& out) const{
    print(out);
    out << "Photos: " << endl;
    for(int i = 0; i < size(); ++i){
        out << "    ";
        photos[i]->display(out);
    }
}

ostream& operator<<(ostream& out, const Album& alb){
    alb.print(out);
    return out;
}