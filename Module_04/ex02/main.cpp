/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 18:49:08 by moichou           #+#    #+#             */
/*   Updated: 2025/01/04 17:09:36 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include  "Cat.hpp"

int main()
{
    Dog *j = new Dog();
    // const AAnimal *i = new AAnimal();

    Cat *i = new Cat();


    delete j;
    delete i;
    
    return 0;
}
