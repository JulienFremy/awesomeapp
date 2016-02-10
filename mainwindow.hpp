#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>

class QLabel;

class MainWindow : public QMainWindow
{
  Q_OBJECT
public:
  explicit MainWindow(QWidget *parent = 0);
  virtual ~MainWindow() {}

signals:

public slots:

private:
  QLabel * mLabel;
};

#endif // MAINWINDOW_HPP
