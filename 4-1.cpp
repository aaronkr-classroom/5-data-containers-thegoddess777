// chp4ex0.cpp
// �߰����, �⸻���, �׸��� ���� ���� ��� �ް�
// ������ ��� ��� ������ ����ϱ�.
#include <algorithm>
#include <ios>
#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include "grade.h"
#include "Student_info.h"

using namespace std;

int main()
{
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0;

    //�л� �̸��� ��� ������ �о� �����ϰ� ���� �� �̸��� ã��.
    while (read(cin, record)) {
        int maxlen;
        Student_info s;
        max(s.name.size(), maxlen);
        students.push_back(record);
    }

    // �л� ������ ���ĺ� ������ ����
    sort(students.begin(), students.end(), compare);

    for (vector<Student_info>::size_type i = 0; i != students.size(); ++i) {
        // �̸��� ������ ������ �����Ͽ� maxlen + 1���� ���ڸ� ���
        cout << students[i].name << string(maxlen + 1 - students[i].name.size(), ' ');

        // ���� ������ ����� ����
        try {
            double final_grade = grade(students[i]);
            // ����� ���
            streamsize prec = cout.precision(); // ���� cout precision
            cout << "Final grade: " << setprecision(3)
                << final_grade << setprecision(prec) << endl;
        }
        catch (domain_error e) {
            cout << e.what();
        }
        cout << endl;
    }
    return 0;
} // main ��