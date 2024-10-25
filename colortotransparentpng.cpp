#include "colortotransparentpng.h"
#include "ui_colortotransparentpng.h"

ColorToTransparentPNG::ColorToTransparentPNG(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ColorToTransparentPNG)
{
    ui->setupUi(this);

}

ColorToTransparentPNG::~ColorToTransparentPNG()
{
    delete ui;
}

