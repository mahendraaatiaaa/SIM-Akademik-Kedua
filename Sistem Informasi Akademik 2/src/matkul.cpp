#include <iostream>
#include <vector>

#include "include/matkul.hpp"

using namespace std;

MataKuliah::MataKuliah (string id, string nama, int sks)
: id(id), nama_matkul (nama), sks (sks) 
{}

void MataKuliah::fillDatabaseMahasiswa ( DataMahasiswa inputData)
{
    this -> databaseMahasiswa.push_back(inputData) ;
}

void MataKuliah::fillDatabaseDosen ( DataDosen inputData)
{
    this -> databaseDosen.push_back (inputData) ; 
}

string MataKuliah::getID ()
{
    return this -> id;
}

string MataKuliah::getNama ()
{
    return this -> nama_matkul;
}

int MataKuliah::getSKS ()
{
    return this -> sks;
}

vector <DataMahasiswa> MataKuliah::getDatabaseMahasiswa ()
{
    return this -> databaseMahasiswa;
}

vector <DataDosen> MataKuliah::getDatabaseDosen ()
{
    return this -> databaseDosen;
}