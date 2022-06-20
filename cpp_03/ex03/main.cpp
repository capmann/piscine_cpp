/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:57:56 by cmarteau          #+#    #+#             */
/*   Updated: 2022/05/31 18:00:16 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main() {

	ClapTrap	hero("Gasp");
	ScavTrap	evil("Bru");

	hero.setAttackDamage(10);

	evil.attack(hero.getName());
	hero.takeDamage(evil.getAttackDamage());
	std::cout << std::endl;

	std::cout << hero.getName() << " has " << hero.getHitPoints() << " hit points and " << hero.getEnergyPoints() << " energy points." << std::endl;
	std::cout << evil.getName() << " has " << evil.getHitPoints() << " hit points and " << evil.getEnergyPoints() << " energy points." << std::endl;

	std::cout << std::endl;
	hero.beRepaired(3);
	hero.attack(evil.getName());
	evil.guardGate();
	std::cout << std::endl;

	FragTrap	niceGirl("Olga");

	niceGirl.attack(evil.getName());
	evil.takeDamage(niceGirl.getAttackDamage());
	evil.attack(niceGirl.getName());
	niceGirl.takeDamage(evil.getAttackDamage());
	evil.attack(niceGirl.getName());
	niceGirl.takeDamage(evil.getAttackDamage());
	std::cout << std::endl;

	DiamondTrap	fairy("Cap");
	fairy.whoAmI();
	std::cout << std::endl;

	fairy.attack(evil.getName());
	evil.takeDamage(fairy.getAttackDamage());
	niceGirl.beRepaired(40);
	niceGirl.attack(evil.getName());
	evil.takeDamage(niceGirl.getAttackDamage());
	fairy.attack(evil.getName());
	evil.takeDamage(fairy.getAttackDamage());
	evil.attack(niceGirl.getName());
	niceGirl.highFiveGuys();
	std::cout << std::endl;

	return (0);
}
