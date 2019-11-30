task main()
{

	setMotorBrakeMode(motorB, motorBrake);
	setMotorBrakeMode(motorC, motorBrake);

	setMotorSpeed(motorB, -50);
	setMotorSpeed(motorC, -50);

	waitUntil(getMotorEncoder(motorB) <= -2 * 360);

	setMotorSpeed(motorB, 0);
	setMotorSpeed(motorC, 0);

	delay(2000);

}
