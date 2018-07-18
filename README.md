# Line-Follower-Robot

-------------------------------------------------------------------------------------------------------------------------------------------

Line follower Robot is a Robot which follows a black line drawn on a white surface or a white line drawn on a black surface. It uses an InfraRed sensor Module to follow the line. The orientation of the sensor is quite important so that the rays eitted by the IR diode hits the Line.

-------------------------------------------------------------------------------------------------------------------------------------------

Materials Required:   1.Hardware
                        a.Arduino UNO Board
                        b.BreadBoard
                        c.IR Sensor Module
                        d.Chassis Frame
                        e.DC Motors (Geared, So that they could sustain loads )
                        f.L293D IC
                        g.L293D Motor Driver Module
                        h.Wires and wheels
                      2.SoftWare
                        a.Arduino IDE

-------------------------------------------------------------------------------------------------------------------------------------------

Working and theory : In the IR Module, There are 2 Diodes, IR and Photodiode. When thr IR Diode emits IR rays, If a photoDiode is kept in                        front of it, The IR rays are received by it. If there is an Obstacle, then the IR rays are blocked, thus causing the                        obstacle signal High. The Black line acts as an obstacle. Here, when the IR ray hits black color, then all of the IR                        rays are absorbed, and the obstacle indication becomes high, the drives the motor accordingly, using the conditional                        if else statements. The L293D module along with IC is used as a motor shield for the arduino which step ups the 5V                           supplied by the arduino digital pins.

-------------------------------------------------------------------------------------------------------------------------------------------
