# Multi-directional robotic arm
***

### general initial points to build on:

* internal wiring
* battery housed in forearm
* servos form the base of each finger
* strings control knuckles, servos midjoints
* strings moved using servos in base of hand
* layer by layer modeling using foamboard
* elbow made with nema 17
* bt slave only module, to receive commands
* bt module housed in back of hand
* clamps to hold hand upright when motor is unpowered
* decide on movement facilitation for knuckle joint (metal pins? springs?)

### knuckle string considerations:

* plate with spring:
    * CON: reduced force exerted by figners, if there is always a spring trying to pull back the fingers, you cant hold objects tightly.
    * PRO: easier to make, easily repairable, no internal complexity

* looped string:
    * CON: complex to setup,, takes some tries to get the servos sit right with the finger angles. Internal tubes needed.
    * PRO: increased force. there is no opposing spring. (as a side note: this would mean we can make a weird but super cool improved version of our hand, we can make the fingers go back too, as in there is no distinction between palm and back pf the hand)