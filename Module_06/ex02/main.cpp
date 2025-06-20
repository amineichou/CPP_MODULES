/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 13:38:22 by moichou           #+#    #+#             */
/*   Updated: 2025/06/19 11:23:36 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "iostream"
#include <stdlib.h> 
#include <time.h>

Base *generate(void)
{
    std::srand(time(NULL));
    int rNumber = std::rand() % 3;

    switch (rNumber)
    {
    case 0:
        std::cout << "[A] was generated randomly." << std::endl;
        return new A();
        break;
    case 1:
        std::cout << "[B] was generated randomly." << std::endl;
        return new B();
        break;
    case 2:
        std::cout << "[C] was generated randomly." << std::endl;
        return new C();
        break;
    default:
        break;
    }
    return NULL;
}


void identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "The type of this object is [A] ." << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "The type of this object is [B] ." << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "The type of this object is [C] ." << std::endl;
    else
        std::cout << "The type of this object is Unknown ." << std::endl;

}


void identify(Base &p)
{
    try {
        A &objectTest = dynamic_cast<A&>(p);
        (void)objectTest;
        std::cout << "The type of this object is [A] ." << std::endl;
    } catch (...) {}

    try {
        B &objectTest = dynamic_cast<B&>(p);
        (void)objectTest;
        std::cout << "The type of this object is [B] ." << std::endl;
    } catch (...) {}

    try {
        C &objectTest = dynamic_cast<C&>(p);
        (void)objectTest;
        std::cout << "The type of this object is [C] ." << std::endl;   
    } catch (...) {}
}


int main(void)
{

    // test

    Base *randomBase = generate();
    if (randomBase)
    {
        identify(randomBase);
        identify(*randomBase);
        delete randomBase;
    }
    else
        std::cout << "generate object faild successfuly hh" << std::endl;

    return 0;
}

