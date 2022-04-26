#ifdef QTIMER
#include "qt_for_detection.h"
#include <QDebug>

#include <QDate>
#include <QWidget>

void Mat2QImage(cv::Mat frame, QImage& image) {
    cv::cvtColor(frame, frame, cv::COLOR_BGR2RGB);
    image = QImage(frame.data, frame.cols, frame.rows, frame.step, QImage::Format_RGB888);
}


void qt_for_detection::show_opencv() {
        if(!display){
        cap >> frame;
        if (!frame.empty()) {
            qDebug() << "No images" << endl;
        };
        cv::resize(frame, frame, cv::Size(224, 224));
        switch (ui->comboBox->currentIndex()) {
        case 0: {
            Mat2QImage(frame, showimg);
            ui->label->setPixmap(QPixmap::fromImage(showimg));
            break;
        }
        case 1: {
            cv::cvtColor(frame, frame, cv::COLOR_RGB2BGR);
            Mat2QImage(frame, showimg);
            ui->label->setPixmap(QPixmap::fromImage(showimg));
            break; }
        }
        }
}


qt_for_detection::qt_for_detection(QWidget* parent)
    : QMainWindow(parent),
    ui(new Ui::qt_for_detectionClass)
{
    ui->setupUi(this);
    cap.open(0);
    display = false;
    connect(ui->pushButton, &QPushButton::clicked, [=]() {
        display = true; }
    );
    connect(ui->pushButton1, &QPushButton::clicked, [=]() {
        display = false; }
    );
}


void qt_for_detection::on_comboBox_activated(const QString& arg1)
{
    timer = new QTimer(this);
    timer->setInterval(1);
    connect(timer, SIGNAL(timeout()), this, SLOT(show_opencv()));
    timer->start(1);
}


qt_for_detection::~qt_for_detection() {
    delete timer;
    timer = nullptr;
}
#else
#include "qt_for_detection.h"
#include <QDebug>


void Mat2QImage(cv::Mat frame, QImage& image) {
    cv::cvtColor(frame, frame, cv::COLOR_BGR2RGB);
    image = QImage(frame.data, frame.cols, frame.rows, frame.step, QImage::Format_RGB888);
}

qt_for_detection::qt_for_detection(QWidget* parent)
    : QMainWindow(parent),
    ui(new Ui::qt_for_detectionClass)
{
    ui->setupUi(this);
    connect(ui->pushButton1, &QPushButton::clicked, [=]() {
        cap.open(0);
        display = false;
        while (1) {
            if (display) break;
            cap >> frame;
            if (frame.empty()) {
                qDebug() << "No images" << endl;
                break;
            };
            cv::resize(frame, frame, cv::Size(224, 224));
            switch (ui->comboBox->currentIndex()) {
            case 0: {
                cv::waitKey(1);
                Mat2QImage(frame, showimg);
                ui->label->setPixmap(QPixmap::fromImage(showimg));
                break;
            }
            case 1: {
                cv::cvtColor(frame, frame, cv::COLOR_RGB2BGR);
                cv::waitKey(1);
                Mat2QImage(frame, showimg);
                ui->label->setPixmap(QPixmap::fromImage(showimg));
                break; }
            }
        }
        cap.release();
        });
    connect(ui->pushButton, &QPushButton::clicked, [=]() {
        display = true; }
    );
}
#endif