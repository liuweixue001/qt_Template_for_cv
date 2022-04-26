#ifdef QTIMER
#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_qt_for_detection.h"
#include <opencv2/opencv.hpp>
#include <QTimer>
class qt_for_detection : public QMainWindow
{
    Q_OBJECT

public:
    qt_for_detection(QWidget *parent = Q_NULLPTR);
    cv::VideoCapture cap;
    cv::Mat frame;
    QImage showimg;
    bool display = false;
    ~qt_for_detection();
private slots:
    void on_comboBox_activated(const QString& arg1);
    void show_opencv();
private:
    Ui::qt_for_detectionClass *ui;
    QTimer* timer;

};
#else
#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_qt_for_detection.h"
#include <opencv2/opencv.hpp>
class qt_for_detection : public QMainWindow
{
    Q_OBJECT

public:
    qt_for_detection(QWidget* parent = Q_NULLPTR);
    cv::VideoCapture cap;
    cv::Mat frame;
    QImage showimg;
    bool display = false;
private:
    Ui::qt_for_detectionClass* ui;
};

#endif