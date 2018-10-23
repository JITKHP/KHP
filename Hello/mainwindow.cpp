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
    QString lang = settings.value("Language", "Chinese").toString();
    QString path = QCoreApplication::applicationDirPath()+"\\"+lang+".qm";
    bool bRet = m_Translator->load(path);      //利用翻译器，载入qm文件
    qApp->installTranslator(m_Translator);     //本程序安装该翻译器

}






MainWindow::~MainWindow()
{
    delete ui;

}





//切换中文
void MainWindow::on_actionChinese_triggered()
{
    QSettings settings("JIT", "Language");
       //将语言关键字的配置写回简体中文（可以认为把Language对应的值写到了注册表里）
       settings.setValue("Language", "Chinese");
       //设置简体中文翻译文件的完整路径名
       QString path = QCoreApplication::applicationDirPath()+"\\"+"Chinese.qm";
       //载入qm文件
       bool bRet = m_Translator->load(path);
       bool bRet2 = qApp->installTranslator(m_Translator);
       //关闭程序
        qApp->quit();
      // 重启程序
       QProcess::startDetached(qApp->applicationFilePath(), QStringList());

}
//切换英文
void MainWindow::on_actionEnglish_triggered()
{
         qApp->removeTranslator(m_Translator);

         QString path = QCoreApplication::applicationDirPath()+"\\"+"English.qm";

           m_Translator->load(path);

            qApp->installTranslator(m_Translator);

            ui->retranslateUi(this);

}
//德文
void MainWindow::on_actiondeutsch_triggered()
{
     qApp->removeTranslator(m_Translator);

     QString path = QCoreApplication::applicationDirPath()+"\\"+"German.qm";

      m_Translator->load(path);

       qApp->installTranslator(m_Translator);

       ui->retranslateUi(this);
}

//日语
void MainWindow::on_action_triggered()
{
    qApp->removeTranslator(m_Translator);

    QString path = QCoreApplication::applicationDirPath()+"\\"+"Japanese.qm";

     m_Translator->load(path);

      qApp->installTranslator(m_Translator);

      ui->retranslateUi(this);

}

void MainWindow::on_action_2_triggered()
{
    qApp->removeTranslator(m_Translator);

    QString path = QCoreApplication::applicationDirPath()+"\\"+"Korean.qm";

     m_Translator->load(path);

      qApp->installTranslator(m_Translator);

      ui->retranslateUi(this);
}
