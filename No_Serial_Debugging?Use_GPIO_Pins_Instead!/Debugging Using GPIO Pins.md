## #Debugging Embedded Systems Using GPIO Pins
When serial debugging isn't an option, GPIOs can help you track execution, detect crashes, and visualize errors—all with just a few spare pins and a little creativity.

## How It Works
1. LED Debugging 💡
- Connect an LED to a spare GPIO pin.
- Toggle the pin at specific code checkpoints to check if execution reaches that point.
- Helps identify whether the issue is software-related (e.g., code not running) or hardware-related (e.g., faulty components).
  
2. Logic Analyzer/Oscilloscope Debugging 📊
- Use a GPIO pin to output debug pulses at key execution points.
- Connect a logic analyzer or oscilloscope to visualize timing and signal integrity.
- Useful for:
          *  Measuring ISR execution time ⏱️
          *  Debugging delays and event triggers
          *  Checking timing issues in real-time systems

Pros & Cons
✅ Works when serial debugging is unavailable
✅ Simple and hardware-independent
❌ Limited debugging info (only logic levels)

That’s when GPIO debugging comes in—using spare pins to toggle signals and track execution flow without affecting performance. 
