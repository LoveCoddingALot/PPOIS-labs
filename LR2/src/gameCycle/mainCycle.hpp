#pragma once

#include <memory>
#include <type_traits>

namespace gameField
{
    class field;
    class cell;
}

namespace gameCycle
{
    class mainCycle
    {
    public:
        mainCycle(/* args */)
        {
        }
        ~mainCycle()
        {
        }

        virtual void move(gameField::field *field);
        virtual void eat(gameField::field *field);
        virtual void reproduction(gameField::field *field);
        virtual void die(gameField::field *field);
        virtual void nextStep(gameField::field *field);

    private:
        void reproductionAnimals(gameField::cell *_cell);
        void eatPlants(gameField::cell *tmpCell);
        void eatGrassEaters(gameField::cell *tmpCell);
        void dieAnimals(gameField::cell *_cell);
        void dieGrassEaters(gameField::cell *_cell);
        void diePlant(gameField::cell *_cell);
    };
} // namespace gameCycle
