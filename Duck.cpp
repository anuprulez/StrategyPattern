#include <iostream>
#include <cstring>
#include "src/Duck.h"

///// The Strategy Design Pattern

QuackBehaviour::QuackBehaviour()
{
    std::cout << "Inside QuackBehaviour()" << std::endl;
}

FlyBehaviour::FlyBehaviour()
{

}

FlyWithWings::FlyWithWings()
{

}

DoNotFly::DoNotFly()
{

}

void FlyBehaviour::fly()
{
    std::cout << "Fly Behaviour fly method" << std::endl;
}

void FlyWithWings::fly()
{
    std::cout << "fly with wings" << std::endl;
}

void DoNotFly::fly()
{
    //
}

Duck::Duck()
{
    //ctor
}

Duck::~Duck()
{
    //dtor
}

void Duck::performFly()
{
    flybehaviour->fly();
}

MallardDuck::MallardDuck()
{
    FlyWithWings flywings;
    flybehaviour = &flywings;
    //flybehaviour = new FlyBehaviour;
}

int main()
{
    MallardDuck mld;
    Duck *mallardduck = &mld;
    mallardduck->performFly();
    return 0;
}
