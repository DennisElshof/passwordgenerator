#include "generatepassword.h"

using namespace Generators;

GeneratePassword::GeneratePassword(RandomGenerators generator)
{
    *pwGenerators = generator;
    myGenerator = new RandomNumberGenerator (0, 3);
}


GeneratePassword::~GeneratePassword()
{
}

string GeneratePassword::generatePassword( void )
{
    unsigned int passwordLength = Settings::PasswordRequirements::instance().getLength();
    string password;

    while(passwordLength)
    {
        switch( myGenerator->next() )
        {
        case 0:
            password += pwGenerators->generate( Generators::GeneratorType::CAPITAL_LETTER );
            break;
        case 1:
            password += pwGenerators->generate( Generators::GeneratorType::SMALL_LETTER );
            break;
        case 2:
            password += pwGenerators->generate( Generators::GeneratorType::NUMBER );
            break;
        case 3:
            password += pwGenerators->generate( Generators::GeneratorType::SYMBOLS );
            break;
        default:
            // report error
            return 0;
        }

        passwordLength--;
    }
    if( password.size() != Settings::PasswordRequirements::instance().getLength() )
    {
        // report error
        return 0;
    }
    return password;
}
