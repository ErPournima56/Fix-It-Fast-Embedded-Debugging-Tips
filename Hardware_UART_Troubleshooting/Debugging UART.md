## 🔧 UART Debugging with Analog Discovery 2 (AD2)

## 📌 What You'll Find in This Folder
This folder provides a structured approach to **debugging UART communication issues** using **Analog Discovery 2 (AD2)** and WaveForms software. You'll learn how to:
- Identify whether the issue is with the transmitting device (TX) or receiving device (RX).
- Use AD2 to observe and analyze UART signals.
- Troubleshoot issues related to **RS485 converters, optocouplers , and other interfacing components**.
- Verify voltage levels, and signal integrity** for UART communication.

## 🚨 Identifying UART Communication Failures
❌ No data transmission from the microcontroller
❌ Unexpected noise or corrupted data
❌ Incorrect baud rate configuration
❌ Mismatched voltage levels
❌ Floating TX/RX pins

## 🛠 Steps to Debug UART Communication with AD2

### **1️⃣ Prefer My Debugging PCB Issues Folder**
✅ Ensure **power supply is stable** and properly connected.
✅ Verify **PCB continuity** and trace connections.
✅ Refer to [PCB Debugging Guide](https://github.com/Pornima56/Fix-It-Fast-Embedded-Debugging-Tips/tree/main/Debugging-PCB-Issues) if issues persist.

### **2️⃣ Set Up AD2 for UART Debugging**

🔹 **Connect AD2 to Your System:**
   - Plug in the Analog Discovery 2 via USB.
   - Open **WaveForms** software.

🔹 **Configure the Oscilloscope in WaveForms:**
   1. Navigate to **Scope** section.
   2. Adjust **Channel 1/2 settings** (voltage range, time base).
   3. Ensure correct **time delay settings** for waveform clarity.

### **3️⃣ Probe the TX Pin First**
🔗 **Connection:**
- Connect **one end of the AD2 oscilloscope probe** to the **TX pin** of the microcontroller.
- Hold the probe **steady for 3-4 minutes** to avoid noise interference.

✅ **Check for a Square Wave** on the oscilloscope:
   - If visible ➝ The microcontroller is sending data correctly.
   - If missing ➝ The issue is with the microcontroller or firmware.

🔹 **Analyze the UART Signal:**
   - Check **voltage levels** of the waveform.
   - Measure **time delay** between pulses to verify baud rate.

### **4️⃣ Probe the RX Pin**
- If the TX signal is fine, connect the probe to the **RX pin**.
- Ensure the data is correctly received without distortions.

### **5️⃣ If No Waveform Appears on TX Pin**
📌 Troubleshoot further:
- Re-check UART configurations in the microcontroller firmware.
- Ensure the correct **baud rate, parity, stop bits** are set.
- Check **UART driver circuits** (e.g., RS-232 transceivers, pull-up resistors).
- If you have connected TX/RX pins but still don't get output, check whether **Device A is sending data** or if **Device B has an issue receiving data**.
- If using **RS485 converters** or **optocouplers**, verify their functionality as they act as a medium between devices.
- Using AD2, you can observe the square wave on the oscilloscope to determine where the issue lies.

## ✅ Conclusion
By following this debugging process with AD2, you can effectively diagnose and fix UART communication issues. If problems persist, check firmware settings, hardware connections, and external noise sources.
