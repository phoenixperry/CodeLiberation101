#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ball.setup(); // we use the setup function we defined for our ball
    score = 0; // always initiate your variables, otherwise you get junk data
    ofSetVerticalSync(true); // prevents screen tearing
    
    font.loadFont("ARCADE_R.TTF", 36); // my font object has a built-in method that takes some font parameters and loads that font in
}

//--------------------------------------------------------------
void testApp::update(){
    ball.update(); // testApp::update() runs every frame, so ball.update() will also run (and check whether it should bounce, etc.) every frame
}

//--------------------------------------------------------------
void testApp::draw(){
    ball.draw(); // testApp::draw() runs every frame, so our ball will get redrawn every frame (which we need to happen, since we need it to draw at its new position)
    font.drawString(ofToString(score), 40, 50); // drawString can draw any string. We need to turn score from an int to a string in order to draw it. Then we draw it at x=40, y=50
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){ // fires whenever the mouse is pressed (and for that frame only)
    // if the distance between our mouse click and the center of our ball is less than the ball's radius
    if (ofDist(x, y, ball.pos.x, ball.pos.y) < ball.radius) {
        score++; // add one to the score
        ball.reset(); // reset the ball's position
    } else { // otherwise
        score-=2; // punish the player for a bad click
    }
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}