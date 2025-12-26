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
	std::cout << "========== ClapTrap テスト ==========" << std::endl;
	ClapTrap clap1("CT-01");
	clap1.attack("target1");
	clap1.takeDamage(3);
	clap1.beRepaired(2);
	std::cout << std::endl;

	std::cout << "========== ScavTrap テスト ==========" << std::endl;
	ScavTrap scav1("ST-01");
	scav1.attack("enemy1");
	scav1.takeDamage(20);
	scav1.beRepaired(10);
	scav1.guardGate();
	std::cout << std::endl;

	std::cout << "========== コピーコンストラクタ テスト ==========" << std::endl;
	ScavTrap scav2(scav1);
	scav2.attack("enemy2");
	std::cout << std::endl;

	std::cout << "========== 代入演算子(=) テスト ==========" << std::endl;
	ScavTrap scav3("ST-03");
	scav3 = scav1;
	scav3.attack("enemy3");
	std::cout << std::endl;

	std::cout << "========== エネルギー枯渇 テスト ==========" << std::endl;
	ScavTrap scav4("ST-04");
	for (int i = 0; i < 52; i++) {
		scav4.attack("dummy");
	}
	std::cout << std::endl;

	std::cout << "========== 破棄(デストラクタ)順の確認 ==========" << std::endl;
	return 0;
}
