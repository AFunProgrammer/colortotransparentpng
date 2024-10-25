#ifndef COLORTOTRANSPARENTPNG_H
#define COLORTOTRANSPARENTPNG_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ColorToTransparentPNG; }
QT_END_NAMESPACE

class ColorToTransparentPNG : public QMainWindow
{
    Q_OBJECT

public:
    ColorToTransparentPNG(QWidget *parent = nullptr);
    ~ColorToTransparentPNG();

private:
    Ui::ColorToTransparentPNG *ui;
};
#endif // COLORTOTRANSPARENTPNG_H
