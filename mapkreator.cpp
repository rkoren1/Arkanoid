#include "mapkreator.h"
#include "ui_mapkreator.h"
#include <menu.h>
#include <QDebug>
extern menu *meni;

Mapkreator::Mapkreator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Mapkreator)
{
    ui->setupUi(this);
    for(int i=0;i<20;i++)
        for(int j = 0;j<7;j++)
            stisnen[i][j]= false;
}

Mapkreator::~Mapkreator()
{
    delete ui;
}



void Mapkreator::on_pushButton_clicked(bool checked)
{
    if(checked)
    {
        stisnen[0][0] = true;
    }
    else
    {
        stisnen[0][0] = false;
    }

}

void Mapkreator::on_pushButton_2_clicked(bool checked)
{
    if(checked)
    {
        stisnen[1][0] = true;

    }
    else
    {
        stisnen[1][0] = false;

    }
}

void Mapkreator::on_pushButton_3_clicked(bool checked)
{
    if(checked)
    {
        stisnen[2][0] = true;
    }
    else
    {
        stisnen[2][0] = false;
    }
}

void Mapkreator::on_pushButton_4_clicked(bool checked)
{
    if(checked)
    {
        stisnen[3][0] = true;
    }
    else
    {
        stisnen[3][0] = false;
    }
}

void Mapkreator::on_pushButton_5_clicked(bool checked)
{
    if(checked)
    {
        stisnen[4][0] = true;
    }
    else
    {
        stisnen[4][0] = false;
    }
}

void Mapkreator::on_pushButton_6_clicked(bool checked)
{
    if(checked)
    {
        stisnen[5][0] = true;
    }
    else
    {
        stisnen[5][0] = false;
    }
}

void Mapkreator::on_pushButton_7_clicked(bool checked)
{
    if(checked)
    {
        stisnen[6][0] = true;
    }
    else
    {
        stisnen[6][0] = false;
    }
}

void Mapkreator::on_pushButton_8_clicked(bool checked)
{
    if(checked)
    {
        stisnen[7][0] = true;
    }
    else
    {
        stisnen[7][0] = false;
    }
}

void Mapkreator::on_pushButton_9_clicked(bool checked)
{
    if(checked)
    {
        stisnen[8][0] = true;
    }
    else
    {
        stisnen[8][0] = false;
    }
}

void Mapkreator::on_pushButton_10_clicked(bool checked)
{
    if(checked)
    {
        stisnen[9][0] = true;
    }
    else
    {
        stisnen[9][0] = false;
    }
}

void Mapkreator::on_pushButton_13_clicked(bool checked)
{
    if(checked)
    {
        stisnen[10][0] = true;
    }
    else
    {
        stisnen[10][0] = false;
    }
}

void Mapkreator::on_pushButton_16_clicked(bool checked)
{
    if(checked)
    {
        stisnen[11][0] = true;
    }
    else
    {
        stisnen[11][0] = false;
    }
}

void Mapkreator::on_pushButton_17_clicked(bool checked)
{
    if(checked)
    {
        stisnen[12][0] = true;
    }
    else
    {
        stisnen[12][0] = false;
    }
}

void Mapkreator::on_pushButton_11_clicked(bool checked)
{
    if(checked)
    {
        stisnen[13][0] = true;
    }
    else
    {
        stisnen[13][0] = false;
    }
}

void Mapkreator::on_pushButton_18_clicked(bool checked)
{
    if(checked)
    {
        stisnen[14][0] = true;
    }
    else
    {
        stisnen[14][0] = false;
    }
}

void Mapkreator::on_pushButton_20_clicked(bool checked)
{
    if(checked)
    {
        stisnen[15][0] = true;
    }
    else
    {
        stisnen[15][0] = false;
    }
}

void Mapkreator::on_pushButton_14_clicked(bool checked)
{
    if(checked)
    {
        stisnen[16][0] = true;
    }
    else
    {
        stisnen[16][0] = false;
    }
}

void Mapkreator::on_pushButton_19_clicked(bool checked)
{
    if(checked)
    {
        stisnen[17][0] = true;
    }
    else
    {
        stisnen[17][0] = false;
    }
}

