#ifndef KOALABOT_H_
#define KOALABOT_H_

#include <string>
#include "Parts.h"

class KoalaBot
{
public:
    explicit KoalaBot(std::string const& serial = "Bob-01");
    virtual ~KoalaBot() {}

    void setParts(Arms const& arms);
    void setParts(Legs const& legs);
    void setParts(Head const& head);
    void swapParts(Arms& arms);
    void swapParts(Legs& legs);
    void swapParts(Head& head);

    void informations();
    bool status() const;
private:
    std::string _serial;
    Arms _arms;
    Legs _legs;
    Head _head;
};

#endif
