#include "KingdomCards.h"

Kingdom_Card::Kingdom_Card(){}

void Kingdom_Card::setType(string type){
  m_type = type;
}

string Kingdom_Card::getType()
{
  return m_type;
}

Kingdom_Card::Kingdom_Card(Kingdom_Card& oldClass){
  m_type = oldClass.m_type;
  setCost(oldClass.getCost());
  setName(oldClass.getName());
}

Cellar::Cellar(){
  setName("Cellar");
  setCost(2);
  setType("Action");
}

Chapel::Chapel(){
  setName("Chapel");
  setCost(2);
  setType("Action");
}

Moat::Moat(){
  setName("Moat");
  setCost(2);
  setType("Action - Reaction");
}

Harbinger::Harbinger(){
  setName("Harbinger");
  setCost(3);
  setType("Action");
}

Merchant::Merchant(){
  setName("Merchant");
  setCost(3);
  setType("Action");
}

Vassal::Vassal(){
  setName("Vassal");
  setCost(3);
  setType("Action");
}

Village::Village(){
  setName("Village");
  setCost(3);
  setType("Action");
}

Workshop::Workshop(){
  setName("Workshop");
  setCost(3);
  setType("Action");
}

Bureaucrat::Bureaucrat(){
  setName("Bureaucrat");
  setCost(4);
  setType("Action - Attack");
}

Gardens::Gardens(){
  setName("Gardens");
  setCost(4);
  setType("Victory");
}

Militia::Militia(){
  setName("Militia");
  setCost(4);
  setType("Action - Attack");
}

Moneylender::Moneylender(){
  setName("Moneylender");
  setCost(4);
  setType("Action");
}

Poacher::Poacher(){
  setName("Poacher");
  setCost(4);
  setType("Action");
}

Remodel::Remodel(){
  setName("Remodel");
  setCost(4);
  setType("Action");
}

Smithy::Smithy(){
  setName("Smithy");
  setCost(4);
  setType("Action");
}

Throne_Room::Throne_Room(){
  setName("Throne_Room");
  setCost(4);
  setType("Action");
}

Bandit::Bandit(){
  setName("Bandit");
  setCost(5);
  setType("Action - Attack");
}

Council_Room::Council_Room(){
  setName("Council_Room");
  setCost(5);
  setType("Action");
}

Festival::Festival(){
  setName("Festival");
  setCost(5);
  setType("Action");
}

Laboratory::Laboratory(){
  setName("Laboratory");
  setCost(5);
  setType("Action");
}

Library::Library(){
  setName("Library");
  setCost(5);
  setType("Action");
}

Market::Market(){
  setName("Market");
  setCost(5);
  setType("Action");
}

Mine::Mine(){
  setName("Mine");
  setCost(5);
  setType("Action");
}

Sentry::Sentry(){
  setName("Sentry");
  setCost(5);
  setType("Action");
}

Witch::Witch(){
  setName("Witch");
  setCost(5);
  setType("Action - Attack");
}

Artisan::Artisan(){
  setName("Artisan");
  setCost(6);
  setType("Action");
}

