#include "Player.h"
#include <string> 
#include <iostream>

using namespace std;

//default constructor
Player::Player(){
    mRank = -1;
    mlastName = "NoName";
    mfirstName = "NoName";
    mCountry = "???";
    mPoints = -1;
}
//second constructor
Player::Player(int rank, string Lname, string Fname, string country, int points){
    mRank = rank; 
    mlastName = Lname;
    mfirstName = Fname; 
    mCountry = country; 
    mPoints = points;
}

//getters
int Player::getRank() const{
    return mRank;
}
string Player::getLastName() const{
    return mlastName;
}
string Player::getFirstName() const{
    return mfirstName;
}
string Player::getCountry() const {
    return mCountry; 
}
int Player::getPoints() const{
    return mPoints; 
}

//setters
void Player::setRank(int rank){
    mRank = rank;
}
void Player::setLastName(string Lname){
    mlastName = Lname;
}
void Player::setFirstName(string Fname){
    mfirstName = Fname;
}
void Player::setCountry(string country){
    mCountry = country;
}
void Player::setPoints(int points){
    mPoints = points;
}

//display
void Player::display() const{
    cout << "Player Name: " << mlastName << " " << mfirstName <<endl; 
    cout << "Rank: " << mRank << endl; 
    cout << "Country Code: " << mCountry << endl ; 
    cout << "Points: " << mPoints << endl;
}

