#include <iostream>
#include <string>
#include "Skat.h"

Skat::Skat(std::string const &name, int stimpaks)
{
  this->_name = name;
  this->stimpaks = stimpaks;
}

Skat::~Skat()
{
}

int	&Skat::stimPaks()
{
  return this->stimpaks;
}

const std::string &Skat::name()
{
  return this->_name;
}

void	Skat::shareStimPaks(int number, int &stock)
{
  if (this->stimpaks < number)
    std::cout << "Don't be greedy" << std::endl;
  else
    {
      this->stimpaks -= number;
      stock = stock + number;
      std::cout << "Keep the change." << std::endl;
    }
}

void	Skat::addStimPaks(unsigned int number)
{
  if (number == 0)
    std::cout << "Hey boya, did you forget something ?" << std::endl;
  this->stimpaks += number;
}

void	Skat::useStimPaks()
{
  if (this->stimpaks > 0)
    {
      this->stimpaks -= 1;
      std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
    }
  else
    std::cout << "Mediiiiiic" << std::endl;
}

void	Skat::status()
{
  std::cout << "Soldier " << this->_name << " reporting " << this->stimpaks << " stimpaks remaining sir !" << std::endl;
}
