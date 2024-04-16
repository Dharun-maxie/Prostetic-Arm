# PROSTHETIC ARM

## INTRODUCTION

A person's quality of life can be greatly affected by limb loss. Prosthetic devices offer a way to restore lost functionality, but many existing options are expensive and limited in functionality. To address these challenges, we have developed a prosthetic arm that utilizes an EMG sensor to recognize human input and control servo motors accordingly.

## METHODS

Our method involves detecting electrical signals produced by muscle movements in the remaining part of the severed limb using an EMG sensor. These signals are then sent to an Arduino microprocessor, which interprets the information and controls servo motors responsible for the motion of the prosthetic arm. We conducted trials on amputee volunteers to assess the effectiveness of our prosthetic arm design. These tests evaluated the arm's responsiveness to different user inputs, as well as its accuracy and speed of movement.

## OBJECTIVE

Our project aims to create a prosthetic arm that uses an EMG sensor to recognize user input and control servo motors accordingly. We strive to develop a device that offers amputees a high level of functionality while being customizable to their specific needs. Additionally, we aim to create an affordable and easily replicable solution to expand access to this technology.

## LITERATURE SURVEY

### GENERAL

Prosthetic limbs have been used for centuries, with the oldest known device originating in ancient Egypt. Recent advancements in technology have led to more sophisticated prosthetic limbs that can be controlled by the user's cerebral impulses. These myoelectric prostheses utilize electromyography (EMG) signals to control their movement.

### RELATED WORKS

Several researchers have focused on creating artificial limbs controlled by EMG signals. A study by A. Al-Jumaily et al. (2017) developed a myoelectric prosthetic arm controlled by EMG signals, using servo motors and an Arduino microprocessor. M. Rastegarpanah et al. (2019) utilized a machine learning algorithm to control a myoelectric prosthetic arm, employing deep neural networks to classify EMG data. In another work, N. R. Lee et al. (2020) developed a prosthetic hand controlled by EMG signals, utilizing a convolutional neural network (CNN) for signal classification.

## DESIGN OF THE PROPOSED SYSTEM

The prosthetic arm is designed to match the amputee's skin tone and fit their residual limb. Arduino microcontroller controls the arm's servo motors based on the EMG signals received from the amputee's remaining limb's muscles. A rechargeable battery provides power for several hours of continuous operation. The modular architecture allows for easy maintenance and improvements.

## PRODUCT DEVELOPMENT

### COMPONENTS

The prototype of our product incorporates the following components:

- 3D Printed Arm (STL files attached)
- Servo Motors
- EMG Sensors
- Arduino Board
- Battery
- Wiring and Connectors

## INTERPRETATION OF RESULTS

The outcomes of the proposed prosthetic arm system are presented and analyzed. The system was tested by moving the arm while sending different muscle signals, and the results were recorded and evaluated.

The data analysis demonstrates that the system accurately identified, deciphered, and translated the muscle signals from the EMG sensor into corresponding movements of the prosthetic arm. Compared to conventional prosthetic arm systems, our device exhibited improved accuracy and precision in performing complex movements.

[Results image attached]

## REFERENCES

1. L. P. Parker and G. R. Patterson, "The Myoelectric Arm: A Survey of the State of the Art," IEEE Transactions on Biomedical Engineering, vol. BME-26, no. 5, pp. 281-293, May 1979.
2. K. B. Englehart and B. Hudgins, "A robust, real-time control scheme for multifunction myoelectric control," IEEE Transactions on Biomedical Engineering, vol. 50, no. 7, pp. 848-854, Jul. 2003.
3. S. S. Kumar and S. S. Kumar, "Design and Development of a Prosthetic Arm using Myoelectric Signals for Amputees," International Journal of Computer Applications, vol. 177, no. 14, pp. 12-15, Nov. 2017.
4. [Arduino](https://www.arduino.cc/)
5. [EMG Sensor](https://www.advancertechnologies.com/p/myoware-muscle-sensor.html)


                                       



