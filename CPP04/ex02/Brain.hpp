/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:33:52 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/12 15:22:30 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H
# include <array> 
# include "Animal.hpp"

class Brain
{
public :
    Brain();
    Brain(const Brain &other);
    Brain &operator = (const Brain &other);
    virtual ~Brain();

    void set_ideas(int index, const std::string idea);
    std::string get_ideas(int index) const;

private :
    std::string ideas[100];
};

#endif