# include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	hit_points_ = 100;
	energy_points_ = 100;
	attack_damage_ = 30;
	std::cout << "FragTrap " << this->name_ << " constructed! Ready to party." 
              << " (HP:" << this->hit_points_ << ")" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	hit_points_ = 100;
	energy_points_ = 100;
	attack_damage_ = 30;
	std::cout << "FragTrap " << this->name_ << " constructed! Ready to party." 
              << " (HP:" << this->hit_points_ << ")" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called for " << name_ << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	std::cout << "FragTrap Assignment operator called." << std::endl;
	return *this;
}

void FragTrap::highFivesGuys (void)
{
	std::cout << "Hi! Im FragTrap! lets play high five!" << std::endl;
}