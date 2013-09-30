#include "custombutton1.h"
#include <QPixmap>
#include <QBitmap>
#include <QDebug>
#include <QPainter>
#include <QImage>

CustomButton1::CustomButton1(QWidget *parent) :
    QPushButton(parent)
{
    QPixmap pixmap(":button/button");
    setMask( pixmap.mask() );
    setMaximumSize( pixmap.size() );
    setStyleSheet("QPushButton{background:url(:button/button);border:0px;}"
                  "QPushButton:hover{background:url(:button/hover);border:0px}"
                  "QPushButton:pressed{background:url(:button/clicked); position: relative;top: 1px; left: 1px;}");
}

