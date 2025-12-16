#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

void run_frag_trap_tests() {
    std::cout << "\n========== FragTrap Tests (Ex02) ==========" << std::endl;
    
    std::cout << "--- 1. FragTrap Construction & Initial Stats ---" << std::endl;
    FragTrap frag1("FRAG-01");
    
    std::cout << "\n--- 2. High Five Ability ---" << std::endl;
    frag1.highFivesGuys();

    std::cout << "\n--- 3. Attack & Energy Test ---" << std::endl;
    frag1.attack("Big Boss");
    frag1.attack("Big Boss");

    std::cout << "\n--- 4. Damage & Repair Test ---" << std::endl;
    frag1.takeDamage(50);
    frag1.beRepaired(20);
    
    std::cout << "\n--- 5. Copy Constructor Test (Chain check) ---" << std::endl;
    FragTrap frag2(frag1);
    frag2.attack("Target Clone");

    std::cout << "\n--- 6. Assignment Operator Test ---" << std::endl;
    FragTrap frag3("FRAG-03_Original");
    frag3 = frag1;
    frag3.highFivesGuys();

    std::cout << "\n--- 7. Energy Depletion Test ---" << std::endl;
    FragTrap frag_z("FRAG-Z");
    for (int i = 0; i < 101; ++i)
	{
        frag_z.attack("Exhaustible Dummy");
    }
    std::cout << "--- FragTrap Tests End ---" << std::endl;
}

void run_scav_trap_tests() {
    std::cout << "\n========== ScavTrap Tests (Ex01 check) ==========" << std::endl;
    ScavTrap scav1("ST-01_Check");
    scav1.attack("Gate Target");
    scav1.guardGate();
}

int main() {
    std::cout << "========================================" << std::endl;
    std::cout << "  C++ Module 03 - Exercise 02: Repetitive Work  " << std::endl;
    std::cout << "========================================" << std::endl;

    run_scav_trap_tests();
    run_frag_trap_tests();
    
    std::cout << "\n========== Destruction Sequence Check ==========" << std::endl;    
    return 0;
}
