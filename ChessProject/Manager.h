#pragma once
#include <vector>
#include <string>
#include "Piece.h"
#include "../Frontend/Pipe.h"

class Piece;

class Manager
{
private:
	std::vector<std::vector<Piece*>> _board;
	std::string _boardStr;
	int _turn;
	Piece* createPiece(const char piece, const int color);

public:
	Manager(const std::string& board);
	~Manager();
	std::string GetBoard() const;
	std::vector<std::vector<Piece*>> GetBoardVector();
	std::string GetStartingBoardStr()const;
	void drawBoard(Pipe& p, std::string& board);
	int GetTurn() const;
	
	void SetBoard(const std::string& board);

	void SetTurnWhite();
	void SetTurnBlack();
};

