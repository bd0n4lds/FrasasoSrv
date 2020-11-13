#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "FrasasoSrvInstaller.hpp"

int _tmain(int argc, TCHAR *argv[])
{

  if (argc > 1)
  {
    if (_tcscmp(argv[1], _T("install")) == 0)
    {
      _tprintf(_T("Installing service\n"));
      if (!FrasasoSrvInstaller::Install(service))
      {
        _tprintf(_T("Couldn't install service: %d\n"), ::GetLastError());
        return -1;
      }

      _tprintf(_T("Service installed\n"));
      return 0;
    }

    if (_tcscmp(argv[1], _T("uninstall")) == 0)
    {
      _tprintf(_T("Uninstalling service\n"));
      if (!FrasasoSrvInstaller::Uninstall(service))
      {
        _tprintf(_T("Couldn't uninstall service: %d\n"), ::GetLastError());
        return -1;
      }

      _tprintf(_T("Service uninstalled\n"));
      return 0;
    }

    _tprintf(_T("Invalid argument\n"));
    return -1;
  }

  return 0;
}
