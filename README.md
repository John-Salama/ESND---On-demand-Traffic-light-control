# ESND-On-demand-Traffic-light-control
This is an On-demand Traffic light control system for the EgFWD Embedded Systems Professional NanoDegree Scholarship. This project was written in C using Microchip Studio and Proteus 8 professional.

## Demonstration

Here, I used Proteus 8 Professional in order to simulate AVR Atmega32. I have the wiring labeled below. <br></br>
![image](https://github.com/John-Salama/ESND---On-demand-Traffic-light-control/blob/022e93f1468796875167da28661c73580ea3be16/proutes.png)

This is a video for the system running on the simulator.
https://user-images.githubusercontent.com/89663721/187757091-9645ab12-7363-446d-9614-45f2bc33688c.mp4

## System Functionality
- The system handles 6 LEDs
- Car LEDs switch every 10s (each switch includes 5s yellow light blinking interval)
- `Button`: the button acts as a request for a pedestrian to cross the street
  * The system will stop cars if not already on red light as per request

## Details & Program Flow Chart
You can find system details and program flow chart in project documentation [here](https://github.com/John-Salama/ESND---On-demand-Traffic-light-control/blob/022e93f1468796875167da28661c73580ea3be16/Project%20Documentation.pdf).
