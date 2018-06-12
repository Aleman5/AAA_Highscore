#ifndef ADD_HIGHSCORE_H
#define ADD_HIGHSCORE_H

#include <cstring>
#include<string>

using namespace std;

// Constant size of the Highscore, you can set it to the value you want
const int tam = 10;

enum Arrangement
{
	maxToMin,
	minToMax
};

struct Score
{
	string name;
	int score;
};

class AAA_Highscore 
{
	Arrangement ar;
	Score scores[tam];

public:

	/**
		Initialize Highscore with default arrangement maxToMin
		Possible arrangements:
			- maxToMin
			- minToMax
	*/
	AAA_Highscore();

	/**
		Initialize Highscore
		Possible arrangements:
		- maxToMin
		- minToMax

		@arr arrangement of the scores
	*/
	AAA_Highscore(Arrangement arr);

	/**
		Highscore destructor
	*/
	~AAA_Highscore();

	/**
		If score is bigger than any of the scores then score enters in the Highscore

		@name is the name of the Player. It has to be != ""
		@score is the score of the Player

		@return if the new score could enter or not
	*/
	bool addScore(string name, int score);

	/**
		Set all the Highscore values to default
	*/
	void clearScores();

	/**
		Shows the data of an specific position of the Highscore. Remember that Highscore has the same positions as 'tam'

		@pos is the position of the Highscore to get the data
		@name is the name of the Player
		@score is the score of the Player

		@return if the position of the Highscore exists or if on that position a Player setted his data
	*/
	bool showData(int pos, string& name, int& score);
	
	/**
		@return lenght of the Highscore
	*/
	int getLenght();
};
#endif // !ADD_HIGHSCORE_H