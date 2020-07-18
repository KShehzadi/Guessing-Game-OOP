#include "player.h"
class GuessingGame
{
private:
  Player player1;
  Player player2;
  Player player3;
public:
  GuessingGame();
  GuessingGame(Player p1,Player p2,Player p3);
  ~GuessingGame();
};
