#ifndef GENERATEPASSWORDFACTORY_H
#define GENERATEPASSWORDFACTORY_H

#include "generatepassword.h"
#include "randomnumbergenerator.h"

namespace Generators{

    class GeneratePasswordFactory
    {
    public:
        Generators::GeneratePassword& instance( void )
        {
            return *thePasswordGenerator;
        };

    private:
        GeneratePasswordFactory();
        ~GeneratePasswordFactory();
        Generators::GeneratePassword * thePasswordGenerator;
        Generators::RandomGenerators * theGenerators;
    };

}

#endif // GENERATEPASSWORDFACTORY_H
