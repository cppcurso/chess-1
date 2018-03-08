/*
 * Storage.h
 *
 *  Created on: 08/03/2018
 *      Author: usuario
 */

#ifndef SRC_STORAGE_H_
#define SRC_STORAGE_H_
#include <fstream>
#include <iostream>
#include <Board.h>
using namespace std;

class Storage {
public:
	 void static save();
	//static Board restore(Board& board);


	Storage();
	virtual ~Storage();
};

#endif /* SRC_STORAGE_H_ */
