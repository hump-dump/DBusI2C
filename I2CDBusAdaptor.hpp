#ifndef I2CDBUSADAPTOR_HPP
#define I2CDBUSADAPTOR_HPP

#include <QDBusAbstractAdaptor>
class QCoreApplication;

class I2CDBusAdaptor
   : public QDBusAbstractAdaptor
{
   Q_OBJECT
   Q_CLASSINFO("D-Bus Interface", "BeagleBoneBlack.I2CDBusAdaptor")
public:
   explicit I2CDBusAdaptor( QCoreApplication *application );
   virtual ~I2CDBusAdaptor();
signals:

public slots:
private:
   QCoreApplication *mpApp;
};

#endif // I2CDBUSADAPTOR_HPP
