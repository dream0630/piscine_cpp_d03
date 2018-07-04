#include <iostream>
#include "KoalaBot.h"

KoalaBot::KoalaBot(std::string const& serial) :
    _serial(serial)
{
}

void KoalaBot::setParts(Arms const& arms)
{
    _arms = arms;
}

void KoalaBot::setParts(Legs const& legs)
{
    _legs = legs;
}

void KoalaBot::setParts(Head const& head)
{
    _head = head;
}

void KoalaBot::swapParts(Arms& arms)
{
    Arms temp = arms;
    arms = _arms;
    _arms = temp;
}
void KoalaBot::swapParts(Legs& legs)
{
    Legs temp = legs;
    legs = _legs;
    _legs = temp;
}
void KoalaBot::swapParts(Head& head)
{
    Head temp = head;
    head = _head;
    _head = temp;
}

void KoalaBot::informations() const
{
    std::cout << "[KoalaBot] " << _serial << std::endl;
    _arms.informations();
    _legs.informations();
    _head.informations();
}

bool KoalaBot::status() const
{
    return _arms.isFunctionnal() && _legs.isFunctionnal() && _head.isFunctionnal();
}