void Mapkreator::on_pushButton_15_clicked(bool checked)
{
    if(checked)
    {
        stisnen[18][0] = true;
    }
    else
    {
        stisnen[18][0] = false;
    }
}

void Mapkreator::on_pushButton_12_clicked(bool checked)
{
    if(checked)
    {
        stisnen[19][0] = true;
    }
    else
    {
        stisnen[19][0] = false;
    }
}


void Mapkreator::on_buttonBox_clicked(QAbstractButton *button)
{

    QFile file("myLevels.txt");
        if(!file.open(QIODevice::WriteOnly|QIODevice::Text))
        {
            qDebug()<<"error while writting";
        }
        QTextStream out(&file);
        for(int j=0;j<=7;j++)
        for(int i=0;i<20;i++)

            {
                if(stisnen[i][j] == 1)
                out<<j<<' '<<i<<endl;
            }
        //out<<'FERTIK';
        file.close();



        delete this;
        meni->show();



}

void Mapkreator::on_pushButton_24_clicked(bool checked)
{
    if(checked)
    {
        stisnen[18][1] = true;
    }
    else
    {
        stisnen[18][1] = false;
    }
}

void Mapkreator::on_pushButton_36_clicked(bool checked)
{
    if(checked)
    {
        stisnen[1][1] = true;
    }
    else
    {
        stisnen[1][1] = false;
    }
}

void Mapkreator::on_pushButton_34_clicked(bool checked)
{
    if(checked)
    {
        stisnen[2][1] = true;
    }
    else
    {
        stisnen[2][1] = false;
    }
}

void Mapkreator::on_pushButton_21_clicked(bool checked)
{
    if(checked)
    {
        stisnen[3][1] = true;
    }
    else
    {
        stisnen[3][1] = false;
    }
}

void Mapkreator::on_pushButton_26_clicked(bool checked)
{
    if(checked)
    {
        stisnen[4][1] = true;
    }
    else
    {
        stisnen[4][1] = false;
    }
}

void Mapkreator::on_pushButton_28_clicked(bool checked)
{
    if(checked)
    {
        stisnen[5][1] = true;
    }
    else
    {
        stisnen[5][1] = false;
    }
}

void Mapkreator::on_pushButton_30_clicked(bool checked)
{
    if(checked)
    {
        stisnen[6][1] = true;
    }
    else
    {
        stisnen[6][1] = false;
    }
}

void Mapkreator::on_pushButton_32_clicked(bool checked)
{
    if(checked)
    {
        stisnen[0][1] = true;
    }
    else
    {
        stisnen[0][1] = false;
    }
}

void Mapkreator::on_pushButton_22_clicked(bool checked)
{
    if(checked)
    {
        stisnen[7][1] = true;
    }
    else
    {
        stisnen[7][1] = false;
    }
}

void Mapkreator::on_pushButton_29_clicked(bool checked)
{
    if(checked)
    {
        stisnen[8][1] = true;
    }
    else
    {
        stisnen[8][1] = false;
    }
}

void Mapkreator::on_pushButton_35_clicked(bool checked)
{
    if(checked)
    {
        stisnen[9][1] = true;
    }
    else
    {
        stisnen[9][1] = false;
    }
}

void Mapkreator::on_pushButton_33_clicked(bool checked)
{
    if(checked)
    {
        stisnen[10][1] = true;
    }
    else
    {
        stisnen[10][1] = false;
    }
}

void Mapkreator::on_pushButton_23_clicked(bool checked)
{
    if(checked)
    {
        stisnen[11][1] = true;
    }
    else
    {
        stisnen[11][1] = false;
    }
}

void Mapkreator::on_pushButton_40_clicked(bool checked)
{
    if(checked)
    {
        stisnen[12][1] = true;
    }
    else
    {
        stisnen[12][1] = false;
    }
}

void Mapkreator::on_pushButton_37_clicked(bool checked)
{
    if(checked)
    {
        stisnen[13][1] = true;
    }
    else
    {
        stisnen[13][1] = false;
    }
}

void Mapkreator::on_pushButton_38_clicked(bool checked)
{
    if(checked)
    {
        stisnen[14][1] = true;
    }
    else
    {
        stisnen[14][1] = false;
    }
}

