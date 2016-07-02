#ifndef I2CDBUSADAPTOR_HPP
#define I2CDBUSADAPTOR_HPP

#include <QDBusAbstractAdaptor>
class QCoreApplication;

class I2CDBusAdaptor
   : public QDBusAbstractAdaptor
{
   Q_OBJECT
   Q_CLASSINFO( "D-Bus Interface", "BeagleBoneBlack.I2CDBusAdaptor" )
   Q_PROPERTY( QString State READ getState )
public:
   explicit I2CDBusAdaptor( QCoreApplication *application );
   virtual ~I2CDBusAdaptor();

   QString getState()
   {
      return mState;
   }
signals:

public slots:
private:
   QCoreApplication *mpApp;
   QString mState = QString( "TEST" );
};

#endif // I2CDBUSADAPTOR_HPP
