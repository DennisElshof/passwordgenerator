#include "randomgenerators.h"

using namespace Generators;


RandomGenerators::RandomGenerators()
{
// Generator for small letters (= decimal 97 - 122 of ascii table )
smallLetterGenerator = new RandomNumberGenerator(97, 122);

// Generator for capital letters (= decimal 65 - 90 i=of ascii table )
capitalLetterGenerator = new RandomNumberGenerator(65, 90);

// Generator for numbers between 0 - 9&numberGenerator = new RandomNumberGenerator(0, 9);

}

RandomGenerators::~RandomGenerators()
{
   delete smallLetterGenerator;
   delete capitalLetterGenerator;
   delete numberGenerator;
}

RandomGenerators& RandomGenerators::instance(void)
{
   static RandomGenerators theInstance;
   return theInstance;
}


bool RandomGenerators::setSeedNow(Generators::GeneratorType seed)
{
   switch (seed)
   {
   case GeneratorType::SMALL_LETTER:
      smallLetterGenerator->seednow();
      break;
   case GeneratorType::CAPITAL_LETTER:
      capitalLetterGenerator->seednow();
      break;
   case GeneratorType::NUMBER:
      numberGenerator->seednow();
      break;
   default:
      return false;
   }
   return true;
}

unsigned int RandomGenerators::generate(GeneratorType generator)
{
   unsigned int uiGenerated = 0;
   switch (generator)
   {
   case Generators::GeneratorType::SMALL_LETTER:
      uiGenerated = smallLetterGenerator->next();
      break;
   case Generators::GeneratorType::CAPITAL_LETTER:
      uiGenerated = capitalLetterGenerator->next();
      break;
   case Generators::GeneratorType::NUMBER:
      uiGenerated = numberGenerator->next();
      break;
   default:
      break;
   }
   return uiGenerated;
}
