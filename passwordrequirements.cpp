#include "passwordrequirements.h"

using namespace Settings;

PasswordRequirements& PasswordRequirements::instance(void)
{
   static PasswordRequirements theInstance;
   return theInstance;
}

Settings::PasswordRequirements::PasswordRequirements(unsigned int uiMinimalLength, unsigned int uiMaximalLength)
    :uiMinLength(uiMinimalLength = 5), uiMaxLength(uiMaximalLength = 30)
{

}

PasswordRequirements::~PasswordRequirements()
{

}

bool PasswordRequirements::validateLength(unsigned int uiLength)
{
    if((uiLength < uiMinLength) | (uiLength >uiMaxLength))
    {
        return false;
    }
    return true;
}

bool PasswordRequirements::validateParameterCombination(unsigned int uiLength, bool bLowercase, bool bUppercase, bool bNumbers, bool bSymbols)
{
    bool bLengtIsOK;
    bool bCharacterSetIsOK;
    bLengtIsOK = validateLength(uiLength);
    bCharacterSetIsOK = (bLowercase || bUppercase || bNumbers || bSymbols);
    if (bLengtIsOK && bCharacterSetIsOK)
    {
     return true;
    }
    return false;
}

bool PasswordRequirements::setLength(unsigned int uiLength)
{
    if(validateLength(uiLength))
    {
    uiPasswordLength = uiLength;
    return true;
    }
    return false;
}

bool PasswordRequirements::setLowercase(bool bUseLowercase)
{
    if(validateParameterCombination(uiPasswordLength, bUseLowercase, bUppercaseLetters, bNumbers, bSymbols))
    {
        bLowercaseLetters = bUseLowercase;
        return true;
    }
    return false;
}

bool PasswordRequirements::setUppercase(bool bUseUppercase)
{
    if(validateParameterCombination(uiPasswordLength, bLowercaseLetters, bUseUppercase, bNumbers, bSymbols))
    {
        bUppercaseLetters = bUseUppercase;
        return true;
    }
    return false;
}

bool PasswordRequirements::setNumbers(bool bUseNumbers)
{
    if(validateParameterCombination(uiPasswordLength, bLowercaseLetters, bUppercaseLetters, bUseNumbers, bSymbols))
    {
        bNumbers = bUseNumbers;
        return true;
    }
    return false;
}

bool PasswordRequirements::setSymbols(bool bUseSymbols)
{
    if(validateParameterCombination(uiPasswordLength, bLowercaseLetters, bUppercaseLetters, bNumbers, bUseSymbols))
    {
        bSymbols = bUseSymbols;
        return true;
    }
    return false;
}

bool PasswordRequirements::getLength(void) const
{
   return uiPasswordLength;
}

bool PasswordRequirements::getLowercase(void) const
{
   return bLowercaseLetters;
}

bool PasswordRequirements::getUppercase(void) const
{
   return bUppercaseLetters;
}

bool PasswordRequirements::getNumbers(void) const
{
   return bNumbers;
}

bool PasswordRequirements::getSymbols(void) const
{
   return bSymbols;
}
