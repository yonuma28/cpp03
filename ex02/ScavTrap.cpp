# include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default_Scav", 100, 50, 20)
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap name constructor called for " << name_ << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called for " << name_ << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name_ << " has entered Gate keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (energy_points_ && hit_points_) {
		energy_points_--;
		std::cout << "ScavTrap " << name_ << " attacks " << target
				<< ", causing " << attack_damage_ << " points of damage! "
				<< "(energy left: " << energy_points_ << ")" << std::endl;
	} else {
    	std::cout << "ScavTrap " << name_ << " is too weak to attack!" << std::endl;
	}
}
