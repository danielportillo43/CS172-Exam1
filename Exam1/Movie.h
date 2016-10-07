//
//  Movie.h
//  Exam1
//
//  Created by Daniel Portillo on 10/6/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#ifndef Movie_h
#define Movie_h

#include <string>
using namespace std;

class Movie {
public:
    
    string title;
    string genre;
    int showtime;
    

    //default movie
    Movie();
    Movie(string, string, int);
    
    string GetTitle(); // returns title
    string GetGenre(); // returns genre
    int GetShowtime(); // returns showtime
    
};

#endif /* Movie_h */
