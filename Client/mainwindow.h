#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include <QMessageBox>
#include "messagebox.h"
#include "myclient.h"
#include "mythread.h"
#include "chatlable.h"
#include "createchatdialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    void getdata();
    void gettingchat(QString chat_unique_id);
    void createpv(QJsonArray participants_username);
    void creategroup(QJsonArray participants_username);
    void createchannel(QJsonArray participants_username);
    void searchuser(QString chat_unique_id, QString time);
    void save_message(QString chat_unique_id, QString message, QString time);
    ~MainWindow();

private slots:
    void on_sendButton_clicked();

    void on_createNewChatButton_clicked();

private:
    Ui::MainWindow *ui;
    QString chat_type;
    QString user_unique_id;
    myClient e;
    QJsonObject all;
    QList <MessageBox*> listOfMessages;
    QList <ChatLable> listOfChats;
};

#endif // MAINWINDOW_H
