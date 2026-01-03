# ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		// OCM
		ScavTrap();
		ScavTrap(const std::string& name);
		virtual ~ScavTrap();
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator=(const ScavTrap& other);

		/**
		 * @brief ターゲットに攻撃
		 * ClapTrapから継承されたattack()をオーバーライド
		 * 1エネルギーポイントを消費し、ターゲットにダメージを与える。
		 * エネルギーやヒットポイントがない場合は攻撃できない。
		 *
		 * @param target 攻撃対象のエンティティ名。
		 */
		void attack(const std::string& target);

		/**
		 * @brief ScavTrapをゲートキーパーモードにする。
		 * * ScavTrap独自の特殊能力。
		 * この機能自体はエネルギーを消費しないが、モードに入ったことを示すメッセージを表示する。
		 */
		void guardGate();
};

# endif // SCAVTRAP_HPP
