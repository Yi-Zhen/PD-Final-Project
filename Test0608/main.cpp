#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsView>
#include <QGraphicsRectItem>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene* scene = new QGraphicsScene();

    QGraphicsRectItem* rec = new QGraphicsRectItem();
    rec->setRect(0,0, 100, 100);

    scene->addItem(rec);

    QGraphicsView* view = new QGraphicsView(scene);
    view->show();

    return a.exec();
}
