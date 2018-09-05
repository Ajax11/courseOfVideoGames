#ifndef INCLUDED_GRID_H
#define INCLUDED_GRID_H

#include <utility>      // std::pair, std::make_pair
#include <string>       // std::string
#include <iostream>     // std::cout
#include <vector>
#include "node.h"

using namespace std;


#define sizeNodes 10
#define sizeWindows 400

struct grid{
	grid(){
		windowsSize.first = sizeWindows;
		windowsSize.second = sizeWindows;
		sizeBetweenNode = sizeNodes;
		int nodes;
		nodes = windowsSize.first/sizeBetweenNode;
		beginPoint.first = 0;
		beginPoint.second = 0;
		matrix.resize(nodes);
		for (int i = 0; i < matrix.size(); ++i){
			matrix[i].resize(nodes);
			for (int j = 0; j < matrix[i].size(); ++j){
				matrix[i][j].point.first = j*sizeNodes + beginPoint.first;
				matrix[i][j].point.second = i*sizeNodes + beginPoint.second;
			}
		}
	}

	std::pair <int, int> windowsSize;
	std::vector< std::vector<node> > matrix;
	int sizeBetweenNode;
	std::pair <int, int> beginPoint;

	~grid(){}
};

#endif //INCLUDED_GRID_H