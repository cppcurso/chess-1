//============================================================================
// Name        : chess.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Board.h"
using namespace std;

class Game {
public:
    int players;
    virtual void start() = 0;
    virtual bool end() = 0;
    virtual void turn() = 0;
    virtual void finish() = 0;

    Game(int players) : players(players) {}
    virtual ~Game(){}
    void play() {
        start();
        while (!end()) {
            turn();
        }
        finish();
    }
};

class Chess : public Game {
public:
	unsigned short piecePosX;
	unsigned short piecePosY;
	unsigned short x;
	unsigned short y;
	bool badPieceSelection;
	bool checkMate;
    int turnNumber;
    Chess() : Game(2) {}
    void start() {
        cout << "Colocando las piezas..." << '\n';
        Board::getInstance();
        Board::getInstance().init();
    	Board::getInstance().print();
        checkMate = false;
        turnNumber = 0;
    }
    bool end() {
        if(Board::getInstance().isCheckMate(Board::getInstance().board[piecePosX][piecePosY],x,y)){
        	checkMate = true;
        }
        return checkMate;
    }
    void turn() {
        if (turnNumber % 2 == 0) {
            badPieceSelection = true;
        	cout << "Mueve jugador 1" << '\n';
        	do {
        		cout << "Pieza a mover: ";
        		cin >> piecePosX;
        		cin >> piecePosY;
        		if(Board::getInstance().board[piecePosX][piecePosY].content()->isWhite()){
        			cout << "Posición a la que mueves: ";
        			cin >> x;
        			cin >> y;
        			Board::getInstance().move(Board::getInstance().board[piecePosX][piecePosY],x,y);
        			badPieceSelection = false;
        			turnNumber++;
        		} else cout << "Esa pieza no es tuya mueve otra \n";
        	} while(badPieceSelection);

        } else {
        	cout << "Mueve jugador 2" << '\n';
        	badPieceSelection = true;
        	do {
        		cout << "Pieza a mover: ";
        		cin >> piecePosX;
        		cin >> piecePosY;
        		if(!Board::getInstance().board[piecePosX][piecePosY].content()->isWhite()){
        			cout << "Posición a la que mueves: ";
        			cin >> x;
        			cin >> y;
        			Board::getInstance().move(Board::getInstance().board[piecePosX][piecePosY],x,y);
        			badPieceSelection = false;
        			turnNumber++;
        		} else cout << "Esa pieza no es tuya mueve otra \n";
        	} while(badPieceSelection);
        }
    }
    void finish(){
    	 if (turnNumber % 2 == 0)
    		 cout << "Gana Jugador 2 \n";
    	 else cout << "Gana Jugador 1 \n";
    }
};

int main() {
	Chess chessGame;
	cout << "Partida 1" << '\n';
	chessGame.play();
//	Board::getInstance();
//	Board::getInstance().init();
//	Board::getInstance().print();
//	Board::getInstance().move(Board::getInstance().board[3][1],3,2);
//	Board::getInstance().print();
//	Board::getInstance().move(Board::getInstance().board[0][0],0,4);
//	Board::getInstance().print();
//	Board::getInstance().move(Board::getInstance().board[1][0],2,2);
//	Board::getInstance().print();
//	Board::getInstance().move(Board::getInstance().board[3][0],3,1);
//	Board::getInstance().print();
//	Board::getInstance().move(Board::getInstance().board[4][0],3,0);
//	Board::getInstance().print();
//	Board::getInstance().move(Board::getInstance().board[0][6],1,5);
//	Board::getInstance().print();
//	Board::getInstance().move(Board::getInstance().board[2][2],3,4);
//	Board::getInstance().print();
//	Board::getInstance().move(Board::getInstance().board[3][4],4,6);
//	Board::getInstance().print();
//	Board::getInstance().move(Board::getInstance().board[4][6],6,7);
//	Board::getInstance().print();
//	Board::getInstance().move(Board::getInstance().board[6][7],7,5);
//	Board::getInstance().print();
//	Board::getInstance().move(Board::getInstance().board[7][5],5,6);
//	Board::getInstance().print();
//	Board::getInstance().move(Board::getInstance().board[5][6],3,7);
//	Board::getInstance().print();

}
