
task main()
{
	setMotorTarget(motorB, 1*360, -90);
	setMotorTarget(motorC, 1*360, -90);

	waitUntilMotorStop(motorB);
	waitUntilMotorStop(motorC);

	resetMotorEncoder(motorB);
	resetMotorEncoder(motorC);

	setMotorTarget(motorB, 1*360, 90);
	setMotorTarget(motorC, 1*360, 90);
	setMotorTarget(motorA, 2*360, 90);
	setMotorTarget(motorD, 2*360, -90);

	waitUntilMotorStop(motorB);
	waitUntilMotorStop(motorC);
	waitUntilMotorStop(motorA);
	waitUntilMotorStop(motorD);
}
