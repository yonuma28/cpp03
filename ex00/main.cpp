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

	std::cout << "[初期状態: player]" << std::endl;
	std::cout << "名前: " << player.getName() << std::endl;
	std::cout << "HP  : " << player.getHitPoints() << std::endl;
	std::cout << "EP  : " << player.getEnergyPoints() << std::endl;
	std::cout << "AD  : " << player.getAttackDamage() << std::endl;

	std::cout << std::endl;

	std::cout << "[テスト1: HP/EPがある状態で攻撃できる]" << std::endl;
	std::cout << "[初期状態: dead]" << std::endl;
	std::cout << "名前: " << player.getName() << std::endl;
	std::cout << "HP  : " << player.getHitPoints() << std::endl;
	std::cout << "EP  : " << player.getEnergyPoints() << std::endl;
	std::cout << "AD  : " << player.getAttackDamage() << std::endl;

	player.attack("enemy");

	std::cout << "名前: " << player.getName() << std::endl;
	std::cout << "HP  : " << player.getHitPoints() << std::endl;
	std::cout << "EP  : " << player.getEnergyPoints() << std::endl;
	std::cout << "AD  : " << player.getAttackDamage() << std::endl;
	
	std::cout << std::endl;

	std::cout << "[テスト2: 生存中にダメージを受ける]" << std::endl;
	std::cout << "[初期状態: dead]" << std::endl;
	std::cout << "名前: " << player.getName() << std::endl;
	std::cout << "HP  : " << player.getHitPoints() << std::endl;
	std::cout << "EP  : " << player.getEnergyPoints() << std::endl;
	std::cout << "AD  : " << player.getAttackDamage() << std::endl;
	
	player.takeDamage(5);

	std::cout << "名前: " << player.getName() << std::endl;
	std::cout << "HP  : " << player.getHitPoints() << std::endl;
	std::cout << "EP  : " << player.getEnergyPoints() << std::endl;
	std::cout << "AD  : " << player.getAttackDamage() << std::endl;

	std::cout << std::endl;

	std::cout << "[テスト3: 生存中かつEPがあると修理できる]" << std::endl;
	std::cout << "[初期状態: dead]" << std::endl;
	std::cout << "名前: " << player.getName() << std::endl;
	std::cout << "HP  : " << player.getHitPoints() << std::endl;
	std::cout << "EP  : " << player.getEnergyPoints() << std::endl;
	std::cout << "AD  : " << player.getAttackDamage() << std::endl;
	
	player.beRepaired(6);

	std::cout << "名前: " << player.getName() << std::endl;
	std::cout << "HP  : " << player.getHitPoints() << std::endl;
	std::cout << "EP  : " << player.getEnergyPoints() << std::endl;
	std::cout << "AD  : " << player.getAttackDamage() << std::endl;

	std::cout << std::endl;

	std::cout << "[テスト4: EPが尽きるまで攻撃し、その後攻撃しない]" << std::endl;
	std::cout << "[初期状態: dead]" << std::endl;
	std::cout << "名前: " << player.getName() << std::endl;
	std::cout << "HP  : " << player.getHitPoints() << std::endl;
	std::cout << "EP  : " << player.getEnergyPoints() << std::endl;
	std::cout << "AD  : " << player.getAttackDamage() << std::endl;
	
	int remainEnergy = player.getEnergyPoints();
	while (remainEnergy--)
		player.attack("enemy");

	std::cout << "名前: " << player.getName() << std::endl;
	std::cout << "HP  : " << player.getHitPoints() << std::endl;
	std::cout << "EP  : " << player.getEnergyPoints() << std::endl;
	std::cout << "AD  : " << player.getAttackDamage() << std::endl;

	std::cout << std::endl;

	std::cout << "[テスト5: EPが0だと修理できない]" << std::endl;
	std::cout << "[初期状態: dead]" << std::endl;
	std::cout << "名前: " << player.getName() << std::endl;
	std::cout << "HP  : " << player.getHitPoints() << std::endl;
	std::cout << "EP  : " << player.getEnergyPoints() << std::endl;
	std::cout << "AD  : " << player.getAttackDamage() << std::endl;
	
	player.beRepaired(1);

	std::cout << "名前: " << player.getName() << std::endl;
	std::cout << "HP  : " << player.getHitPoints() << std::endl;
	std::cout << "EP  : " << player.getEnergyPoints() << std::endl;
	std::cout << "AD  : " << player.getAttackDamage() << std::endl;

	std::cout << std::endl;

	std::cout << "[テスト6: HPが0のときは行動できない]" << std::endl;
	ClapTrap dead("dead");
	std::cout << "[初期状態: dead]" << std::endl;
	std::cout << "名前: " << dead.getName() << std::endl;
	std::cout << "HP  : " << dead.getHitPoints() << std::endl;
	std::cout << "EP  : " << dead.getEnergyPoints() << std::endl;
	std::cout << "AD  : " << dead.getAttackDamage() << std::endl;

	dead.takeDamage(10);
	dead.attack("enemy");
	dead.beRepaired(1);

	std::cout << "名前: " << dead.getName() << std::endl;
	std::cout << "HP  : " << dead.getHitPoints() << std::endl;
	std::cout << "EP  : " << dead.getEnergyPoints() << std::endl;
	std::cout << "AD  : " << dead.getAttackDamage() << std::endl;

	std::cout << std::endl;

	std::cout << "[テスト7: 破壊済み(HP0)のときtakeDamageしても変化しない]" << std::endl;
	std::cout << "名前: " << dead.getName() << std::endl;
	std::cout << "HP  : " << dead.getHitPoints() << std::endl;
	std::cout << "EP  : " << dead.getEnergyPoints() << std::endl;
	std::cout << "AD  : " << dead.getAttackDamage() << std::endl;

	dead.takeDamage(1);

	std::cout << "名前: " << dead.getName() << std::endl;
	std::cout << "HP  : " << dead.getHitPoints() << std::endl;
	std::cout << "EP  : " << dead.getEnergyPoints() << std::endl;
	std::cout << "AD  : " << dead.getAttackDamage() << std::endl;

	std::cout << std::endl;
	return 0;
}
