#include "PhotoGram.h"

PhotoGram::PhotoGram(){}

PhotoGram::~PhotoGram(){
    for (int i = 0; i < masterList.size(); ++i) {
        delete masterList[i];
    }
    for (int i = 0; i < albums.size(); ++i) {
        delete albums[i];
    }
    masterList.clear();
    albums.clear();
}

void PhotoGram::addAlbum(const string& title, const string& description){
    albums.add(factory.createAlbum(title, description));
}

void PhotoGram::addToAlbum(int index, Array<Photo*>& photos){
    if (index < 0 || index >= albums.size()) {
        cerr << "Album not found" << endl;
        return;
    }
    Album* alb = albums[index];
    for (int i = 0; i < photos.size(); ++i) {
        alb->addPhoto(photos[i]);
    }
}

void PhotoGram::uploadPhoto(const string& title){
    masterList.add(factory.uploadPhoto(title));
}

void PhotoGram::deleteAlbum(int index){
    if (index < 0 || index >= albums.size()) {
        cerr << "Album not found" << endl;
        return;
    }
    delete albums[index];
    albums -= albums[index];
}

void PhotoGram::getPhotos(const Criteria& crit, Array<Photo*>& photos) const{
    for (int i = 0; i < masterList.size(); ++i) {
        if (crit.matches(*masterList[i])) {
            photos.add(masterList[i]);
        }
    }
    // free the criteria ????
    // delete &crit;
}

void PhotoGram::displayAlbum(int index, View& view) const{
    if (index < 0 || index >= albums.size()) {
        cerr << "Album not found" << endl;
        return;
    }
    view.displayAlbum(*albums[index]);
}

int PhotoGram::printAlbums(View& view) const{
    view.printAlbums(albums);
    return albums.size();
}

void PhotoGram::displayPhoto(int index, View& view) const{
    if (index < 0 || index >= masterList.size()) {
        cerr << "Photo not found" << endl;
        return;
    }
    view.displayPhoto(*masterList[index]);
}

int PhotoGram::printPhotos(View& view) const{
    view.printPhotos(masterList);
    return masterList.size();
}