void Mapkreator::on_pushButton_39_clicked(bool checked)
{
    if(checked)
    {
        stisnen[15][1] = true;
    }
    else
    {
        stisnen[15][1] = false;
    }
}

void Mapkreator::on_pushButton_25_clicked(bool checked)
{
    if(checked)
    {
        stisnen[16][1] = true;
    }
    else
    {
        stisnen[16][1] = false;
    }
}

void Mapkreator::on_pushButton_31_clicked(bool checked)
{
    if(checked)
    {
        stisnen[17][1] = true;
    }
    else
    {
        stisnen[17][1] = false;
    }
}

void Mapkreator::on_pushButton_27_clicked(bool checked)
{
    if(checked)
    {
        stisnen[19][1] = true;
    }
    else
    {
        stisnen[19][1] = false;
    }
}

void Mapkreator::on_pushButton_52_clicked(bool checked)
{
    if(checked)
    {
        stisnen[0][2] = true;
    }
    else
    {
        stisnen[0][2] = false;
    }
}

void Mapkreator::on_pushButton_56_clicked(bool checked)
{
    if(checked)
    {
        stisnen[1][2] = true;
    }
    else
    {
        stisnen[1][2] = false;
    }
}

void Mapkreator::on_pushButton_54_clicked(bool checked)
{
    if(checked)
    {
        stisnen[2][2] = true;
    }
    else
    {
        stisnen[2][2] = false;
    }
}

void Mapkreator::on_pushButton_41_clicked(bool checked)
{
    if(checked)
    {
        stisnen[3][2] = true;
    }
    else
    {
        stisnen[3][2] = false;
    }
}

void Mapkreator::on_pushButton_46_clicked(bool checked)
{
    if(checked)
    {
        stisnen[4][2] = true;
    }
    else
    {
        stisnen[4][2] = false;
    }
}

void Mapkreator::on_pushButton_48_clicked(bool checked)
{
    if(checked)
    {
        stisnen[5][2] = true;
    }
    else
    {
        stisnen[5][2] = false;
    }
}

void Mapkreator::on_pushButton_50_clicked(bool checked)
{
    if(checked)
    {
        stisnen[6][2] = true;
    }
    else
    {
        stisnen[6][2] = false;
    }
}

void Mapkreator::on_pushButton_42_clicked(bool checked)
{
    if(checked)
    {
        stisnen[7][2] = true;
    }
    else
    {
        stisnen[7][2] = false;
    }
}

void Mapkreator::on_pushButton_49_clicked(bool checked)
{
    if(checked)
    {
        stisnen[8][2] = true;
    }
    else
    {
        stisnen[8][2] = false;
    }
}

void Mapkreator::on_pushButton_55_clicked(bool checked)
{
    if(checked)
    {
        stisnen[9][2] = true;
    }
    else
    {
        stisnen[9][2] = false;
    }
}

void Mapkreator::on_pushButton_53_clicked(bool checked)
{
    if(checked)
    {
        stisnen[10][2] = true;
    }
    else
    {
        stisnen[10][2] = false;
    }
}

void Mapkreator::on_pushButton_43_clicked(bool checked)
{
    if(checked)
    {
        stisnen[11][2] = true;
    }
    else
    {
        stisnen[11][2] = false;
    }
}

void Mapkreator::on_pushButton_60_clicked(bool checked)
{
    if(checked)
    {
        stisnen[12][2] = true;
    }
    else
    {
        stisnen[12][2] = false;
    }
}

void Mapkreator::on_pushButton_57_clicked(bool checked)
{
    if(checked)
    {
        stisnen[13][2] = true;
    }
    else
    {
        stisnen[13][2] = false;
    }
}

void Mapkreator::on_pushButton_58_clicked(bool checked)
{
    if(checked)
    {
        stisnen[14][2] = true;
    }
    else
    {
        stisnen[14][2] = false;
    }
}

void Mapkreator::on_pushButton_59_clicked(bool checked)
{
    if(checked)
    {
        stisnen[15][2] = true;
    }
    else
    {
        stisnen[15][2] = false;
    }
}

void Mapkreator::on_pushButton_45_clicked(bool checked)
{
    if(checked)
    {
        stisnen[16][2] = true;
    }
    else
    {
        stisnen[16][2] = false;
    }
}

