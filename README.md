# Microprocessor-Based System (ECE 355)

## Overview
This repository contains the source code and documentation for a bare-metal embedded system project 

The project is written in **C** and targets the **STM32L476RG Nucleo** board (ARM Cortex-M4). It demonstrates direct register manipulation to control system peripherals without the use of high-level HAL libraries.

## Features
* **System Clock Configuration:** Custom configuration of the PLL (Phase Locked Loop) to set the system clock frequency (MSI/HSI) via `SetClock.c`.
* **Display Driver:** Low-level driver implementation for controlling the [LCD / 7-Segment / LED] display via `display.c`.
* **Bare-Metal Implementation:** Direct memory access and register-level programming for optimized performance.

## Hardware Requirements
* **Microcontroller:** STM32L476RG Nucleo Board
* **Peripherals:** [List any extra hardware, e.g., Keypad, Potentiometer, Shield]
* **Debug Tool:** ST-Link/V2

## Project Structure
* **`main.c`**: Application entry point and main control loop.
* **`SetClock.c / .h`**: Functions to configure the system clock and bus speeds.
* **`display.c / .h`**: Drivers for handling visual output to the connected display.
* **`ECE355 - Project Report.pdf`**: Detailed documentation of the design methodology and testing.

## Build & Run
1. Open the project in **Keil µVision** (or STM32CubeIDE).
2. Compile the source files.
3. Flash the binary to the STM32 Nucleo board using the ST-Link programmer.
4. Reset the board to start the application.

## Authors
**Manraj Minhas**,
**Will Calder**
University of Victoria

