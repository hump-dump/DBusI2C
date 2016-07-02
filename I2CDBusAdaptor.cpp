#include "I2CDBusAdaptor.hpp"
#include <QCoreApplication>

I2CDBusAdaptor::I2CDBusAdaptor( QCoreApplication *application )
   : QDBusAbstractAdaptor( application )
   , mpApp( application )
{

}

I2CDBusAdaptor::~I2CDBusAdaptor()
{
   mpApp = 0;
}
