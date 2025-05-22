# 💡 Simulasi Gerbang Logika

Sebuah proyek C++ sederhana untuk mensimulasikan berbagai **gerbang logika digital** seperti AND, OR, NOT, XOR, dan lainnya. Proyek ini dibuat sebagai bagian dari mata kuliah **Pemrograman Komputer**.

---

## 🧠 Fitur

- Simulasi gerbang logika dasar (AND, OR, NOT, NAND, NOR, XOR, XNOR)
- Modularisasi kode menggunakan struktur folder
- Kompilasi otomatis melalui file `.bat`
- Eksekusi hasil program langsung dari terminal

---

## 🗂️ Struktur Folder

📁 root/
├── .vscode/ 
│ └── tasks.json
├── modules/ 
│ ├── logic.cpp 
│ ├── logic.h 
│ ├── util.cpp 
│ └── util.h 
├── main.cpp 
├── compile_run.bat 
├── simulator.exe 
└── .gitignore


---

## ▶️ Cara Menjalankan

1. **Buka folder project di VS Code.**
2. Tekan `Ctrl + Shift + B` untuk menjalankan task (pastikan `tasks.json` sudah dikonfigurasi).
3. Atau klik dua kali `compile_run.bat` untuk langsung compile dan run.

> Pastikan kamu ter-install compiler C++ seperti `g++` (bawaan MinGW atau WSL).

---

## 🛠️ Konfigurasi VS Code

Contoh `tasks.json` untuk shortcut `Ctrl + Shift + B`:

```json
{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "Compile & Run",
      "type": "shell",
      "command": "${workspaceFolder}\\compile_run.bat",
      "group": {
        "kind": "build",
        "isDefault": true
      },
      "problemMatcher": []
    }
  ]
}