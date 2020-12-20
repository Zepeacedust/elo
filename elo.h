#pragma once
#include <string>
class Player 
{
public:
	std::string name;
	long double rating;
	long double expectedValue(Player* other);
	Player(long _rating, std::string _name);
	void display();
	void match(Player* other, long result);
};