/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SvapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 21:55:10 by cmarteau          #+#    #+#             */
/*   Updated: 2022/06/06 21:55:12 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class	ScavTrap : public virtual ClapTrap {

public:

	ScavTrap(std::string name);
	ScavTrap(std::string name, int hp, int ep, int ad);
	ScavTrap(ScavTrap const & copy);
	~ScavTrap(void);

	ScavTrap & operator=(ScavTrap const & rhs);
	
	void	attack(const std::string & target);
	void	guardGate(void);

	static const int	_staticEnergyPoints = 50;
};

#endif

