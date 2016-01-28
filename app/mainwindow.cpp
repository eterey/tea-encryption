#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "teaencryptor.h"
#include <stdint.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonEncrypt_clicked()
{
    // Read input values from form
    uint32_t v1 = this->ui->lineEditV1->text().toInt();
    uint32_t v2 = this->ui->lineEditV2->text().toInt();
    uint32_t v[2] = { v1, v2 };
    uint32_t k1 = this->ui->lineEditK1->text().toInt();
    uint32_t k2 = this->ui->lineEditK2->text().toInt();
    uint32_t k3 = this->ui->lineEditK3->text().toInt();
    uint32_t k4 = this->ui->lineEditK4->text().toInt();
    uint32_t k[4] = { k1, k2, k3, k4 };
    // Create TEA encryptor
    TeaEncryptor* encryptor = new TeaEncryptor();
    // Encrypt values
    encryptor->encrypt(&v[0], &k[0]);
    // Output results
    QString v1_encrypted = QString::number(v[0]);
    this->ui->lineEditEncryptedV1->setText(v1_encrypted);
    QString v2_encrypted = QString::number(v[1]);
    this->ui->lineEditEncryptedV2->setText(v2_encrypted);
}
