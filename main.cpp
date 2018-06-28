#include <QCoreApplication>
#include <QDebug>
#include <QtCore>
#include <QtMath>

class SomeMy
{
public:
    void isNAma(int n1)
    {
        QVector<int>ve1;
        int k1=0, j1=0, si1=0;
        for(int i1=1;i1<=n1;i1++)
        {
            if(n1%i1 == 0)
            {
                si1++;
                ve1.resize(si1);
                ve1[j1] = i1;
                j1++;
                k1++;
            }
        }
        if(k1 ==3)
        {   qDebug() << n1 << "is an amazing N";    }
        else
        {   qDebug() << n1 << "has divisors... " << ve1;    }
    }



};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qsrand(time(NULL));
    SomeMy s1;

    s1.isNAma(15);
    s1.isNAma(4);
    s1.isNAma(90);

    for(int i1=1;i1<20;i1++)
    {

    }
    return a.exec();
}
