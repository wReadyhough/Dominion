#include "Cards.h"
#include "KingdomCards"

class Player: public Card
{
  string m_myName;
  int currCoins;
  int currActions;
  int victoryPoints;
  vector<Card> m_hand;
  vector<Card> m_drawPile;
  vector<Card> m_discardPile;

  public:
    Player();
    void shuffle();

}