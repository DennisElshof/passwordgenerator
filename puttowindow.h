#ifndef PUTTOWINDOW_H
#define PUTTOWINDOW_H

#include <string>
#include <mainwindow.h>

using namespace std;

class PutToWindow
{
private:
    string sToWindow;
public:
    PutToWindow(string sText);
	PutToWindow(bool bImediately);
	PutToWindow (string sText, bool bImediately);
    void addToText(string sText);
    void flushText(void);
    void putNow(void);
    ~PutToWindow();
};

#endif // PUTTOWINDOW_H
