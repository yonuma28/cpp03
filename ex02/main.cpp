#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

void run_frag_trap_tests() {
    std::cout << "\n========== FragTrap テスト (ex02) ==========" << std::endl;
    
    std::cout << "--- 1. 生成と初期ステータス ---" << std::endl;
    FragTrap frag1("FRAG-01");
    
    std::cout << "\n--- 2. 特殊能力: ハイタッチ要求 ---" << std::endl;
    frag1.highFivesGuys();

    std::cout << "\n--- 3. 攻撃とエネルギー消費 ---" << std::endl;
    frag1.attack("Big Boss");
    frag1.attack("Big Boss");

    std::cout << "\n--- 4. ダメージと修理 ---" << std::endl;
    frag1.takeDamage(50);
    frag1.beRepaired(20);
    
    std::cout << "\n--- 5. コピーコンストラクタ(継承チェーン確認) ---" << std::endl;
    FragTrap frag2(frag1);
    frag2.attack("Target Clone");

    std::cout << "\n--- 6. 代入演算子(=) ---" << std::endl;
    FragTrap frag3("FRAG-03_Original");
    frag3 = frag1;
    frag3.highFivesGuys();

    std::cout << "\n--- 7. エネルギー枯渇 ---" << std::endl;
    FragTrap frag_z("FRAG-Z");
    for (int i = 0; i < 101; ++i)
	{
        frag_z.attack("Exhaustible Dummy");
    }
    std::cout << "--- FragTrap テスト終了 ---" << std::endl;
}

void run_scav_trap_tests() {
    std::cout << "\n========== ScavTrap テスト (ex01確認) ==========" << std::endl;
    ScavTrap scav1("ST-01_Check");
    scav1.attack("Gate Target");
    scav1.guardGate();
}

int main() {
    std::cout << "========================================" << std::endl;
    std::cout << "  C++ Module 03 - Exercise 02: 反復作業  " << std::endl;
    std::cout << "========================================" << std::endl;

    run_scav_trap_tests();
    run_frag_trap_tests();
    
    return 0;
}
