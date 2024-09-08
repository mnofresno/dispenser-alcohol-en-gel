# Automatic Hand Sanitizer Dispenser Firmware

Welcome to the Automatic Hand Sanitizer Dispenser firmware repository! This project is designed to provide an efficient and touchless way to dispense hand sanitizer using ultrasonic sensing technology.

## Features

- **Touchless Operation**: Utilizes an ultrasonic sensor to detect hand presence.
- **Servo Control**: Controls a servo motor to dispense sanitizer when hands are detected.
- **Easy Integration**: Simple code structure for easy customization and integration with various hardware.

## File Overview

- **alcohol_gel.ino**: The main firmware file containing the logic for the automatic hand sanitizer dispenser. This file includes the setup and loop functions, as well as the ultrasonic sensor configuration.

## Getting Started

### Prerequisites

- An Arduino board (e.g., Arduino Uno)
- An ultrasonic sensor (e.g., HC-SR04)
- A servo motor
- Hand sanitizer container with a dispensing mechanism
- Arduino IDE for uploading the firmware

### Installation

1. Clone the repository to your local machine:
   ```bash
   git clone https://github.com/yourusername/dispenser-alcohol-en-gel.git
   ```
2. Open the `alcohol_gel.ino` file in the Arduino IDE.
3. Connect your Arduino board to your computer.
4. Select the correct board and port in the Arduino IDE.
5. Upload the firmware to your Arduino board.

### Wiring Diagram

- **Ultrasonic Sensor**:
  - Trigger Pin -> Pin 9
  - Echo Pin -> Pin 10
- **Servo Motor**:
  - Control Pin -> Pin 11
  - Power and Ground as required

### Usage

Once the firmware is uploaded and the hardware is set up, simply place your hand within 15 cm of the ultrasonic sensor. The servo motor will activate, dispensing the sanitizer.

## Code Explanation

The main logic of the firmware is as follows:

- The `setup()` function initializes the servo motor.
- The `loop()` function continuously checks the distance measured by the ultrasonic sensor.
- If an object is detected within 15 cm, the servo motor rotates to dispense sanitizer and then returns to its original position.

## Contributing

Contributions are welcome! Please feel free to submit a pull request or open an issue for any improvements or suggestions.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contact

For any inquiries or feedback, please contact [yourname@example.com](mailto:yourname@example.com).
```
