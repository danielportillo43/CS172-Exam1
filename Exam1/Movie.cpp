//
//  Movie.cpp
//  Exam1
//
//  Created by Daniel Portillo on 10/6/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#include "Movie.h"
#include "Theater.cpp"
//default
Movie::Movie() {
    title = "Talladega Nights";
    genre = "Documentary";
    showtime = 7;
}
//constructor
Movie::Movie(string Title, string Genre, int time) {
    title = Title;
        
    string str1 = "Action";
    string str2 = "Comedy";
    string str3 = "Horror";
    string str4 = "Documentary";
    
    if (Genre != "Action" && Genre != "Comedy" && Genre != "Horror" && Genre != "Documentary") {
        Genre = "Comedy";
    }
    genre = Genre;
    
    if (time < 0 || time > 24) {
        time = 7;
    }
    showtime = time;

}

string Movie::GetTitle() {
    return title;
}

string Movie::GetGenre() {
    return genre;
}

int Movie::GetShowtime() {
    return showtime;
}
