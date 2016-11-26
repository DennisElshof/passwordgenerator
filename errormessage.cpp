#include "errormessage.h"

ErrorHandling::ErrorMessage::ErrorMessage()
    : errorDialog(new ErrorDialog)
{

}

ErrorHandling::ErrorMessage::~ErrorMessage()
{
    delete errorDialog;
}

QString ErrorHandling::ErrorMessage::stringToQString(std::string text)
{
    return QString::fromStdString(text);
}

bool ErrorHandling::ErrorMessage::setErrorMessage(std::string sErrorMessage)
{
    sMessage = sErrorMessage;
//    return true;
}

void ErrorHandling::ErrorMessage::showError(void)
{
    errorDialog->showMessage(stringToQString(sMessage));
}
