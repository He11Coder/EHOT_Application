#ifndef REG_WINDOW_H
#define REG_WINDOW_H

#include <QDialog>

namespace Ui {
class reg_window;
}

class reg_window : public QDialog
{
    Q_OBJECT

public:
    explicit reg_window(QWidget *parent = nullptr);
    ~reg_window();

private slots:
    void on_nameEdit_textEdited(const QString &arg1);

    void on_passEdit_textEdited(const QString &arg1);

    void on_confirmEdit_textEdited(const QString &arg1);

    void on_registerBP_clicked();

private:
    Ui::reg_window *ui;
};

#endif // REG_WINDOW_H
