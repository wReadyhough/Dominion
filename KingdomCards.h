#include "Cards.h"

using namespace std;

class Kingdom_Card: public Card{
  string m_type;
  public:
    Kingdom_Card();
    Kingdom_Card( Kingdom_Card&);
    void setType(string);
    string getType();
};

class Cellar: public Kingdom_Card{
  public:
    Cellar();
};

class Chapel: public Kingdom_Card{
  public:
    Chapel();
};

class Moat: public Kingdom_Card{
  public:
    Moat();
};

class Harbinger: public Kingdom_Card{
  public:
    Harbinger();
};

class Merchant: public Kingdom_Card{
  public:
    Merchant();
};

class Vassal: public Kingdom_Card{
  public:
    Vassal();
};

class Village: public Kingdom_Card{
  public:
    Village();
};

class Workshop: public Kingdom_Card{
  public:
    Workshop();
};

class Bureaucrat: public Kingdom_Card{
  public:
    Bureaucrat();
};

class Gardens: public Kingdom_Card{
  public:
    Gardens();
};

class Militia: public Kingdom_Card{
  public:
    Militia();
};

class Moneylender: public Kingdom_Card{
  public:
    Moneylender();
};

class Poacher: public Kingdom_Card{
  public:
    Poacher();
};

class Remodel: public Kingdom_Card{
  public:
    Remodel();
};

class Smithy: public Kingdom_Card{
  public:
    Smithy();
};

class Throne_Room: public Kingdom_Card{
  public:
    Throne_Room();
};

class Bandit: public Kingdom_Card{
  public:
    Bandit();
};

class Council_Room: public Kingdom_Card{
  public:
    Council_Room();
};

class Festival: public Kingdom_Card{
  public:
    Festival();
};

class Laboratory: public Kingdom_Card{
  public:
    Laboratory();
};

class Library: public Kingdom_Card{
  public:
    Library();
};

class Market: public Kingdom_Card{
  public:
    Market();
};

class Mine: public Kingdom_Card{
  public:
    Mine();
};

class Sentry: public Kingdom_Card{
  public:
    Sentry();
};

class Witch: public Kingdom_Card{
  public:
    Witch();
};

class Artisan: public Kingdom_Card{
  public:
    Artisan();
};
