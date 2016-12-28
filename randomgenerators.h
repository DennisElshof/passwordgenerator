#ifndef RANDOMGENERATORS_H
#define RANDOMGENERATORS_H


#include "randomnumbergenerator.h"

namespace Generators {

   enum class GeneratorType : char
   {
      SMALL_LETTER = 0,
      CAPITAL_LETTER = 1,
      NUMBER = 2,
      SYMBOLS = 3,
   };

   class RandomGenerators
   {
   public:
      // static RandomGenerators& instance(void);
      bool setSeedNow ( GeneratorType seed );
      unsigned int generate ( GeneratorType generator );
      RandomGenerators();
      ~RandomGenerators();
   private:
      unsigned int generateSymbol ( void );
      RandomNumberGenerator * smallLetterGenerator;
      RandomNumberGenerator * capitalLetterGenerator;
      RandomNumberGenerator * numberGenerator;
   };
}
#endif // RANDOMGENERATORS_H
