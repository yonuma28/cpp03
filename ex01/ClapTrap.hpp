# ifndef	CLAPTRAP_H
# define CLAPTRAP_H

# include <string>
# include <iostream>

class ClapTrap
{
	protected:
		std::string	name_;
		int			hit_points_;
		int			energy_points_;
  		int 		attack_damage_;

	public:
		ClapTrap();
		~ClapTrap();
		
		// prepare
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& claptrap);
		ClapTrap(std::string name,
				unsigned int hit_points,
				unsigned int energy_points,
				unsigned int attack_damage);
		ClapTrap& operator=(const ClapTrap& other);
		
		// basic_movement
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		// get_information
		std::string	getName() const;
		int	getHitPoints() const;
		int getEnergyPoints() const;
		int getAttackDamage() const;
};

# endif //CLAPTRAP_H
