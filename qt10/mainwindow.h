#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void read_array (double *mas, int size, bool *error); // функция для чтения данных в таблице
    int size;   //переменная хранящая кол-во строк в таблице
    void write_array(double *mas, int size);//вывод массива
    bool isSorted(double *mas, int size);
    void sortQuick(double *mas, int size);
    bool sorted = false;    //переменная хранит значение сортировался ли массив
    bool searched = false;  //дает значение идут ли изменения в ячейках из-за поиска (истина-да/ложь-нет)
    bool randoming = false; //дает значение идут ли изменения в ячейках из-за функции рандом
    bool sorting = false; // дает значение идут ли изменения в ячейках из-за функций сортировки
    bool consting = false; //если фнкция константы вызывает изменения
    bool maxing = false; //показывает что изменения вызваны поиском наибольшего числа в массиве
    bool mining = false;  //показывает что изменения вызваны поиском наименьшего значения массива
    bool meaning = false;   //показывает что изменения вызваны поиском среднего арифмитического в массиве
    void tablment (QString *str);   //функция для ввода найденных строк в таблицу
    int size_of_count = 0;  //размер таблицы с найденными строками
    bool counting = false;  //показывает что проиходит ввод в таблицу найденных строк не пользователем
    bool dinamic_program;
    bool geometry_program;
private slots:
    void on_spin_row_value_tables_valueChanged(int arg1);

    void on_press_button_min_value_clicked();


    void on_table_with_values_array_itemChanged(QTableWidgetItem *item);

    void on_press_vutton_max_value_clicked();

    void on_press_button_arithmetic_mean_clicked();

    void on_press_button_hairbrush_clicked();

    void on_press_button_gnome_clicked();

    void on_press_button_bubble_clicked();

    void on_press_button_monkey_clicked();

    void on_press_button_fast_clicked();

    void on_press_button_rundom_clicked();

    void on_press_button_search_clicked();

    void on_press_button_delete_dublicates_clicked();

    void on_lineEdit_of_search_textEdited(const QString &arg1);

    void on_pushButton_const_clicked();

    void on_table_count_itemChanged(QTableWidgetItem *item);

    void on_button_work_with_dinamic_array_clicked(bool checked);


    void on_lineEdit_const_textEdited(const QString &arg1);

    void on_button_work_with_geom_clicked(bool checked);

    void on_pushButton_calculate_clicked();


    void on_pushButton_rare_value_clicked();


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