void Mapkreator::on_pushButton_51_clicked(bool checked)
{
    if(checked)
    {
        stisnen[17][2] = true;
    }
    else
    {
        stisnen[17][2] = false;
    }
}

void Mapkreator::on_pushButton_44_clicked(bool checked)
{
    if(checked)
    {
        stisnen[18][2] = true;
    }
    else
    {
        stisnen[18][2] = false;
    }
}

void Mapkreator::on_pushButton_47_clicked(bool checked)
{
    if(checked)
    {
        stisnen[19][2] = true;
    }
    else
    {
        stisnen[19][2] = false;
    }
}

void Mapkreator::on_pushButton_72_clicked(bool checked)
{
    if(checked)
    {
        stisnen[0][3] = true;
    }
    else
    {
        stisnen[0][3] = false;
    }
}

void Mapkreator::on_pushButton_76_clicked(bool checked)
{
    if(checked)
    {
        stisnen[1][3] = true;
    }
    else
    {
        stisnen[1][3] = false;
    }
}

void Mapkreator::on_pushButton_74_clicked(bool checked)
{
    if(checked)
    {
        stisnen[2][3] = true;
    }
    else
    {
        stisnen[2][3] = false;
    }
}

void Mapkreator::on_pushButton_61_clicked(bool checked)
{
    if(checked)
    {
        stisnen[3][3] = true;
    }
    else
    {
        stisnen[3][3] = false;
    }
}

void Mapkreator::on_pushButton_66_clicked(bool checked)
{
    if(checked)
    {
        stisnen[4][3] = true;
    }
    else
    {
        stisnen[4][3] = false;
    }
}

void Mapkreator::on_pushButton_68_clicked(bool checked)
{
    if(checked)
    {
        stisnen[5][3] = true;
    }
    else
    {
        stisnen[5][3] = false;
    }
}

void Mapkreator::on_pushButton_70_clicked(bool checked)
{
    if(checked)
    {
        stisnen[6][3] = true;
    }
    else
    {
        stisnen[6][3] = false;
    }
}

void Mapkreator::on_pushButton_62_clicked(bool checked)
{
    if(checked)
    {
        stisnen[7][3] = true;
    }
    else
    {
        stisnen[7][3] = false;
    }
}

void Mapkreator::on_pushButton_69_clicked(bool checked)
{
    if(checked)
    {
        stisnen[8][3] = true;
    }
    else
    {
        stisnen[8][3] = false;
    }
}

void Mapkreator::on_pushButton_75_clicked(bool checked)
{
    if(checked)
    {
        stisnen[9][3] = true;
    }
    else
    {
        stisnen[9][3] = false;
    }
}

void Mapkreator::on_pushButton_73_clicked(bool checked)
{
    if(checked)
    {
        stisnen[10][3] = true;
    }
    else
    {
        stisnen[10][3] = false;
    }
}

void Mapkreator::on_pushButton_63_clicked(bool checked)
{
    if(checked)
    {
        stisnen[11][3] = true;
    }
    else
    {
        stisnen[11][3] = false;
    }
}

void Mapkreator::on_pushButton_80_clicked(bool checked)
{
    if(checked)
    {
        stisnen[12][3] = true;
    }
    else
    {
        stisnen[12][3] = false;
    }
}

void Mapkreator::on_pushButton_77_clicked(bool checked)
{
    if(checked)
    {
        stisnen[13][3] = true;
    }
    else
    {
        stisnen[13][3] = false;
    }
}

void Mapkreator::on_pushButton_78_clicked(bool checked)
{
    if(checked)
    {
        stisnen[14][3] = true;
    }
    else
    {
        stisnen[14][3] = false;
    }
}

void Mapkreator::on_pushButton_79_clicked(bool checked)
{
    if(checked)
    {
        stisnen[15][3] = true;
    }
    else
    {
        stisnen[15][3] = false;
    }
}

void Mapkreator::on_pushButton_65_clicked(bool checked)
{
    if(checked)
    {
        stisnen[16][3] = true;
    }
    else
    {
        stisnen[16][3] = false;
    }
}

void Mapkreator::on_pushButton_71_clicked(bool checked)
{
    if(checked)
    {
        stisnen[17][3] = true;
    }
    else
    {
        stisnen[17][3] = false;
    }
}

