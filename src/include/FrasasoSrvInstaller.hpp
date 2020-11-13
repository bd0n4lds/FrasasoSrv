#ifndef FRASASOSRV_INSTALLER_HPP
#define FRASASOSRV_INSTALLER_HPP

#include "FrasasoSrvBase.hpp"

class FrasasoSrvInstaller
{
public:
  static bool Install(const FrasasoSrvBase &service);
  static bool Uninstall(const FrasasoSrvBase &service);

private:
  FrasasoSrvInstaller() {}
};

#endif // FRASASOSRV_INSTALLER_HPP
