#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    // Mempercepat operasi input/output karena datanya bisa sampai 10^5
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    // Menggunakan long long untuk mencegah overflow pada angka besar
    vector<long long> x(n);
    vector<long long> c(n);

    // 1. Membaca baris kedua (input koordinat paket)
    for(int i = 0; i < n; i++) {
        cin >> x[i];
    }
    
    // 2. Membaca baris ketiga (input ID kategori paket)
    for(int i = 0; i < n; i++) {
        cin >> c[i];
    }

    // Menggunakan map untuk melacak kategori yang sudah diambil
    map<long long, bool> seen_categories;
    int max_packages = 0;

    // 3. Menghitung jumlah kategori paket yang unik
    for(int i = 0; i < n; i++) {
        // Jika ID kategori belum ada di dalam map, berarti ini paket baru
        if(seen_categories.find(c[i]) == seen_categories.end()) {
            seen_categories[c[i]] = true; // Tandai kategori ini sudah diambil
            max_packages++;               // Tambahkan hitungan paket
        }
    }

    // Mencetak hasil akhir
    cout << max_packages << "\n";
    return 0;
}