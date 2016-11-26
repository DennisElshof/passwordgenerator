#ifndef ERRORMESSAGE_H
#define ERRORMESSAGE_H

#include <string.h>
#include <qstring.h>
#include "errordialog.h"

namespace ErrorHandling {

    class ErrorMessage
    {
    public:
        ErrorMessage();
        ~ErrorMessage();
        bool setErrorMessage(std::string sErrorMessage);
    private:
        ErrorDialog *errorDialog;
        std::string sMessage;
        QString stringToQString(std::string text);
        void showError(void);
    };

};

#endif // ERRORMESSAGE_H
