#include <iostream>
#include <time.h>
#include "string.h"

using namespace std;

#define QUANTITY_IN_THE_ALPHABET 26
#define NAME_LENGTH 10
#define AMOUNT_PLAYERS 1000

struct Player
{
  string name;
  int score;
};

int generateScore(int number);
Player *generatePlayers(Player players[]);
string generateName();
string *getPlayersName(Player players[]);
void showPlayers(string playersName[]);

string *getPlayersName(Player players[])
{
  string *names = new string[AMOUNT_PLAYERS];

  for (int i = 0; i < AMOUNT_PLAYERS; i++)
    names[i] = players[i].name;

  return names;
}

/* Is using a bubble sort algorithm to sort the player names */
void showPlayers(string playersName[])
{
  for (int i = 0; i < AMOUNT_PLAYERS; ++i)
  {
    for (int j = 0; j < (AMOUNT_PLAYERS - 1); ++j)
    {
      if (playersName[j] > playersName[j + 1])
      {
        string const auxiliarName = playersName[j];
        playersName[j] = playersName[j + 1];
        playersName[j + 1] = auxiliarName;
      }
    }
  }

  cout << "Nome dos jogadores por ordem alfabética:" << endl;

  for (int i = 0; i < AMOUNT_PLAYERS; i++)
    cout << (i + 1) << ". " << playersName[i] << endl;

  cout << "----------------------------------------" << endl;

  delete[] playersName;
}

int generateScore(int number)
{
  return rand() % number + 1;
}

string generateName()
{
  string name = "";
  char alphabet[QUANTITY_IN_THE_ALPHABET] = {'a', 'b', 'c', 'd', 'e', 'f', 'g',
                                             'h', 'i', 'j', 'k', 'l', 'm', 'n',
                                             'o', 'p', 'q', 'r', 's', 't', 'u',
                                             'v', 'w', 'x', 'y', 'z'};

  for (int i = 0; i < NAME_LENGTH; i++)
    name = name + alphabet[rand() % QUANTITY_IN_THE_ALPHABET];

  return name;
}

Player *generatePlayers(Player players[])
{
  for (int i = 0; i < AMOUNT_PLAYERS; i++)
  {
    string randomName = generateName();
    int randomScore = generateScore(100);

    players[i].name = randomName;
    players[i].score = randomScore;
  }

  return players;
}

int main()
{
  srand(time(NULL));

  Player *players = new Player[AMOUNT_PLAYERS];
  players = generatePlayers(players);

  string *playersName = getPlayersName(players);
  showPlayers(playersName);

  delete[] players;

  return 0;
}