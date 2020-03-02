#include "connection.h"

connection::connection()
{
    manager.setProxy(QNetworkProxy::NoProxy);
}

void connection::debutprogramme()
{
    qDebug()<<"1h";
    //QTcpSocket *socket=new QTcpSocket();
    qDebug()<<"h";
    socket2->connectToHost("127.0.0.1",83);
    //socket2->connectToHost();

    connect(socket2,SIGNAL(readyRead()),this,SLOT(onReadyRead2()));
    //connect(socket2,SIGNAL(readyRead()),this,SLOT(onReadyRead2()));
}

void connection::onReadyRead2()
{
    QByteArray d=socket.readAll();
    qDebug()<<d;
    if(d=="reveil"){
        qDebug() << Q_FUNC_INFO;
        //connect(&manager, &QNetworkAccessManager::finished, this, &MainWindow::downloadFinished);
        const QUrl url = QUrl("http://192.168.0.90/axis-cgi/jpg/image.cgi?resolution=4CIF");

        QNetworkRequest request(url);
        request.setRawHeader("User-Agent", "MyOwnBrowser 1.0");
        manager.get(request);
    }
}

void connection::downloadFinished(QNetworkReply *reply)
{

}
