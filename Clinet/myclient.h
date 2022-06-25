#ifndef MYCLIENT_H
#define MYCLIENT_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class myClient; }
QT_END_NAMESPACE

class myClient : public QMainWindow
{
    Q_OBJECT

public:
    myClient(QWidget *parent = nullptr);
    ~myClient();

public slots:
    void connectingToServer();
    void readingData();
    void writingData();
    void connectedToServer();
    void disconnectedFromServer();

private:
    Ui::myClient *ui;
    QTcpSocket *clientSocket;
};
#endif // MYCLIENT_H
