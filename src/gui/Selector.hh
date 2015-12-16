#ifndef SELECTOR_H
#define SELECTOR_H


#include "Node.hh"

#include <SDL.h>

#include <vector>


/**
 * lets you select a Node from a selection of nodes
 */
class Selector:public Node
{
public:
	/**
	 * constructs a selector with the basic node stuff and also it's options
	 */
	Selector(int offsetX,int offsetY,int width,int height,vector<Node *> options);
	
	/**
	 * deletes it's options
	 */
	~Selector();
	
	int onEvent(SDL_Event * e);
	
	void render(SDL_Renderer * renderer,int x = 0,int y = 0);

private:
	/**
	 * all of the options for selection which are all nodes
	 */
	vector<Node *> options;

};


#endif
