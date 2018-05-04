#ifndef CVPANEL_H
#define CVPANEL_H

#include <QWidget>
#include <QTreeWidgetItem>


#include <opencv/cv.h>
#include <opencv/cvwimage.h>

#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

#include <QImage>
#include "pictureview.h"
using namespace std;
using namespace cv;

namespace Ui {
class CVPanel;
}

class CVPanel : public QWidget
{
	Q_OBJECT

public:
	explicit CVPanel(QWidget *parent = 0);
	~CVPanel();

	void initWidgets(QString str);
	void addSubWindow(QWidget* w);

protected slots:

	void on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column);
	void on_treeWidget_itemClicked(QTreeWidgetItem *item, int column);
	void on_btnDo_clicked();

	void slotSetFile();
	void slotPreview();

	void on_functionList_clicked(const QModelIndex &index);

private:
	void process(QString cmd);

	void displayResult(Mat &m,QString title = "NoTitle");
	bool eventFilter(QObject *watched, QEvent *event);
	PictureView* _pictureView;

	Ui::CVPanel *ui;
};

#endif // CVPANEL_H