#ifndef GENERATEPASSWORD_H
#define GENERATEPASSWORD_H

#include <string>
#include "randomgenerators.h"
#include "randomnumbergenerator.h"
#include "passwordrequirements.h"


namespace Generators {
   class GeneratePassword
   {
   public:
      GeneratePassword(RandomGenerators generator);
      ~GeneratePassword();
      string generatePassword( void );
   private:
      RandomGenerators * pwGenerators;
      RandomNumberGenerator * myGenerator;
   };
}

#endif //GENERATEPASSWORD_H
