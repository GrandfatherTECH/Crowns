# Crowns

A Windows desktop application for managing dental patient records and crown treatment data at a dental clinic.

## What it does

- Maintains a patient database (surname, first name, patronymic, sex, date of birth, age, phone number, address)
- Displays the full tooth chart (32 teeth) for each patient
- Records crown measurement data (up to 5 measurement points) per tooth
- Allows adding new patients and looking up existing ones by surname

## Built with

- **C++/CLI** (.NET Framework 4.7.2) — Windows Forms application
- **Visual Studio 2019** — IDE and build toolchain (`.sln` / `.vcxproj`)
- **Microsoft Access** (`.accdb`) — local patient database accessed via OLE DB (`System.Data.OleDb`)

## How to build

**Requirements:**
- Windows
- Visual Studio 2019 or later with the **Desktop development with C++** workload and the **.NET desktop development** workload installed

**Steps:**

1. Open `Crowns.sln` in Visual Studio.
2. Select the desired configuration (`Debug` or `Release`) and platform (`x86` or `x64`).
3. Build → Build Solution (`Ctrl+Shift+B`).
4. The executable is output to `Debug\Crowns.exe` or `Release\Crowns.exe`.

> The database file `Teeth.accdb` must be present in the same directory as the executable. It is copied automatically during a Debug build; for Release deployments, copy it manually alongside `Crowns.exe`.

## Running

Double-click `Crowns.exe` (no installer required). Microsoft Access Database Engine must be installed on the target machine if it is not already present (matches the bitness of the executable).
