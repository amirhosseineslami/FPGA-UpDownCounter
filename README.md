# 🔢 FPGA Up/Down Counter with Toggle Control and 7-Segment Display

This project implements a simple yet functional digital counter on an FPGA using VHDL. The counter counts either **up or down** based on a toggle key input and displays the count on **two 7-segment displays**. It's designed to demonstrate VHDL design principles, modular hardware logic, and practical FPGA development.

---

## 📁 Project Structure

CompleteProjectFiles/
│
├── topm.vhd # Main VHDL module (counter + display logic)
├── topm_tb.vhd # VHDL testbench for simulation
├── prog.ucf # Constraints file (pin mapping for FPGA board)
├── exam.xise # Xilinx ISE project file (for synthesis and simulation)
├── README.md # This file
└── .gitattributes # GitHub-generated file (safe to ignore)


---

## ⚙️ Features

- 🔄 **Up/Down Counting** controlled by a toggle input
- 📟 **Dual 7-Segment Display** for values from 00 to 99
- ⏱️ **Clock-Driven** logic with optional clock divider
- 🔧 **Modular VHDL Code** for easy expansion and simulation
- 🧪 Includes a **Testbench** for simulation verification

---

## 🧠 How It Works

- The core is an **8-bit counter** that either increments or decrements based on a switch.
- The value is split into **tens** and **units**, which are then encoded to drive **7-segment displays**.
- A **toggle key** (push button or switch) changes counting direction.
- The design assumes an FPGA clock input (e.g., 50 MHz) and optionally uses a frequency divider to slow the counting rate for visualization.

---

## 📦 Files Overview

| File Name      | Description |
|----------------|-------------|
| `topm.vhd`     | Main VHDL code: includes counter and 7-segment decoder |
| `topm_tb.vhd`  | Testbench to simulate counter behavior |
| `prog.ucf`     | User Constraint File: maps VHDL ports to FPGA board pins |
| `exam.xise`    | Xilinx ISE project file (can be opened directly in ISE) |

---

## 🔌 Pin Mapping (`prog.ucf`)

Customize your `.ucf` file according to your FPGA board (e.g., Basys 3, Nexys 2):

```tcl
NET "clk" LOC = "P56";         # Clock input
NET "toggle" LOC = "P57";      # Toggle key input
NET "seg(0)" LOC = "P30";      # Segment outputs A–G, DP
NET "seg(1)" LOC = "P31";
...
NET "digit(0)" LOC = "P40";    # Enable for each display
NET "digit(1)" LOC = "P41";
