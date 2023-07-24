#ifndef MAPKREATOR_H
#define MAPKREATOR_H

#include <QAbstractButton>
#include <QDialog>
#include <QFile>

namespace Ui {
class Mapkreator;
}

class Mapkreator : public QDialog
{
    Q_OBJECT

public:
    explicit Mapkreator(QWidget *parent = 0);
    ~Mapkreator();
    bool stisnen[20][7];

private slots:

    void on_pushButton_clicked(bool checked);

    void on_pushButton_2_clicked(bool checked);

    void on_pushButton_3_clicked(bool checked);

    void on_pushButton_4_clicked(bool checked);

    void on_pushButton_5_clicked(bool checked);

    void on_pushButton_6_clicked(bool checked);

    void on_pushButton_7_clicked(bool checked);

    void on_pushButton_8_clicked(bool checked);

    void on_pushButton_9_clicked(bool checked);

    void on_pushButton_10_clicked(bool checked);

    void on_pushButton_13_clicked(bool checked);

    void on_pushButton_16_clicked(bool checked);

    void on_pushButton_17_clicked(bool checked);

    void on_pushButton_11_clicked(bool checked);

    void on_pushButton_18_clicked(bool checked);

    void on_pushButton_20_clicked(bool checked);

    void on_pushButton_14_clicked(bool checked);

    void on_pushButton_19_clicked(bool checked);

    void on_pushButton_15_clicked(bool checked);

    void on_pushButton_12_clicked(bool checked);


    void on_buttonBox_clicked(QAbstractButton *button);

    void on_pushButton_27_clicked(bool checked);

    void on_pushButton_24_clicked(bool checked);

    void on_pushButton_36_clicked(bool checked);

    void on_pushButton_34_clicked(bool checked);

    void on_pushButton_21_clicked(bool checked);

    void on_pushButton_26_clicked(bool checked);

    void on_pushButton_28_clicked(bool checked);

    void on_pushButton_30_clicked(bool checked);

    void on_pushButton_32_clicked(bool checked);

    void on_pushButton_22_clicked(bool checked);

    void on_pushButton_29_clicked(bool checked);

    void on_pushButton_35_clicked(bool checked);

    void on_pushButton_33_clicked(bool checked);

    void on_pushButton_23_clicked(bool checked);

    void on_pushButton_40_clicked(bool checked);

    void on_pushButton_37_clicked(bool checked);

    void on_pushButton_38_clicked(bool checked);

    void on_pushButton_39_clicked(bool checked);

    void on_pushButton_25_clicked(bool checked);

    void on_pushButton_31_clicked(bool checked);

    void on_pushButton_52_clicked(bool checked);

    void on_pushButton_56_clicked(bool checked);

    void on_pushButton_54_clicked(bool checked);

    void on_pushButton_41_clicked(bool checked);

    void on_pushButton_46_clicked(bool checked);

    void on_pushButton_48_clicked(bool checked);

    void on_pushButton_50_clicked(bool checked);

    void on_pushButton_42_clicked(bool checked);

    void on_pushButton_49_clicked(bool checked);

    void on_pushButton_55_clicked(bool checked);

    void on_pushButton_53_clicked(bool checked);

    void on_pushButton_43_clicked(bool checked);

    void on_pushButton_60_clicked(bool checked);

    void on_pushButton_57_clicked(bool checked);

    void on_pushButton_58_clicked(bool checked);

    void on_pushButton_59_clicked(bool checked);

    void on_pushButton_45_clicked(bool checked);

    void on_pushButton_51_clicked(bool checked);

    void on_pushButton_44_clicked(bool checked);

    void on_pushButton_47_clicked(bool checked);

    void on_pushButton_72_clicked(bool checked);

    void on_pushButton_76_clicked(bool checked);

    void on_pushButton_74_clicked(bool checked);

    void on_pushButton_61_clicked(bool checked);

    void on_pushButton_66_clicked(bool checked);

    void on_pushButton_68_clicked(bool checked);

