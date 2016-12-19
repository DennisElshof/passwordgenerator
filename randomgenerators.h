#ifndef RANDOMGENERATORS_H
#define RANDOMGENERATORS_H


#include "randomnumbergenerator.h"

namespace Generators {

   enum class GeneratorType : char
   {
      SMALL_LETTER = 0,
      CAPITAL_LETTER = 1,
      NUMBER = 2,
   };

   class RandomGenerators
   {
   public:
      static RandomGenerators& instance(void);
      bool setSeedNow(GeneratorType seed);
      unsigned int generate(GeneratorType generator);
   private:
      RandomNumberGenerator * smallLetterGenerator;
      RandomNumberGenerator * capitalLetterGenerator;
      RandomNumberGenerator * numberGenerator;
      RandomGenerators();
      ~RandomGenerators();
   };
}
#endif // RANDOMGENERATORS_H
