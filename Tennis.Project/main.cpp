#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <string.h>
#include <string>
#include "Player.h"
using namespace std;

int main(){
  
  fstream inFile;
  inFile.open("womens.txt");
  if(!inFile.is_open()){
    cout<< "The File didn't open"<< endl;
    return 1;
  }

  string Fname, Lname, country;
  int rank, points;
  vector <Player> players;

  Player aPlayer;

  while(!inFile.eof()){
      inFile >> rank >> Lname >> Fname >> country >> points; 
      Player aPlayer(rank, Lname, Fname, country, points);
      players.push_back(aPlayer);
  }
    char cont;
    cout<< "Do you want to start? (y or n)"<< endl;
    cin>> cont;
    cout << "Search for a player by last name: " << endl;
    cin >> Lname;
    while(cont == 'y'){
      for (int i = 0; i < players.size(); i++) {
         aPlayer = players.at(i);
        if(players.at(i).getLastName() == Lname){
          aPlayer = players.at(i);
         aPlayer.display();
        }
      }
      cout<< "Do you want to continue?"<< endl;
      cin>> cont;
      if(cont== 'n'){
        cout<< "Done"<< endl;
        break;
      }
      cout << "Search for a new player: " << endl;
      cin >> Lname;
    }  
return 0;
}