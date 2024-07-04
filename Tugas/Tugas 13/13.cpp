//13

#include <iostream>

using namespace std;

class HashTable
{
private:
  int kapasitas;
  int **bucket;
  int *ukuranBucket;

public:
  HashTable(int size)
  {
    kapasitas = size;
    bucket = new int *[size];
    ukuranBucket = new int[size];
    for (int i = 0; i < size; i++)
    {
      bucket[i] = new int[0];
      ukuranBucket[i] = 0;
    }
  }

  int fungsiHash(int kunci)
  {
    return kunci % kapasitas;
  }

  void sisipkan(int kunci)
  {
    int indeks = fungsiHash(kunci);
    int *temp = new int[ukuranBucket[indeks] + 1];
    for (int i = 0; i < ukuranBucket[indeks]; i++)
    {
      temp[i] = bucket[indeks][i];
    }
    temp[ukuranBucket[indeks]] = kunci;
    delete[] bucket[indeks];
    bucket[indeks] = temp;
    ukuranBucket[indeks]++;
  }

  void tampilkan()
  {
    for (int i = 0; i < kapasitas; i++)
    {
      cout << i << " --> ";
      if (ukuranBucket[i] == 0)
      {
        cout << "Kosong";
      }
      else
      {
        for (int j = 0; j < ukuranBucket[i]; j++)
        {
          cout << bucket[i][j] << " ";
        }
      }
      cout << endl;
    }
  }

  bool cari(int kunci)
  {
    int indeks = fungsiHash(kunci);
    for (int i = 0; i < ukuranBucket[indeks]; i++)
    {
      if (bucket[indeks][i] == kunci)
      {
        return true;
      }
    }
    return false;
  }

  ~HashTable()
  {
    for (int i = 0; i < kapasitas; i++)
    {
      delete[] bucket[i];
    }
    delete[] bucket;
    delete[] ukuranBucket;
  }
};

int main()
{
  int ukuran, jumlahElemen;

  cout << "Masukkan ukuran tabel hash: ";
  cin >> ukuran;

  cout << "Masukkan jumlah elemen yang akan disimpan: ";
  cin >> jumlahElemen;

  HashTable hashTable(ukuran);

  cout << "Masukkan " << jumlahElemen << " elemen:" << endl;
  for (int i = 0; i < jumlahElemen; i++)
  {
    int elemen;
    cout << "Elemen ke-" << (i + 1) << ": ";
    cin >> elemen;
    hashTable.sisipkan(elemen);
  }

  cout << "Isi Tabel Hash:" << endl;
  hashTable.tampilkan();

  int kunciCari;
  cout << "Masukkan elemen yang ingin dicari dalam tabel hash: ";
  cin >> kunciCari;
  if (hashTable.cari(kunciCari))
  {
    cout << kunciCari << " ditemukan dalam tabel hash." << endl;
  }
  else
  {
    cout << kunciCari << " tidak ditemukan dalam tabel hash." << endl;
  }

  return 0;
}

