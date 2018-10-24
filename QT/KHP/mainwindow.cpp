#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTranslator>
#include<QSettings>
#include <QtWidgets>
#include <QMenuBar>


QTranslator *m_Translator;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_Translator = new QTranslator();
    QSettings settings("JIT", "Language");
    QString sysLang = QLocale::system().name();
    QString lang = settings.value("Language", "chinese").toString();
    QString path = QCoreApplication::applicationDirPath()+"\\"+lang+".qm";
    bool bRet = m_Translator->load(path);      //利用翻译器，载入qm文件
    qApp->installTranslator(m_Translator);     //本程序安装该翻译器

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_chinese_triggered()
{
   // ui->action_chinese->setChecked(false);
    ui->action_deutsch->setChecked(false);
    ui->action_korean->setChecked(false);
    ui->action_japanese->setChecked(false);
    ui->action_english->setChecked(false);

    qApp->removeTranslator(m_Translator);
    //QString path = QCoreApplication::applicationDirPath()+"\/"+"chinese.qm";
    QString path=".././chinese.qm";
    m_Translator->load(path);
    qApp->installTranslator(m_Translator);
    ui->retranslateUi(this);


}

void MainWindow::on_action_english_triggered()
{


    ui->action_chinese->setChecked(false);
    ui->action_deutsch->setChecked(false);
    ui->action_korean->setChecked(false);
    ui->action_japanese->setChecked(false);

    qApp->removeTranslator(m_Translator);
   //QString path = QCoreApplication::applicationDirPath()+"\/"+"english.qm";
    QString path=".././english.qm";
    m_Translator->load(path);
    qApp->installTranslator(m_Translator);
    ui->retranslateUi(this);

}

void MainWindow::on_action_japanese_triggered()
{
    ui->action_chinese->setChecked(false);
    ui->action_deutsch->setChecked(false);
    ui->action_korean->setChecked(false);
    ui->action_english->setChecked(false);

    qApp->removeTranslator(m_Translator);
   // QString path = QCoreApplication::applicationDirPath()+"\/"+"japanses.qm";
     QString path=".././japanses.qm";

    m_Translator->load(path);
    qApp->installTranslator(m_Translator);
     ui->retranslateUi(this);

}

void MainWindow::on_action_korean_triggered()
{
    ui->action_chinese->setChecked(false);
    ui->action_deutsch->setChecked(false);
  //  ui->action_korean->setChecked(false);
    ui->action_japanese->setChecked(false);
    ui->action_english->setChecked(false);

    qApp->removeTranslator(m_Translator);
    //QString path = QCoreApplication::applicationDirPath()+"\/"+"korean.qm";
     QString path=".././korean.qm";
    m_Translator->load(path);
    qApp->installTranslator(m_Translator);
     ui->retranslateUi(this);

}

void MainWindow::on_action_deutsch_triggered()
{
    ui->action_chinese->setChecked(false);
   // ui->action_deutsch->setChecked(false);
    ui->action_korean->setChecked(false);
    ui->action_japanese->setChecked(false);
    ui->action_english->setChecked(false);

    qApp->removeTranslator(m_Translator);
    //QString path = QCoreApplication::applicationDirPath()+"\/"+"deutsch.qm";
     QString path=".././deutsch.qm";
    m_Translator->load(path);
    qApp->installTranslator(m_Translator);
     ui->retranslateUi(this);

}
