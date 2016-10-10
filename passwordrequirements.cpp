#include "passwordrequirements.h"

PasswordRequirements::PasswordRequirements(unsigned int uiMinimalLength, unsigned int uiMaximalLength)
    :uiMinLength(uiMinimalLength), uiMaxLength(uiMaximalLength)
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
    bCharacterSetIsOK = (bLowercase or bUppercase or bNumbers or bSymbols);
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

PasswordRequirements::~PasswordRequirements()
{

}

