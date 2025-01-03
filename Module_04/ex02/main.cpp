/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 18:49:08 by moichou           #+#    #+#             */
/*   Updated: 2025/01/03 20:49:52 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"

int main()
{
    const AAnimal *j = new Dog();
    // const AAnimal *i = new AAnimal();





    delete j; // should not create a leak
    // delete i;
    
    return 0;
}
