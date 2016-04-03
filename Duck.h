class QuackBehaviour
{
    public:
        QuackBehaviour();
        //virtual ~QuackBehaviour();
        //void virtual quack();
};


class FlyBehaviour
{
    public:
        FlyBehaviour();
        //virtual ~FlyBehaviour();
        void virtual fly();
};


class FlyWithWings : public FlyBehaviour
{
    public:
        FlyWithWings();
        void fly();
};


class DoNotFly : public FlyBehaviour
{
    public:
        DoNotFly();
        void fly();
};

#ifndef DUCK_H
#define DUCK_H


class Duck
{
    public:
        Duck();
        virtual ~Duck();
        void performFly();
        QuackBehaviour *quackbehaviour;
        FlyBehaviour *flybehaviour;
    protected:
    private:
};

class MallardDuck : public Duck
{
    public:
        MallardDuck();
};

#endif // DUCK_H


