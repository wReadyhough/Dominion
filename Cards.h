#include <iostream>
#include <vector>



const int START_PILE_SIZE = 8;



using namespace std;

//The Parent of all cards.
class Card{
  string m_name;
  int m_cost;

  public:
    Card();
    void setName(string);
    void setCost(int);
    string getName();
    int getCost();
};

class Treasure: public Card{
  int m_value;
  public:
    Treasure();
    void setValue(int);
    int getValue();
};

class Copper: public Treasure{
  public:
    Copper();
};

class Silver: public Treasure{
  public:
    Silver();
};

class Gold: public Treasure{
  public:
    Gold();
};

class Victory_Card: public Card{
  int m_victoryPoints;
  public:
    Victory_Card();
    void setPoints(int);
    int getPoints();
};

class Estate: public Victory_Card{
  public:
    Estate();
};

class Duchy: public Victory_Card{
  public:
    Duchy();
};

class Province: public Victory_Card{
  public:
    Province();
};

class Curse: public Victory_Card{
  public:
    Curse();
};


