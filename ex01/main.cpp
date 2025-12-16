/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonuma <yonuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:32:21 by yonuma            #+#    #+#             */
/*   Updated: 2025/12/10 18:32:21 by yonuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp" 

int main() {
	std::cout << "========== ClapTrap Tests ==========" << std::endl;
	ClapTrap clap1("CT-01");
	clap1.attack("target1");
	clap1.takeDamage(3);
	clap1.beRepaired(2);
	std::cout << std::endl;

	std::cout << "========== ScavTrap Tests ==========" << std::endl;
	ScavTrap scav1("ST-01");
	scav1.attack("enemy1");
	scav1.takeDamage(20);
	scav1.beRepaired(10);
	scav1.guardGate();
	std::cout << std::endl;

	std::cout << "========== Copy Constructor Test ==========" << std::endl;
	ScavTrap scav2(scav1);
	scav2.attack("enemy2");
	std::cout << std::endl;

	std::cout << "========== Assignment Operator Test ==========" << std::endl;
	ScavTrap scav3("ST-03");
	scav3 = scav1;
	scav3.attack("enemy3");
	std::cout << std::endl;

	std::cout << "========== Energy Depletion Test ==========" << std::endl;
	ScavTrap scav4("ST-04");
	for (int i = 0; i < 52; i++) {
		scav4.attack("dummy");
	}
	std::cout << std::endl;

	std::cout << "========== Destruction Test ==========" << std::endl;
	return 0;
}
