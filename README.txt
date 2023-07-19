Name:           Paul Airuehia
Date:           March 26, 2023
Description:    This C++ program mimics a photo viewing application (called PhotoGram).
                
File Structure: main.cc
                defs.h
                Date.cc/Date.h - Entity Object - contains Date information
                Array.h - Collection Object - abstract container for a collection of objects with overloaded operators
                Photo.cc/Photo.h - Entity Object - contains Photo information
                Album.cc/Album.h - Entity Object - contains Album information/ manages a collection of Photos
                Criteria.cc/Criteria.h - Entity Object - class handles photo searches by matching criteria/ three derived types of Criteria based on Date, Category, and Date and Category
                MediaFactory.cc/MediaFactory.h - Boundary Object - creates new Photos/Albums/Criteria
                PhotoGram.cc/PhotoGram.h - Control Object - manages a collection of Albums and master list of Photos/ provides services to users/ prints err messages to std:cout
                AlbumCreator.cc/AlbumCreator.h - Control Object - controls interaction between PhotoGram and View/ maintains list of Photos found in search
                View.cc/View.h - Boundary Object - prints out information to std:cout/ takes input from user
                Makefile - compiles the program

Compilation:    run Makefile using command "make", "make all", or "make a4"
                to compile the program

Execution:      run the program using command "./a4"

Cleanup:        run Makefile target using command "make clean" to remove all
                object files and the executable
