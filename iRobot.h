#ifndef IROBOT_H
#define IROBOT_H


void robotReset(int fd);


void robotStart(int fd);

void robotSafeMode(int fd);

void robotLED(int fd);             

void robotStartRotating(int fd);             

void robotStopRotating(int fd);                 

void robotStartDrive(int fd);             

void robotStopDrive(int fd);                 

//return the fd, -1 if fail
int initRobot();

#endif // IROBOT_H
