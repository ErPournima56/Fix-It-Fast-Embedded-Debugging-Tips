When working with embedded systems, a serial terminal can be a powerful debugging tool—no need for expensive debuggers or complex setups. In this guide, I’ll share how I debug firmware using HyperTerminal.

## 🔧 Tools Used
1. MCU with UART interface
2. UART-to-USB converter IC
3. PC with HyperTerminal installed

## 🛠️ Setup
1. Write and Flash Debugging Firmware
   - Add printf statements to your firmware to print debug messages. ( refer main.c )
   - Compile and flash the code to your MCU.
2. Connect the Hardware
   - Connect the RX & TX pins of MCU to TX & RX pins of a UART-to-USB converter IC
   - Connect to GND of the converter module
   - Connect a wire from the UART-to-USB converter module to the PC’s USB port
3. Configure Hyperterminal
   - Open Hyperterminal
   - Select Call to set up a new connection and specify a filename to save the output
   - Select the correct COM PORT ( check it from Device Manager )

## ✅ Why Use a Serial Terminal for Debugging?
      ✔ Works in Any MCU with UART
      ✔ No Extra Cost (No JTAG/SWD needed)
      ✔ Quick Field Debugging
      ✔ Lightweight & Effective

Using just a simple UART connection, you can quickly diagnose firmware behavior without external debuggers. If you have questions or need help setting up, drop a comment!   
