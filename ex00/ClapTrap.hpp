# ifndef	CLAPTRAP_H
# define	CLAPTRAP_H

# include <string>
# include <iostream>

class ClapTrap
{
	private:
		std::string		name_;           // 名前
		unsigned int	hit_points_;     // 体力
		unsigned int	energy_points_;  // エネルギー
  		unsigned int 	attack_damage_;  // 攻撃力

	public:
		// OCM
		ClapTrap();
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& claptrap);
		ClapTrap& operator=(const ClapTrap& copy);
		~ClapTrap();
		
		// basic_movement
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		// get_information
		std::string		getName() const;
		unsigned int 	getHitPoints() const;
		unsigned int 	getEnergyPoints() const;
		unsigned int 	getAttackDamage() const;
};

# endif //CLAPTRAP_H
