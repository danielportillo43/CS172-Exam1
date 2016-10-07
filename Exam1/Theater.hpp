//
//  Theater.hpp
//  Exam1
//
//  Created by Daniel Portillo on 10/6/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#ifndef Theater_hpp
#define Theater_hpp

#include <iostream>
#include <string>
#include <stdio.h>
#include "Movie.cpp"
using namespace std;

class Theater {
    string phone;
    string name;
    static int n;
   
    
    
    
public:
    Movie movieList[n];
    Theater(string Name, string Phone); //The name and number for this theater
    void AddMovie(Movie& Movie); //Add a movie at a specific time
    string GetMovieForHour(int Hour);  //Return the movie shown at or after the given hour
                                      //   Return "" if none are upcoming
    int GetShowTimeForGenre(string Genre);//When will the movie of the given genre be shown?
                                          //   Return -1 if none exist
    int GetPopcornPrice(); //Make up a cost in dollars for popcorn
    int GetCokePrice(); //Make up a cost on Coke
};

#endif /* Theater_hpp */