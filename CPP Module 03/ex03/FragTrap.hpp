/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:51:30 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/29 23:22:33 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{

    public:
        FragTrap();
        FragTrap( std::string name );
        FragTrap( const FragTrap &aFragTrap );
        ~FragTrap();
        FragTrap & operator= ( const FragTrap &aFragTrap );
        void highFivesGuys( void );

};

#endif