void Mapkreator::on_pushButton_64_clicked(bool checked)
{
    if(checked)
    {
        stisnen[18][3] = true;
    }
    else
    {
        stisnen[18][3] = false;
    }
}

void Mapkreator::on_pushButton_67_clicked(bool checked)
{
    if(checked)
    {
        stisnen[19][3] = true;
    }
    else
    {
        stisnen[19][3] = false;
    }
}

void Mapkreator::on_pushButton_92_clicked(bool checked)
{
    if(checked)
    {
        stisnen[0][4] = true;
    }
    else
    {
        stisnen[0][4] = false;
    }
}

void Mapkreator::on_pushButton_96_clicked(bool checked)
{
    if(checked)
    {
        stisnen[1][4] = true;
    }
    else
    {
        stisnen[1][4] = false;
    }
}

void Mapkreator::on_pushButton_94_clicked(bool checked)
{
    if(checked)
    {
        stisnen[2][4] = true;
    }
    else
    {
        stisnen[2][4] = false;
    }
}

void Mapkreator::on_pushButton_81_clicked(bool checked)
{
    if(checked)
    {
        stisnen[3][4] = true;
    }
    else
    {
        stisnen[3][4] = false;
    }
}

void Mapkreator::on_pushButton_86_clicked(bool checked)
{
    if(checked)
    {
        stisnen[4][4] = true;
    }
    else
    {
        stisnen[4][4] = false;
    }
}

void Mapkreator::on_pushButton_88_clicked(bool checked)
{
    if(checked)
    {
        stisnen[5][4] = true;
    }
    else
    {
        stisnen[5][4] = false;
    }
}

void Mapkreator::on_pushButton_90_clicked(bool checked)
{
    if(checked)
    {
        stisnen[6][4] = true;
    }
    else
    {
        stisnen[6][4] = false;
    }
}

void Mapkreator::on_pushButton_82_clicked(bool checked)
{
    if(checked)
    {
        stisnen[7][4] = true;
    }
    else
    {
        stisnen[7][4] = false;
    }
}

void Mapkreator::on_pushButton_89_clicked(bool checked)
{
    if(checked)
    {
        stisnen[8][4] = true;
    }
    else
    {
        stisnen[8][4] = false;
    }
}

void Mapkreator::on_pushButton_95_clicked(bool checked)
{
    if(checked)
    {
        stisnen[9][4] = true;
    }
    else
    {
        stisnen[9][4] = false;
    }
}

void Mapkreator::on_pushButton_93_clicked(bool checked)
{
    if(checked)
    {
        stisnen[10][4] = true;
    }
    else
    {
        stisnen[10][4] = false;
    }
}

void Mapkreator::on_pushButton_83_clicked(bool checked)
{
    if(checked)
    {
        stisnen[11][4] = true;
    }
    else
    {
        stisnen[11][4] = false;
    }
}

void Mapkreator::on_pushButton_100_clicked(bool checked)
{
    if(checked)
    {
        stisnen[12][4] = true;
    }
    else
    {
        stisnen[12][4] = false;
    }
}

void Mapkreator::on_pushButton_97_clicked(bool checked)
{
    if(checked)
    {
        stisnen[13][4] = true;
    }
    else
    {
        stisnen[13][4] = false;
    }
}

void Mapkreator::on_pushButton_98_clicked(bool checked)
{
    if(checked)
    {
        stisnen[14][4] = true;
    }
    else
    {
        stisnen[14][4] = false;
    }
}

void Mapkreator::on_pushButton_99_clicked(bool checked)
{
    if(checked)
    {
        stisnen[15][4] = true;
    }
    else
    {
        stisnen[15][4] = false;
    }
}

void Mapkreator::on_pushButton_85_clicked(bool checked)
{
    if(checked)
    {
        stisnen[16][4] = true;
    }
    else
    {
        stisnen[16][4] = false;
    }
}

void Mapkreator::on_pushButton_91_clicked(bool checked)
{
    if(checked)
    {
        stisnen[17][4] = true;
    }
    else
    {
        stisnen[17][4] = false;
    }
}

void Mapkreator::on_pushButton_84_clicked(bool checked)
{
    if(checked)
    {
        stisnen[18][4] = true;
    }
    else
    {
        stisnen[18][4] = false;
    }
}

