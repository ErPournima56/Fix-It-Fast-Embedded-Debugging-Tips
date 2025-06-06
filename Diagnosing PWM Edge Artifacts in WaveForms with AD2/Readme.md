## PWM Signal Debugging with Analog Discovery 2 (AD2)
While observing a square wave signal using the Digilent WaveForms software and hardware (Analog Discovery 2), I noticed consistent high-frequency ringing or noise artifacts immediately after rising and falling edges of the waveform.
Full Signal in WaveForms 
![image](https://github.com/user-attachments/assets/25beb11c-99bc-4ff6-88b9-41e43a95770c)


## Issue: Ringing in PWM Signal
Zoomed-In View of Artifacts
![image](https://github.com/user-attachments/assets/f207e766-3907-4955-9ecb-3a2da1dbce0c)


🔍 Observations
* The artifacts appear as light red oscillations near sharp transitions.
* They repeat consistently at each rising or falling edge.
* Appears localized to high-speed transitions, suggesting they’re not random noise.
* Final Zoom-in Clear Ringing Example
![image](https://github.com/user-attachments/assets/cecfdf62-dbf9-4e90-b47f-6b74e99cf7fd)

💡 Possible Causes
* Likely caused by signal integrity issues such as:
⚠️ Ringing due to impedance mismatch between the signal source, cable, and oscilloscope input.
🔌 Long or unshielded probe ground leads introducing inductance.
📶 Fast edge rate of the generated square wave (i.e. steep rise/fall times).
📡 Electromagnetic interference (EMI) from nearby digital sources.  


## Troubleshooting Steps
* Switch to Normal mode in WaveForms (avoid Averaging or Persistence unless needed).
* Use software filtering or digital smoothing to verify signal integrity.
* Compare results with slower edge transitions (or a sine wave) to confirm it's ringing, not random noise.

  
## Tip
Zoom in on the signal transitions when debugging PWM signals. The persistence display can reveal glitches or anomalies not visible in a single-shot view.