    void on_pushButton_70_clicked(bool checked);

    void on_pushButton_62_clicked(bool checked);

    void on_pushButton_69_clicked(bool checked);

    void on_pushButton_75_clicked(bool checked);

    void on_pushButton_73_clicked(bool checked);

    void on_pushButton_63_clicked(bool checked);

    void on_pushButton_80_clicked(bool checked);

    void on_pushButton_77_clicked(bool checked);

    void on_pushButton_78_clicked(bool checked);

    void on_pushButton_79_clicked(bool checked);

    void on_pushButton_65_clicked(bool checked);

    void on_pushButton_71_clicked(bool checked);

    void on_pushButton_64_clicked(bool checked);

    void on_pushButton_67_clicked(bool checked);

    void on_pushButton_92_clicked(bool checked);

    void on_pushButton_96_clicked(bool checked);

    void on_pushButton_94_clicked(bool checked);

    void on_pushButton_81_clicked(bool checked);

    void on_pushButton_86_clicked(bool checked);

    void on_pushButton_88_clicked(bool checked);

    void on_pushButton_90_clicked(bool checked);

    void on_pushButton_82_clicked(bool checked);

    void on_pushButton_89_clicked(bool checked);

    void on_pushButton_95_clicked(bool checked);

    void on_pushButton_93_clicked(bool checked);

    void on_pushButton_83_clicked(bool checked);

    void on_pushButton_100_clicked(bool checked);

    void on_pushButton_97_clicked(bool checked);

    void on_pushButton_98_clicked(bool checked);

    void on_pushButton_99_clicked(bool checked);

    void on_pushButton_85_clicked(bool checked);

    void on_pushButton_91_clicked(bool checked);

    void on_pushButton_84_clicked(bool checked);

    void on_pushButton_87_clicked(bool checked);

    void on_pushButton_112_clicked(bool checked);

    void on_pushButton_116_clicked(bool checked);

    void on_pushButton_114_clicked(bool checked);

    void on_pushButton_101_clicked(bool checked);

    void on_pushButton_106_clicked(bool checked);

    void on_pushButton_108_clicked(bool checked);

    void on_pushButton_110_clicked(bool checked);

    void on_pushButton_102_clicked(bool checked);

    void on_pushButton_109_clicked(bool checked);

    void on_pushButton_115_clicked(bool checked);

    void on_pushButton_113_clicked(bool checked);

    void on_pushButton_103_clicked(bool checked);

    void on_pushButton_120_clicked(bool checked);

    void on_pushButton_117_clicked(bool checked);

    void on_pushButton_118_clicked(bool checked);

    void on_pushButton_119_clicked(bool checked);

    void on_pushButton_105_clicked(bool checked);

    void on_pushButton_111_clicked(bool checked);

    void on_pushButton_104_clicked(bool checked);

    void on_pushButton_107_clicked(bool checked);

    void on_pushButton_132_clicked(bool checked);

    void on_pushButton_136_clicked(bool checked);

    void on_pushButton_134_clicked(bool checked);

    void on_pushButton_121_clicked(bool checked);

    void on_pushButton_126_clicked(bool checked);

    void on_pushButton_128_clicked(bool checked);

    void on_pushButton_130_clicked(bool checked);

    void on_pushButton_122_clicked(bool checked);

    void on_pushButton_129_clicked(bool checked);

    void on_pushButton_135_clicked(bool checked);

    void on_pushButton_133_clicked(bool checked);

    void on_pushButton_123_clicked(bool checked);

    void on_pushButton_140_clicked(bool checked);

    void on_pushButton_137_clicked(bool checked);

    void on_pushButton_138_clicked(bool checked);

    void on_pushButton_139_clicked(bool checked);

    void on_pushButton_125_clicked(bool checked);

    void on_pushButton_131_clicked(bool checked);

    void on_pushButton_124_clicked(bool checked);

    void on_pushButton_127_clicked(bool checked);

private:
    Ui::Mapkreator *ui;
};

#endif // MAPKREATOR_H
