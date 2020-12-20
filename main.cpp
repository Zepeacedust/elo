#include "elo.h"
#include <iostream>
#include <string>
#include <map>
int main() 
{
	std::map<std::string, Player> players = std::map<std::string, Player>();
	
	players.insert_or_assign("stubbur",Player(1500l, "stubbur"));
	Player bigboi  = Player(1500l, "bigboi");
	Player flippy = Player(1500l, "flippy");
	Player floppy = Player(1500l, "floppy");
	
	
	std::cout << bigboi.rating << " " << players["stubbur"].rating << " " << flippy.rating <<  " " << floppy.rating << std::endl;
	std::cout << bigboi.rating + players["stubbur"].rating + flippy.rating + floppy.rating<< std::endl;
	return 0;
}