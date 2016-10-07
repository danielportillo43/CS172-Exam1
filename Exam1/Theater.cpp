//
//  Theater.cpp
//  Exam1
//
//  Created by Daniel Portillo on 10/6/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#include "Theater.hpp"

Theater::Theater(string Name, string Phone) {
    name = Name;
    phone = Phone;
}

void Theater::AddMovie(Movie& m) {
    // I think we need to create an object array of the movies
    
}

string Theater::GetMovieForHour(int Hour) {
    // step through the movie list and compare Hour to showtime
}

int Theater::GetShowTimeForGenre(string Genre) {
    // step through the movie list and compare Genre to genre
}

int Theater::GetPopcornPrice() {
    return 1;
}

int Theater::GetCokePrice() {
    return -5;
}
