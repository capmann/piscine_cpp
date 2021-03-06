/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:54:37 by cmarteau          #+#    #+#             */
/*   Updated: 2022/05/31 18:54:39 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class	Weapon {

public:

	Weapon(const std::string type);
	~Weapon(void);

	const std::string&	getType(void) const;
	void				setType(const std::string& type);

private:

	std::string	_type;
};

#endif

