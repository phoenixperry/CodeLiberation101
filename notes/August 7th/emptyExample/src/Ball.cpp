//
//  Ball.cpp
//  emptyExample
//
//  Created by Jane Friedhoff on 8/7/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "Ball.h"

void Ball::setup() {
    reset(); // we could use the same code as is in reset, but that's redundant, and redundant code is not great
    radius = 30; // initialize your variables!
}

void Ball::reset() {
    speed.x = ofRandom(-2, 2); // choose a random x speed between -2 (left) and +2 (right)
    speed.y = ofRandom(-2, 2); // same for y
    
    pos.x = ofRandom(ofGetWidth()); // choose a random position between 0 and width of the app window
    pos.y = ofRandom(ofGetHeight()); // same for y
}

void Ball::update() {
    pos = pos + speed; // every update, set the position equal to the old position plus the speed; this moves us over to where we need to be
    
    // getting the ball to bounce off the sides of the app window. if you're confused, try getting some graph paper and drawing this out
    if (pos.x < radius) {
        pos.x = radius; // this protects us from having a fast ball that accidentally goes off screen--if the ball goes off screen, it will reverse its speed over and over forever
        speed.x *= -1; // reverse its speed
    }
    
    if (pos.x > ofGetWidth() - radius) {
        pos.x = ofGetWidth() - radius;
        speed.x *= -1;
    }
    
    if (pos.y < radius) {
        pos.y = radius;
        speed.y *= -1;
    }
    
    if (pos.y > ofGetHeight() - radius) {
        pos.y = ofGetHeight() - radius;
        speed.y *= -1;
    }
    
}

void Ball::draw() {
    ofCircle(pos.x, pos.y, radius); // actually draw the darn thing
}
