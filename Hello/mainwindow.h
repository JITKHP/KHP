#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QTranslator>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public:
    void changeTr(int language_label);


private slots:
    void on_actionChinese_triggered();

    void on_actionEnglish_triggered();

    void on_actiondeutsch_triggered();

    void on_action_triggered();

    void on_action_2_triggered();

private:
    Ui::MainWindow *ui;
};

extern QTranslator *m_Translator;




#endif // MAINWINDOW_H
