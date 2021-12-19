#ifndef AUTH_WINDOW_H
#define AUTH_WINDOW_H

#include <QDialog>

namespace Ui {
class auth_window;
}

class auth_window : public QDialog
{
    Q_OBJECT

public:
    explicit auth_window(QWidget *parent = nullptr);
    ~auth_window();

private slots:
    void on_nameEdit_textEdited(const QString &arg1);

    void on_passEdit_textEdited(const QString &arg1);

    void on_loginPB_clicked();

    void on_registerBP_clicked();

private:
    Ui::auth_window *ui;
};

#endif // AUTH_WINDOW_H
