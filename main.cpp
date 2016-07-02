#include <QCoreApplication>
#include <QDBusConnection>

#include "I2CDBusAdaptor.hpp"

int main(int argc, char *argv[])
{
   QCoreApplication a(argc, argv);

   new I2CDBusAdaptor( &a );

   QDBusConnection::sessionBus().registerObject( "/I2CDBusAdaptor", &a );

   return a.exec();
}
