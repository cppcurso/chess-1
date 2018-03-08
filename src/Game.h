/*
 * Game.h
 *
 *  Created on: 05/03/2018
 *      Author: usuario
 */

#ifndef GAME_H_
#define GAME_H_

namespace std {

class Game {
public:
	int players;
		virtual void start() = 0;
		virtual bool end() = 0;
		virtual void turn() = 0;
		virtual void finish() = 0;
		void play();
		Game(unsigned short players);
		virtual ~Game(){}



};

} /* namespace std */

#endif /* GAME_H_ */
