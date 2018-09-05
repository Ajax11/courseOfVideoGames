#ifndef INCLUDED_NODE_H
#define INCLUDED_NODE_H

#include <utility>      // std::pair, std::make_pair
#include <string>       // std::string
#include <iostream>     // std::cout
#include <vector>

using namespace std;

struct node{
	node(){
		point.first = 0;
		point.second = 0;
	}

	node(int x, int y){
		point.first = x;
		point.second = y;
	}

	node(const node & p){
		this->point.first = p.point.first;
		this->point.second = p.point.second;
	}

	std::pair <int, int> point;
	/*
		first - X
		second - Y
	*/

	~node(){}
};

#endif //INCLUDED_NODE_H