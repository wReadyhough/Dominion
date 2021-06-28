My Dominion Design
-
- Not Doing Any of The Expansion Stuff Yet.
- Also. Only doing it for 2 players atm.

-Parent class for all cards

-Then a parent class for each type of cards

-Then, all the cards will be classes as well

-"Board" class will hold the amount of each card that is left

Anatomy of a card
-
  - Name

  - Type(we'll make this our different classes)

  - Cost

  - Abilities

  - Value(for treasure cards. The bit in the top corners)

Kingdom Card Possible Abilities
-
  - +1 Card - Must draw that many cards from your draw pile
  - +2 Actions - Can play that many more aciton cards
  - +1$ (supposed to be coin image but, I can't do that.) - have that many more coins to use in the buy phase
  - Gain - lets you take a card from the supply and put it in your discard pile
  - Gain into Hand - lets you take a card from the supply and put it into your hand so you can use it this turn
  - Reveal - show the card then put it back to where it came from
  - Set Aside - put card into special holding area until told what to do with it
  - Discard - put card into your discard pile
  - Trash - put card into trash pile(removes it from the game)

Setting Up
-

  - Initial Draw pile (each player has)
    - 3 Estates
    - 7 Copper Treasure cards
    - Player shuffles his deck and takes out a hand of 5 cards
      - I think this "Deck" is made of the 3E + 7CT
  - Supply Piles
    - Treasure cards - pile of copper, silver, and gold
      - 8 of each
    - Victory cards - Estates, Duchies, Provinces
      - 8 of each
    - 10 Sets of Kingdom cards
      - 8 of each
    - Curse cards - a pile of 10
  - Picking the Kingdom cards
    - Each Sets is of the same card ex. one set of Ace of Spades, another of Jack of clubs, etc.
    - Treausure cards - 1 box
    - Estates & Duchies - 8 cards
    - Provinces - 8 cards
    - Curses - 10 cards


Playing
-

  - Turn Order
    - Action - Player can play 1 action, if it has +action ability, then more actions can be played
    - Buy Phase - Can buy 1 card, kingdom, treasure, victory, or curse. Using treasure cards in hand and the +$ that were played during the action phase. Can buy more cards based on if any action cards had the +Buy ability
    - Clean Up - Discard played cards and any leftover in your hand. 

  - Game Ending Conditions
    - All Province cards are taken
    - Any 3 piles are empty

  - Winning
    - Add up all Victory Points from your cards, not the ones in trash though. 
    - Highest Points wins.
    - If tie, add treasure cards too
    - If still tie, it's a tie.

  - Cards
    - If you need to draw a card but have none left in your draw pile, shuffle your discard pile. And that becomes the new draw pile.
    - Action Cards - executes it's ability when it's played
    - Action-Victory Cards - treated like action cards until the end of the game. Then, they're victory values are counted
    - Action-Attack Cards - Harms other players while user gets benefit of the action.
    - Action-Reaction Cards - Can be revealed when another player uses an attack. Then put card back in your hand. Can be used for every attack until your next turn.
      - What it does is said on the card.
      - Can use multiple reaction cards at the same time.
    - 

Notes
-
  - Kingdom Cards = Action Cards

Coding Notes
-
  - Make a function for each action. ex. one for having to discard cards etc.
  - For trashed cards, just delete them as they are no longer needed.
