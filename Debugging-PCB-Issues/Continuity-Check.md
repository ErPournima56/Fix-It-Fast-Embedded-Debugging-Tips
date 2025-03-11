# 🔗 Continuity Check  

## Problem  
Your circuit is assembled, but some components are not connected properly, leading to unexpected behavior.  

## Solution  
✔️ Before testing, set the multimeter to continuity mode and touch both probes together – it should beep. This confirms the multimeter is working.
✔️ Use the **multimeter’s continuity mode** to check:  
    - GND and VCC connections across the board  
    - Key signal traces  
    - Any vias that may not be making contact 
    - Wires for internal breaks

❌ If there’s no beep where there should be:
1. Check for broken PCB traces – look for visible damage.
2. Inspect for bad solder joints – reflow solder if needed.
3. Verify component pins are properly soldered to the pad.
4. Use a link wire (thin insulated wire) to fix broken traces.

💡 **Pro Tip:**  If a via is not making proper contact, add a small solder bridge or insert a thin wire through it and solder both ends to restore the connection.

⚠️ Warning: Never check continuity when power is being supplied to the circuit. Doing so can damage your multimeter and affect circuit behavior. Always disconnect power before performing a continuity test.
