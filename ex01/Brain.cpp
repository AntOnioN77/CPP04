#include "Brain.hpp"

Brain::Brain()
{}

Brain::Brain(const Brain& other)
{
	for(int i= 0; i < 100; i++)
	{
		ideas[i] = other.ideas[i];
	}
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		for(int i= 0; i < 100; i++)
		{
			ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain()
{}

void Brain::setIdea(int n, const std::string& idea)
{
	if (n >= 0 && n < 100)
	{
		ideas[n] = idea;
	}
}
std::string Brain::getIdea(int n) const
{
	if (n >= 0 && n < 100)
	{
		return ideas[n];
	}
	return "";
}