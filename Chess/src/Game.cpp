/*
 * Game.cpp
 *
 *  Created on: 05/03/2018
 *      Author: usuario
 */

#include "Game.h"

using namespace std;

Game::Game(unsigned short players) : players(players) {}

void Game::play(){
	start();
	while (!end()) {
		turn();
	}
	finish();
}
 /* namespace std */
