#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){

	ofSetupOpenGL(1024,768, OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
    
    // main関数の中からofAppクラスを呼び出し、ほとんどの処理はofAppクラスの中で行う。
    // ofAppクラスがmain関数との仲介のような役割をしている。
    // emptyExampleと同じディレクトリ構成でないと動かない。
	ofRunApp( new ofApp());

}