void Mapkreator::on_pushButton_87_clicked(bool checked)
{
    if(checked)
    {
        stisnen[19][4] = true;
    }
    else
    {
        stisnen[19][4] = false;
    }
}

void Mapkreator::on_pushButton_112_clicked(bool checked)
{
    if(checked)
    {
        stisnen[0][5] = true;
    }
    else
    {
        stisnen[0][5] = false;
    }
}

void Mapkreator::on_pushButton_116_clicked(bool checked)
{
    if(checked)
    {
        stisnen[1][5] = true;
    }
    else
    {
        stisnen[1][5] = false;
    }
}

void Mapkreator::on_pushButton_114_clicked(bool checked)
{
    if(checked)
    {
        stisnen[2][5] = true;
    }
    else
    {
        stisnen[2][5] = false;
    }
}

void Mapkreator::on_pushButton_101_clicked(bool checked)
{
    if(checked)
    {
        stisnen[3][5] = true;
    }
    else
    {
        stisnen[3][5] = false;
    }
}

void Mapkreator::on_pushButton_106_clicked(bool checked)
{
    if(checked)
    {
        stisnen[4][5] = true;
    }
    else
    {
        stisnen[4][5] = false;
    }
}

void Mapkreator::on_pushButton_108_clicked(bool checked)
{
    if(checked)
    {
        stisnen[5][5] = true;
    }
    else
    {
        stisnen[5][5] = false;
    }
}

void Mapkreator::on_pushButton_110_clicked(bool checked)
{
    if(checked)
    {
        stisnen[6][5] = true;
    }
    else
    {
        stisnen[6][5] = false;
    }
}

void Mapkreator::on_pushButton_102_clicked(bool checked)
{
    if(checked)
    {
        stisnen[7][5] = true;
    }
    else
    {
        stisnen[7][5] = false;
    }
}

void Mapkreator::on_pushButton_109_clicked(bool checked)
{
    if(checked)
    {
        stisnen[8][5] = true;
    }
    else
    {
        stisnen[8][5] = false;
    }
}

void Mapkreator::on_pushButton_115_clicked(bool checked)
{
    if(checked)
    {
        stisnen[9][5] = true;
    }
    else
    {
        stisnen[9][5] = false;
    }
}

void Mapkreator::on_pushButton_113_clicked(bool checked)
{
    if(checked)
    {
        stisnen[10][5] = true;
    }
    else
    {
        stisnen[10][5] = false;
    }
}

void Mapkreator::on_pushButton_103_clicked(bool checked)
{
    if(checked)
    {
        stisnen[11][5] = true;
    }
    else
    {
        stisnen[11][5] = false;
    }
}

void Mapkreator::on_pushButton_120_clicked(bool checked)
{
    if(checked)
    {
        stisnen[12][5] = true;
    }
    else
    {
        stisnen[12][5] = false;
    }
}

void Mapkreator::on_pushButton_117_clicked(bool checked)
{
    if(checked)
    {
        stisnen[13][5] = true;
    }
    else
    {
        stisnen[13][5] = false;
    }
}

void Mapkreator::on_pushButton_118_clicked(bool checked)
{
    if(checked)
    {
        stisnen[14][5] = true;
    }
    else
    {
        stisnen[14][5] = false;
    }
}

void Mapkreator::on_pushButton_119_clicked(bool checked)
{
    if(checked)
    {
        stisnen[15][5] = true;
    }
    else
    {
        stisnen[15][5] = false;
    }
}

void Mapkreator::on_pushButton_105_clicked(bool checked)
{
    if(checked)
    {
        stisnen[16][5] = true;
    }
    else
    {
        stisnen[16][5] = false;
    }
}

void Mapkreator::on_pushButton_111_clicked(bool checked)
{
    if(checked)
    {
        stisnen[17][5] = true;
    }
    else
    {
        stisnen[17][5] = false;
    }
}

void Mapkreator::on_pushButton_104_clicked(bool checked)
{
    if(checked)
    {
        stisnen[18][5] = true;
    }
    else
    {
        stisnen[18][5] = false;
    }
}

