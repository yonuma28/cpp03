# include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : name_(""),
      hit_points_(default_hit_points),
      energy_points_(default_energy_points),
      attack_damage_(default_attack_damage) {
  std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called for " << name_ << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
    : name_(name),
		hit_points_(default_hit_points),
		energy_points_(default_energy_points),
		attack_damage_(default_attack_damage) {
    std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& claptrap)
    : name_(claptrap.getName()),
      hit_points_(claptrap.getHitPoints()),
      energy_points_(claptrap.getEnergyPoints()),
      attack_damage_(claptrap.getAttackDamage()) {
  std::cout << "ClapTrap Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other) {
		name_ = other.name_;
		hit_points_ = other.hit_points_;
		energy_points_ = other.energy_points_;
		attack_damage_ = other.attack_damage_;
	}
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	return *this;
}

std::string	ClapTrap::getName() const { return name_; }
int	ClapTrap::getHitPoints() const { return hit_points_; }
int ClapTrap::getEnergyPoints() const { return energy_points_; }
int ClapTrap::getAttackDamage() const { return attack_damage_; }

void ClapTrap::attack(const std::string& target)
{
	if (energy_points_ && hit_points_) {
		energy_points_--;
		std::cout << "ClapTrap " << name_ << " attacks " << target
				<< ", causing " << attack_damage_ << " points of damage! "
				<< "(energy left: " << energy_points_ << ")" << std::endl;
	} else {
    	std::cout << "ClapTrap " << name_ << " is too weak to attack!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points_ <= 0) {
		std::cout << "ClapTrap " << name_ << " is already destroyed and cannot take " 
            << amount << " points of additional damage!" << std::endl;
		return;
	}
	if (amount >= static_cast<unsigned int>(hit_points_))
		hit_points_ = 0;
	else
		hit_points_ -= static_cast<int>(amount);
	std::cout << "ClapTrap " << name_ << " takes " << amount << " points of damage! " 
          << "(hit_points: " << hit_points_ << ")" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energy_points_ && hit_points_)
	{
		energy_points_--;
		hit_points_ += amount;
		std::cout << "ClapTrap " << name_ << " is repaired for " << amount
					<< " points! (energy left: " << energy_points_
					<< ", hit points left: " << hit_points_ << ")" << std::endl;
	}
	else
		std::cout << "ClapTrap " << name_ << " is too weak to repair itself!" << std::endl;
}
