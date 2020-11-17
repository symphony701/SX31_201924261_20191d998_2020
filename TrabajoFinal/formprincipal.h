#ifndef FORMPRINCIPAL_H
#define FORMPRINCIPAL_H

#include <QWidget>
#include "Lista.h"
#include "logeador.h"
#include "User.h"
namespace Ui {
class FormPrincipal;
}

class FormPrincipal : public QWidget
{
    Q_OBJECT

public:
    explicit FormPrincipal(QWidget *parent = nullptr);
    ~FormPrincipal();

private slots:
    void on_ButtonPerfil_clicked();

private:
    Ui::FormPrincipal *ui;

};

#endif // FORMPRINCIPAL_H