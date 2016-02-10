#include "mainwindow.hpp"

#include <libbar/libbar.hpp>
#include <libfoo/libfoo.hpp>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
, mLabel(new QLabel(this))
{
  mLabel->setText(QString::fromStdString(hello()) + ", " + QString::fromStdString(world()) + "!");
}
