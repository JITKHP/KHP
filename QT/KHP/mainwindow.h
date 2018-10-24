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

private slots:
    void on_action_chinese_triggered();

    void on_action_english_triggered();

    void on_action_japanese_triggered();

    void on_action_korean_triggered();

    void on_action_deutsch_triggered();


private:
    Ui::MainWindow *ui;
};

extern QTranslator *m_Translator;



#endif // MAINWINDOW_H
