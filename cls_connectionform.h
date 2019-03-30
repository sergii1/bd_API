#ifndef CLS_CONNECTIONFORM_H
#define CLS_CONNECTIONFORM_H

#include <QObject>
#include <QtWidgets>


class cls_connectionForm: public QDialog{
public:
    explicit cls_connectionForm(QWidget *parent = nullptr);
    QLineEdit* nameDB;
    QLineEdit* nameUser;
    QLineEdit* Host;
    QLineEdit* Port;
    QLineEdit* Password;
    QPushButton* pbtnConnect;
private:
    QDockWidget* dck_formConnection;
    QVBoxLayout* m_VLayout;
};
#endif // CLS_CONNECTIONFORM_H