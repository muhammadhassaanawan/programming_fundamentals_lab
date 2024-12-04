#include <iostream>
using namespace std;

int main() {
int totalPlayers=0 , playersPerTeam=0;

while (playersPerTeam<=0)  {
cout<<"How many players do you wish per team ?";
cin>>playersPerTeam;

if(playersPerTeam<=0) {  
cout<<"Error:Please enter a positive number for players per team."<<endl;
 }
}

while (totalPlayers<=0)  {
cout<<"How many players are available?";
cin>>totalPlayers;

if (totalPlayers<=0) {
cout<<"Error:Please enter a positive number for total players."<<endl;
  }
}

int numTeams = totalPlayers / playersPerTeam;
int leftoverPlayers = totalPlayers % playersPerTeam;

  cout << "There will be " << numTeams << " teams with " << leftoverPlayers << " players left over." << endl;

 return 0;
}