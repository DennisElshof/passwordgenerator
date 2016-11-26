#ifndef PASSWORDREQUIREMENTS_H
#define PASSWORDREQUIREMENTS_H

namespace Settings {
    class PasswordRequirements
    {
    private:
       unsigned int uiMinLength;
       unsigned int uiMaxLength;
       unsigned int uiPasswordLength;
       bool bLowercaseLetters;
       bool bUppercaseLetters;
       bool bNumbers;
       bool bSymbols;
       bool validateLength(unsigned int iLength);
       bool validateParameterCombination(unsigned int uiLength, bool bLowercase, bool bUppercase, bool bNumbers, bool bSymbols);
    public:
        // Constructor
        PasswordRequirements(unsigned int uiMinimalLength, unsigned int uiMaximalLength);
        // Setter used by UI
        bool setLength(unsigned int uiLength);
        // Setter used by UI
        bool setLowercase(bool bUseLowercase);
        // Setter used by UI
        bool setUppercase(bool bUseUppercase);
        // Setter used by UI
        bool setNumbers(bool bUseNumbers);
        // Setter used by UI
        bool setSymbols(bool bUseSymbols);
        // Destructor
        ~PasswordRequirements();
    };
}
#endif // PASSWORDREQUIREMENTS_H
