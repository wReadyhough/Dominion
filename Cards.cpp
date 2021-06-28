#include "Cards.h"

Card::Card(){}

void Card::setName(string name ){
  m_name = name;
}

void Card::setCost(int cost){
  m_cost = cost;
}

string Card::getName(){
  return m_name;
}

int Card::getCost(){
  return m_cost;
}

Treasure::Treasure(){}
void Treasure::setValue(int value){
  m_value = value;
}
int Treasure::getValue(){
  return m_value;
}

Copper::Copper(){
  setName("Copper");
  setCost(0);
  setValue(1);
}

Silver::Silver(){
  setName("Silver");
  setCost(3);
  setValue(2);
}

Gold::Gold(){
  setName("Gold");
  setCost(6);
  setValue(3);
}

Victory_Card::Victory_Card(){}

void Victory_Card::setPoints(int points){
  m_victoryPoints = points;
}

int Victory_Card::getPoints(){
  return m_victoryPoints;
}

Estate::Estate(){
  setName("Estate");
  setCost(2);
  setPoints(1);
}

Duchy::Duchy(){
  setName("Duchy");
  setCost(5);
  setPoints(3);

}

Province::Province(){
  setName("Province");
  setCost(8);
  setPoints(6);
}

Curse::Curse(){
  setName("Curse");
  setCost(0);
  setPoints(-1);
}

