# include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : name_(""),
      hit_points_(10),
      energy_points_(10),
      attack_damage_(0)
{
  std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "!!DESTROYED!!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
    : name_(name),
		hit_points_(10),
		energy_points_(10),
		attack_damage_(0)
{
    std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& claptrap)
    : name_(claptrap.name_),
      hit_points_(claptrap.hit_points_),
      energy_points_(claptrap.energy_points_),
      attack_damage_(claptrap.attack_damage_)
{
  std::cout << "ClapTrap Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	if (this != &copy)
	{
		this->name_ = copy.name_;
        this->hit_points_ = copy.hit_points_;
        this->energy_points_ = copy.energy_points_;
        this->attack_damage_ = copy.attack_damage_;
	}
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
    return *this;
}

std::string		ClapTrap::getName() const { return name_; }
unsigned int 	ClapTrap::getHitPoints() const { return hit_points_; }
unsigned int 	ClapTrap::getEnergyPoints() const { return energy_points_; }
unsigned int 	ClapTrap::getAttackDamage() const { return attack_damage_; }

void ClapTrap::attack(const std::string& target)
{
	if (energy_points_ && hit_points_)
	{
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
	if (hit_points_ <= 0)
	{
		std::cout << "ClapTrap " << name_ << " is already destroyed and cannot take " 
            << amount << " points of additional damage!" << std::endl;
		return;
	}
	if (amount >= static_cast<unsigned int>(hit_points_))
		hit_points_ = 0;
	else
		hit_points_ -= amount;
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
