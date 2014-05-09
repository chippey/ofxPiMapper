#include "ofApp.h"

void ofApp::setup()
{
    //ofGetCurrentRenderer()->setLineSmoothing(true);
    // Load test pattern image
    image.loadImage("TestPatternInvert.jpg");
    
    // Create a triangle surface
    //triangleSurface.setup( ofVec2f(30,40), ofVec2f(500,500), ofVec2f(0,600), ofVec2f(0,0), ofVec2f(1,1), ofVec2f(0,1), &image.getTextureReference() );
    
    gui.setup(triangleSurface);
}

void ofApp::update()
{
	ofBackground(0);
    
    ofVec2f p;
    p.x = ofRandomWidth();
    p.y = ofRandomHeight();
    //triangleSurface.setVertex(0, p);
    
    ofVec2f t;
    t.x = ofRandomuf();
    t.y = ofRandomuf();
    //triangleSurface.setTexCoord(0, t);
    
    gui.update();
}

void ofApp::draw()
{
    triangleSurface.draw();
    gui.draw();
}

void ofApp::keyPressed(int key)
{
	cout << "Key pressed: " << static_cast<char>(key) << endl;
}

void ofApp::mousePressed(int x, int y, int button)
{
    //cout << "Mouse pressed." << endl;
    gui.mousePressed(x, y, button);
}

void ofApp::mouseReleased(int x, int y, int button)
{
    //cout << "Mouse released." << endl;
    gui.mouseReleased(x, y, button);
}

void ofApp::mouseDragged(int x, int y, int button)
{
    //
    gui.mouseDragged(x, y, button);
}