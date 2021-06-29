# Robotic arm(s)

## 3-fingered robotic arm:

Robotic arm with two nema 17 motors in the base to facilitate 360 degree rotation as well as up down motion. Midway joint enables the up down motion to have a controllability in an additional forward backward axis. The head has six SG90 servo motors, three of which directly control the lower section of the fingers. The other three controls an upper gripper section with the use of strings that pass internally.

### Plans:
<img src="./2_drawings/3fbase.jpg" width="250"/><img src="./2_drawings/3fcasing.jpg" width="132"/><img src="./2_drawings/voltagedivider.jpg" width="292"/>

### Construction:
Head Lower Section

<img src="./3_progress/3fcutfoam.jpg" width="200"/><img src="./3_progress/3fheadhalftop.jpg" width="200"/>

Voltage Divider Circuit

<img src="./3_progress/voltage2.jpg" width="200"/><img src="./3_progress/voltage3.jpg" width="200"/>

Grippers strung up

<img src="./3_progress/3fgripperadded1.jpg" width="200"/><img src="./3_progress/3fgripperadded3.jpg" width="200"/><img src="./3_progress/3fgripperadded2.jpg" width="200"/>

Arm length constructed

<img src="./3_progress/3fhand1.jpeg" width="200"/><img src="./3_progress/3fhand2.jpeg" width="172"/><img src="./3_progress/3fhand3.jpeg" width="200"/>

### Code:
* calibrate: arduino code to setup individual motors to an angle of 90 degrees.
* test1: a halfway test to check the performance of the lower sections of each finger.
* test2: test to check performance of all fingers imultaneously using voltage divider and 9V battery. Showcases grip.
* test3: test for controlling grippers using single control pin with fixed finger positions. 

## Humanoid robotic arm:

As mentioned in [theory](https://github.com/Roboramv2/Robotic-arm/blob/main/theory.md), this idea has been kept aside for later when I have access to a 3D printer service. For reasons as to why, and for detailed plans concerning the arm, check [theory](https://github.com/Roboramv2/Robotic-arm/blob/main/theory.md).

### Plans:
Here are some plans from before I put it away.

<img src="./2_drawings/humbase.jpg" width="200"/><img src="./2_drawings/humfin.jpg" width="200"/>

<img src="./2_drawings/humstring.jpg" width="150"/>
