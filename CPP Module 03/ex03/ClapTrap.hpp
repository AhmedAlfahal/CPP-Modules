/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:58:43 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/29 23:40:19 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap{
	
	protected:
		std::string name;
		int HitPoints;
		int EnergyPoint;
		int AttackDamage;
	public:
		ClapTrap();
		ClapTrap( std::string aName );
		ClapTrap( const ClapTrap &aClapTrap );
		~ClapTrap();
		ClapTrap & operator= ( const ClapTrap &aClapTrap );
		void attack(const std::string& target);
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );
};

#endif