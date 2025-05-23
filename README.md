# 💡 Simulasi Gerbang Logika

Project C++ sederhana tentang **Gerbang Logika**. Project ini merupakan Project Akhir dari Mata Kuliah Praktikum **Pemrograman** semester 2.

---

## 🧠 Fitur

- Simulasi gerbang logika (AND, OR, NOT, NAND, NOR, XOR, XNOR)
- Kode Program ditulis secara Modular
- Compile & Run melalui file `compile_run.bat`
- Execute hasil program langsung dari terminal

---

## 🗂️ Struktur

```txt
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
```

---

## ▶️ How To Run

### 1. Via VS Code
- **Buka folder project di VS Code.**
- Tekan `Ctrl + Shift + B` untuk menjalankan task.
- Atau klik dua kali `compile_run.bat` untuk langsung compile dan run.

> Pastikan sudah ter-install compiler C++ seperti `g++` (bawaan MinGW atau WSL).

### 2. Via CMD/Terminal
- Buka terminal (Command Prompt / PowerShell)
- Jalankan perintah berikut untuk compile:
```bash
g++ main.cpp modules/logic.cpp modules/util.cpp -o simulator
```

### 3. Jalankan Langsung
Setelah dicompile, akan muncul file simulator.exe
Cukup klik dua kali untuk menjalankan program

---

## 🛠️ Konfigurasi & Build

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
```
