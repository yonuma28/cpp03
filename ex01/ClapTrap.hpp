# ifndef	CLAPTRAP_H
# define CLAPTRAP_H

# include <string>
# include <iostream>

class ClapTrap
{
	protected:
		std::string		name_;
		unsigned int	hit_points_;
		unsigned int	energy_points_;
  		unsigned int 	attack_damage_;

	public:
		ClapTrap();
		virtual ~ClapTrap();
		
		// prepare
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& claptrap);
		ClapTrap(std::string name,
				unsigned int hit_points,
				unsigned int energy_points,
				unsigned int attack_damage);
		ClapTrap& operator=(const ClapTrap& other);
		
		// basic_movement
		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		// get_information
		std::string	 getName() const;
		unsigned int getHitPoints() const;
		unsigned int getEnergyPoints() const;
		unsigned int getAttackDamage() const;
};

# endif //CLAPTRAP_H
