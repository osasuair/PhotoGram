#ifndef PHOTOGRAM_H
#define PHOTOGRAM_H

#include <iostream>

#include "Photo.h"
#include "Album.h"
#include "Array.h"
#include "MediaFactory.h"
#include "View.h"

using namespace std;

class PhotoGram {

    public:
        PhotoGram();
        ~PhotoGram();

        void addAlbum(const string& title, const string& description);
        void addToAlbum(int index, Array<Photo*>& photos);
        void uploadPhoto(const string& title);
        void deleteAlbum(int index);
        void getPhotos(const Criteria& crit, Array<Photo*>& photos) const;

        void displayAlbum(int index, View& view) const;
        int printAlbums(View& view) const;
        void displayPhoto(int index, View& view) const;
        int printPhotos(View& view) const;

    private:
        Array<Album*> albums;
        Array<Photo*> masterList;
        MediaFactory factory;

};
#endif