//
//  Ball.h
//  emptyExample
//
//  Created by Jane Friedhoff on 8/7/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#ifndef emptyExample_Ball_h
#define emptyExample_Ball_h
#include "ofMain.h" // we have to include ofMain.h in our new classes

class Ball {
public:
    ofPoint speed; // ofPoint has an x and a y -> speed.x, speed.y
    ofPoint pos; // ofPoint has an x and a y -> pos.x, pos.y
    
    float radius;
    
    void setup(); // where we initialize our ball's variables
    void reset(); // for easy reset of its position
    void update(); // bounce & movement 
    void draw(); // draw
    
};
#endif
