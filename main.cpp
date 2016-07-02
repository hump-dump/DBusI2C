#include <QCoreApplication>

#include "I2CDBusAdaptor.hpp"

int main(int argc, char *argv[])
{
   QCoreApplication a(argc, argv);

   I2CDBusAdaptor adaptor( &a );
   return a.exec();
}
