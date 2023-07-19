#ifndef ALBUM_H
#define ALBUM_H

#include "Array.h"
#include "Photo.h"
#include <iostream>
#include <string>

using namespace std;

class Album{
    friend ostream& operator<<(ostream& out, const Album& alb);

    public:
        Album(const string& title, const string& description);

        inline bool equals(const string& t) const{return title == t;}
        void addPhoto(Photo* pt);
        Photo* getPhoto(int index) const;
        inline int size() const{return photos.size();}

        void print(ostream& out) const;
        void display(ostream& out) const;
        
    private:
        string title;
        string description;
        Array<Photo*> photos;
};
#endif