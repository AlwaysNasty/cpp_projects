#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

// Структура для представления данных о сотруднике
struct Employee {
    int employee_id{};
    string full_name;
    string position;
    float salary{};
};

// Функция для вывода списка сотрудников
void printEmployeeList(Employee* employees, int num_employees) 
{
    cout << "Список сотрудников:" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "| " << setw(10) << "Таб. номер" << " | " << setw(30) << 
        "Ф.И.О." << " | " << setw(20) << "Должность" << " | " << setw(10) << "Оклад" << " |" << endl;
    cout << "--------------------------------------------------" << endl;

    for (int i = 0; i < num_employees; ++i) 
    {
        cout << "| " << setw(10) << employees[i].employee_id << " | " << 
            setw(30) << employees[i].full_name << " | " << setw(20) << employees[i].position << " | " << 
            setw(10) << fixed << setprecision(2) << employees[i].salary << " |" << endl;
    }
    cout << "--------------------------------------------------" << endl;
}

// Функция для сохранения списка сотрудников в файле
void saveEmployeeListToFile(Employee* employees, int num_employees, const string& filename) 
{
    ofstream file(filename);

    if (file.is_open()) {
        file << "Таб. номер,Ф.И.О.,Должность,Оклад" << endl;

        for (int i = 0; i < num_employees; ++i) {
            file << employees[i].employee_id << ","
                << employees[i].full_name << ","
                << employees[i].position << ","
                << fixed << setprecision(2) << employees[i].salary << endl;
        }
        cout << "Список сотрудников успешно сохранен в файле \"" << filename << "\". Файл готов для импорта в Excel." << endl;
    }
    else {
        cout << "Ошибка открытия файла для записи." << endl;
    }
    file.close();
}

int main() {
    setlocale(0, "russian");

    int num_employees;

    // Запрашиваем количество сотрудников
    cout << "Введите количество сотрудников: ";
    cin >> num_employees;

    // Выделяем память для массива структур
    Employee* employees = new Employee[num_employees];

    // Заполнение данных о сотрудниках
    for (int i = 0; i < num_employees; ++i) {
        cout << "\nВведите данные о сотруднике " << i + 1 << ":" << endl;
        cout << "Табельный номер: ";

        cin >> employees[i].employee_id;
        cin.ignore(); // Игнорируем перевод строки во входном буфере
        cout << "Ф.И.О.: ";
        getline(cin, employees[i].full_name);
        cout << "Должность: ";
        getline(cin, employees[i].position);
        cout << "Оклад: ";
        cin >> employees[i].salary;
    }

    // Вывод списка сотрудников
    printEmployeeList(employees, num_employees);

    // Сохранение списка сотрудников в файле
    string filename;
    cout << "Введите имя файла для сохранения списка сотрудников: ";
    cin >> filename;
    saveEmployeeListToFile(employees, num_employees, filename);

    // Освобождаем память
    delete[] employees;

    return 0;
}
