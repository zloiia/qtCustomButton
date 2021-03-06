#include "CSSButton.h"
#include <QPixmap>
#include <QBitmap>
#include <QDebug>
#include <QPainter>
#include <QImage>

CSSButton::CSSButton(QWidget *parent) :
    QPushButton(parent)
{
    QPixmap pixmap(":button/button");
    setMask( pixmap.mask() );
    setFixedSize(pixmap.size());
    setStyleSheet("QPushButton{background-image:url(:button/button);border:0px;}"
                  "QPushButton:hover{background-image:url(:button/hover);border:0px}"
                  "QPushButton:pressed{background-image:url(:button/clicked); position: relative;top: 1px; left: 1px;}");
}