void Mapkreator::on_pushButton_107_clicked(bool checked)
{
    if(checked)
    {
        stisnen[19][5] = true;
    }
    else
    {
        stisnen[19][5] = false;
    }
}

void Mapkreator::on_pushButton_132_clicked(bool checked)
{
    if(checked)
    {
        stisnen[0][6] = true;
    }
    else
    {
        stisnen[0][6] = false;
    }
}

void Mapkreator::on_pushButton_136_clicked(bool checked)
{
    if(checked)
    {
        stisnen[1][6] = true;
    }
    else
    {
        stisnen[1][6] = false;
    }
}

void Mapkreator::on_pushButton_134_clicked(bool checked)
{
    if(checked)
    {
        stisnen[2][6] = true;
    }
    else
    {
        stisnen[2][6] = false;
    }
}

void Mapkreator::on_pushButton_121_clicked(bool checked)
{
    if(checked)
    {
        stisnen[3][6] = true;
    }
    else
    {
        stisnen[3][6] = false;
    }
}

void Mapkreator::on_pushButton_126_clicked(bool checked)
{
    if(checked)
    {
        stisnen[4][6] = true;
    }
    else
    {
        stisnen[4][6] = false;
    }
}

void Mapkreator::on_pushButton_128_clicked(bool checked)
{
    if(checked)
    {
        stisnen[5][6] = true;
    }
    else
    {
        stisnen[5][6] = false;
    }
}

void Mapkreator::on_pushButton_130_clicked(bool checked)
{
    if(checked)
    {
        stisnen[6][6] = true;
    }
    else
    {
        stisnen[6][6] = false;
    }
}

void Mapkreator::on_pushButton_122_clicked(bool checked)
{
    if(checked)
    {
        stisnen[7][6] = true;
    }
    else
    {
        stisnen[7][6] = false;
    }
}

void Mapkreator::on_pushButton_129_clicked(bool checked)
{
    if(checked)
    {
        stisnen[8][6] = true;
    }
    else
    {
        stisnen[8][6] = false;
    }
}

void Mapkreator::on_pushButton_135_clicked(bool checked)
{
    if(checked)
    {
        stisnen[9][6] = true;
    }
    else
    {
        stisnen[9][6] = false;
    }
}

void Mapkreator::on_pushButton_133_clicked(bool checked)
{
    if(checked)
    {
        stisnen[10][6] = true;
    }
    else
    {
        stisnen[10][6] = false;
    }
}

void Mapkreator::on_pushButton_123_clicked(bool checked)
{
    if(checked)
    {
        stisnen[11][6] = true;
    }
    else
    {
        stisnen[11][6] = false;
    }
}

void Mapkreator::on_pushButton_140_clicked(bool checked)
{
    if(checked)
    {
        stisnen[12][6] = true;
    }
    else
    {
        stisnen[12][6] = false;
    }
}

void Mapkreator::on_pushButton_137_clicked(bool checked)
{
    if(checked)
    {
        stisnen[13][6] = true;
    }
    else
    {
        stisnen[13][6] = false;
    }
}

void Mapkreator::on_pushButton_138_clicked(bool checked)
{
    if(checked)
    {
        stisnen[14][6] = true;
    }
    else
    {
        stisnen[14][6] = false;
    }
}

void Mapkreator::on_pushButton_139_clicked(bool checked)
{
    if(checked)
    {
        stisnen[15][6] = true;
    }
    else
    {
        stisnen[15][6] = false;
    }
}

void Mapkreator::on_pushButton_125_clicked(bool checked)
{
    if(checked)
    {
        stisnen[16][6] = true;
    }
    else
    {
        stisnen[16][6] = false;
    }
}

void Mapkreator::on_pushButton_131_clicked(bool checked)
{
    if(checked)
    {
        stisnen[17][6] = true;
    }
    else
    {
        stisnen[17][6] = false;
    }
}

void Mapkreator::on_pushButton_124_clicked(bool checked)
{
    if(checked)
    {
        stisnen[18][6] = true;
    }
    else
    {
        stisnen[18][6] = false;
    }
}

void Mapkreator::on_pushButton_127_clicked(bool checked)
{
    if(checked)
    {
        stisnen[19][6] = true;
    }
    else
    {
        stisnen[19][6] = false;
    }
}
