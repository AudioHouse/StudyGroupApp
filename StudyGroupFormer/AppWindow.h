#ifndef APPWINDOW_H
#define APPWINDOW_H

#include <QMainWindow>
#include "GroupInfo.h"



namespace Ui {
class AppWindow;
}

class LoginWindow;
class User;

class AppWindow : public QMainWindow
{
    Q_OBJECT

public:


    explicit AppWindow(LoginWindow *login_window);
    void addItemsToComboBox();
    ~AppWindow();
    void setSelectedCourseName();
    void setSelectedCourseNumber();
    void setDateOfStudyGroup();
    void setTimeOfStudyGroup();
    void setColumnsOfTable();
    void setGroupsVisibleInTable();
    void clearListOfAllGroups();
    void on_successful_login();

private slots:
    void on_createGroup_clicked();
    void on_getGroupInfo_clicked();
    void on_refreshButton_clicked();
    void on_listOfAllGroups_cellClicked(int row);

protected:
    Ui::AppWindow *ui;
    LoginWindow *main_login_window;
    GroupInfo *group_info_window;
    QString selectedCourseName;
    QString selectedCourseNumber;
    QString dateOfStudyGroup;
    QString timeOfStudyGroup;
    int m_rowCount;
    int m_columnCount;

signals:
    void sendGroupID(QString newID);
};

#endif // APPWINDOW_H
