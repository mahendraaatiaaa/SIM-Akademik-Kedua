#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"
#include "include/matkul.hpp"

using namespace std;

int main()
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;
	vector <MataKuliah> recMataKuliah;

	int choice_menu;

	while(1) {
		cout << "Welcome to Kwangya University" << endl << endl;

		cout << "Statistics:" << endl;
		cout << "  1. Student             : " << recMhs.size() << " student" << endl;
		cout << "  2. Professor           : " << recDosen.size() << " professor " << endl;
		cout << "  3. Education Staff     : " << recTendik.size() << " education staff " << endl;
		cout << "  4. Study Program       : " << recMataKuliah.size() << " study program " << endl;
		cout << endl;

		cout << "Menu: " << endl;
		cout << "  1. Add the Student" << endl;
		cout << "  2. Add the Professor" << endl;
		cout << "  3. Add the Education Staff" << endl;
		cout << "  4. Show all of the Student" << endl;
		cout << "  5. Show all of the Professor" << endl;
		cout << "  6. Show all of the Education Staff" << endl;
		cout << "  7. Add the Study Program " << endl;
		cout << "  8. Add the Professor fill up the Study Program " << endl;
		cout << "  9. Add the Student in Study Program " << endl;
		cout << "  10. Show all of the Study Program " << endl;

		cout << "=> You may choose one of these numbers: ";
		cin >> choice_menu;

		switch (choice_menu)
		{
			case 1:
				{
					string numbers, name, studentregistrationnumber, majors;

					int day, month, year, academicyears, semester;

					cout << "Enter the ID: ";
					cin >> numbers;

					cout << "Enter the name: ";
					cin >> name;
					
					cout << "Enter the Student Registration Numbers: ";
					cin >> studentregistrationnumber;

					cout << "Enter the date of birth: ";
					cin >> day;

					cout << "Enter the month of birth: ";
					cin >> month;

					cout << "Enter the year of birth: ";
					cin >> year;

					cout << "Enter the majors: ";
					cin >> majors;

					cout << "Enter the year of Academic: ";
					cin >> academicyears;

					cout << "Enter the Semester: ";
					cin >> semester;

					mahasiswa student(numbers, name, day, month, year, studentregistrationnumber, majors, academicyears);
					recMhs.push_back(student);
				}

				break;
				
			case 2:

				{
					string numbers, name, professorregistrationnumbers, majors;

					int day, month, year, education;

					cout << "Enter the ID: ";
					cin >> numbers;
					cout << "Enter the name: ";
					cin >> name;

					cout << "Enter the date of birth: ";
					cin >> day;

					cout << "Enter the month of birth: ";
					cin >> month;

					cout << "Enter the year of birth: ";
					cin >> year;

					cout << "Enter the Professor Registration Numbers: ";
					cin >> professorregistrationnumbers;

					cout << "Enter the major: ";
					cin >> majors;

					cout << "Enter the education: ";
					cin >> education;

					dosen professor(numbers, name, day, month, year, professorregistrationnumbers, majors, education);
					recDosen.push_back(professor);
				}

				break;

			case 3:

				{
					string numbers, name, staffregistrtationnumbers, units;

					int day, month, year;

					cout << "Enter the ID: ";
					cin >> numbers;

					cout << "Enter the name: ";
					cin >> name;

					cout << "Enter the date of birth: ";
					cin >> day;

					cout << "Enter the month of birth: ";
					cin >> month;

					cout << "Enter the year of birth: ";
					cin >> year;

					cout << "Enter the Education Staff Registration Numbers: ";
					cin >> staffregistrtationnumbers;

					cout << "Enter the Units: ";
					cin >> units;

					tendik tdk(numbers, name, day, month, year, staffregistrtationnumbers, units);
					recTendik.push_back(tdk);
				}
				break;
			case 4:
				{
					for (int i = 0; i < recMhs.size(); i++)
					{
						cout << "Name: " << recMhs[i].getNama() << endl;

						cout << "Date: " << recMhs[i].getTglLahir();

						cout << "/" << recMhs[i].getBulanLahir();

						cout << "/" << recMhs[i].getTahunLahir() << endl;

						cout << "Student Registration Numbers: " << recMhs[i].getNRP() << endl;

						cout << "Majors: " << recMhs[i].getDepartemen() << endl << endl;
					}
				}
				break;
			case 5:
				{
					for (int i = 0; i < recDosen.size(); i++)
					{
						cout << "Name: " << recDosen[i].getNama() << endl;

						cout << "Date: " << recDosen[i].getTglLahir();

						cout << "/" << recDosen[i].getBulanLahir();

						cout << "/" << recDosen[i].getTahunLahir() << endl;

						cout << "Professor Registration Numbers: " << recDosen[i].getNPP() << endl;

						cout << "Education: S" << recDosen[i].getPendidikan() << endl;

						cout << "Majors: " << recDosen[i].getDepartemen() << endl << endl;
					}
				}

				break;

			case 6:
			
				{
					for (int i = 0; i < recTendik.size(); i++)
					{
						cout << "Name: " << recTendik[i].getNama() << endl;

						cout << "Date: " << recTendik[i].getTglLahir();

						cout << "/" << recTendik[i].getBulanLahir();

						cout << "/" << recTendik[i].getTahunLahir() << endl;

						cout << "Education Staff Registration Numbers: " << recTendik[i].getNPP() << endl;

						cout << "Units: " << recTendik[i].getUnit() << endl;
					}
				}
				
				break;

			case 7:
				{
					string nama_matkul;
					string id;
					int sks;

					cout << " Enter the Study Program : " ;
					cin >> nama_matkul;

					cout << " Enter the number of SKS : " ;
					cin >> sks;

					MataKuliah inputMatkul = MataKuliah ( nama_matkul, id, sks);

					recMataKuliah.push_back (inputMatkul);

				}

				break;
			
			case 8:
				{
					int MataKuliah;
					string nama;

					cout << " Please fill out the Professor's Name that will be add : " ;
					cin >> nama;

					cout << " Please fill out the Study Program : " ;
					cin >> nama;
				}
				
				break;
			
			case 9:
				{
					string nama;

					cout << " Please fill out the Student's Name that will be add : " ;
					cin >> nama;

					cout << " Please fill out the Study Program : " ;
					cin >> nama;
					
				}
				
				break;

			case 10:
				{
					char AllDatabase;

					cout << " Do you want to see all of the Professor and Student in Study Program ? ";
					cout << " Press 'Y' for Yes " ;
					cout << " Press 'N' for No " ;
					cin >> AllDatabase;

					if (AllDatabase != 'Y' && AllDatabase != 'N')
					{
						cout << " The input you put is wrong! " << endl;
					}
					for ( int i = 0; i < recMataKuliah.size(); i++ )
					{
					cout << " Study Program : " << recMataKuliah[i].getNama () << endl;
					cout << " The Number of SKS : " << recMataKuliah[i].getSKS ()<< endl;
					}

				}
				
				break;
		}
	}

	return 0;
}