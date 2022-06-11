#ifndef __MATKUL_HPP__
#define __MATKUL_HPP__

#include <iostream>
#include <vector>

using namespace std;

struct DataMahasiswa
{
    string nama;
    string nrp;
    string departemen;
    int tahunmasuk;
};

struct DataDosen
{
    string nama;
    string npp;
    string departemen;
    string pendidikan;
};

class MataKuliah 
{
    private :
    
    string id;
    string nama_matkul;
    int sks;
    vector <DataMahasiswa> databaseMahasiswa;
    vector <DataDosen> databaseDosen;

    public :

    MataKuliah(string id, string nama, int sks);

    void fillDatabaseMahasiswa (DataMahasiswa inputData);
    void fillDatabaseDosen (DataDosen inputData);

    string getID();
    string getNama();

    int getSKS ();

    vector <DataMahasiswa> getDatabaseMahasiswa ();
    vector <DataDosen> getDatabaseDosen ();

};

#endif
