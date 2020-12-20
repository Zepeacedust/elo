#include "elo.h"
#include <iostream>
#include <cmath>
long double Player::expectedValue(Player* other) 
{
    return 1l / (1l  + powl(10l, (other->rating - this->rating) / 400l));
}

Player::Player(long _rating, std::string _name) 
{
    this->rating = _rating;
    this->name = _name;
}

void Player::match(Player* other, long result)
{
    double ratingDelta = 16l * (result - this->expectedValue(other));
    other->rating -= ratingDelta;
    this ->rating += ratingDelta;
}