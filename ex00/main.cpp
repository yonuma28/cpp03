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

#include "ClapTrap.hpp"

int main() {
	ClapTrap player("player");

	std::cout << "[Test 1: Basic attack with energy and HP]" << std::endl;
	player.attack("enemy");

	std::cout << std::endl;

	std::cout << "[Test 2: Taking damage while alive]" << std::endl;
	player.takeDamage(5);

	std::cout << std::endl;

	std::cout << "[Test 3: Repairing while alive and with energy]" << std::endl;
	player.beRepaired(6);

	std::cout << std::endl;

	std::cout << "[Test 4: Attacking until energy is depleted]" << std::endl;
	int remainEnergy = player.getEnergyPoints();
	while (remainEnergy--)
		player.attack("enemy");

	std::cout << std::endl;

	std::cout << "[Test 5: Attempting to repair with no energy]" << std::endl;
	player.beRepaired(1);

	std::cout << std::endl;
	return 0;
}
