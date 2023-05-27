#ifndef CONTROLLSCREEN_H
#define CONTROLLSCREEN_H

#include <QDialog>

namespace Ui {
class controllScreen;
}

class controllScreen : public QDialog
{
    Q_OBJECT

public:
    explicit controllScreen(QWidget *parent = nullptr);
    ~controllScreen();

private slots:
    void on_pushButton_clicked();

private:
    Ui::controllScreen *ui;
};

#endif // CONTROLLSCREEN_H
