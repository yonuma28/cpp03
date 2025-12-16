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

		static const int default_hit_points = 10;
		static const int default_energy_points = 10;
		static const int default_attack_damage = 0;
};

# endif //CLAPTRAP_H
