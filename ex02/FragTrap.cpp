# include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("default_flag", 100, 100, 30)
{
	std::cout << "FragTrap " << this->name_ << " constructed! Ready to party." 
              << " (HP:" << this->hit_points_ << ")" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name, 100, 100, 30)
{
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

void FragTrap::attack(const std::string& target)
{
	if (energy_points_ && hit_points_) {
		energy_points_--;
		std::cout << "FragTrap " << name_ << " attacks " << target
				<< ", causing " << attack_damage_ << " points of damage! "
				<< "(energy left: " << energy_points_ << ")" << std::endl;
	} else {
    	std::cout << "FragTrap " << name_ << " is too weak to attack!" << std::endl;
	}
}
