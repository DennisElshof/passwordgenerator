#include "generatepasswordfactory.h"

Generators::GeneratePasswordFactory::GeneratePasswordFactory()
{
    theGenerators = new RandomGenerators;
    thePasswordGenerator = new Generators::GeneratePassword( *theGenerators );

}

Generators::GeneratePasswordFactory::~GeneratePasswordFactory()
{
    delete theGenerators;
    delete thePasswordGenerator;
}
