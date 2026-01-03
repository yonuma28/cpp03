# ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		// OCM
		FragTrap();
		~FragTrap();
		FragTrap(const FragTrap& name_);
		FragTrap(const std::string& name_);
		FragTrap& operator=(const FragTrap& name_);

		/*
		 * @brief ハイタッチを要求
		 * コメントを表示して終わり 
		*/
		void highFivesGuys (void);
};

# endif // FRAGTRAP_H
