/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 12:14:50 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/15 12:15:49 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    
public :
    WrongCat();
    WrongCat(const std::string type);
    WrongCat(const WrongCat &other);
    WrongCat &operator = (const WrongCat &other);
    ~WrongCat();
    
    void    makeSound() const;
private:
    
};

#endif
