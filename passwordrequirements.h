#ifndef PASSWORDREQUIREMENTS_H
#define PASSWORDREQUIREMENTS_H

namespace Settings {
    class PasswordRequirements
    {
    private:
       // Constructor
       PasswordRequirements(unsigned int uiMinimalLength = 5, unsigned int uiMaximalLength = 30);
       // Destructor
       ~PasswordRequirements();
       unsigned int uiMinLength = 5;
       unsigned int uiMaxLength = 30;
       unsigned int uiPasswordLength;
       bool bLowercaseLetters;
       bool bUppercaseLetters;
       bool bNumbers;
       bool bSymbols;
       bool validateLength(unsigned int iLength);
       bool validateParameterCombination(unsigned int uiLength, bool bLowercase, bool bUppercase, bool bNumbers, bool bSymbols);
    public:
       static PasswordRequirements& instance(void);

        // Setters (used by UI )
        bool setLength(unsigned int uiLength);
        bool setLowercase(bool bUseLowercase);
        bool setUppercase(bool bUseUppercase);
        bool setNumbers(bool bUseNumbers);
        bool setSymbols(bool bUseSymbols);

        // Getters (used by Statemachine )
        unsigned int getLength(void) const;
        bool getLowercase(void) const;
        bool getUppercase(void) const;
        bool getNumbers(void) const;
        bool getSymbols(void) const;
    };
}
#endif // PASSWORDREQUIREMENTS_H
