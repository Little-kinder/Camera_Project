#ifndef CONNECTION_H
#define CONNECTION_H

#include <QtGui>
#include <QNetworkProxy>
#include <QImage>
#include <QFileDialog>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <QImageWriter>
#include <sys/types.h> /* Consultez NOTES */
#include <QAbstractSocket>
#include <QTcpSocket>
#include <QTcpServer>
#include <QIODevice>
#include <QMainWindow>
#include <QNetworkReply>
#include <QNetworkAccessManager>
#include <QAbstractSocket>
#include <QFileDialog>
class connection
{
    Q_OBJECT
    QNetworkAccessManager manager;
public:
    QTcpSocket *socket2;
    connection();
    void debutprogramme();
private slots:
    void onReadyRead2();
    void downloadFinished(QNetworkReply *reply);
};

#endif // CONNECTION_H
