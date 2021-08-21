void setup() {
  Serial.begin(112500);
  delay(1000);

  xTaskCreate(taskOne,       // Task Function
              "TaskOne",     // String with name of the task
              10000,         // Stack size in words
              NULL,          // Parameter passed as input of the task
              1,             // Piority of the task
              NULL);         // Task Handle



}

void loop() {
  // put your main code here, to run repeatedly:

}

void taskOne ( void * parameter )
{
  for (int i = 0; i< 10;i++)
  {
    Serial.println("Hello from task 1");
    delay(1000);
  }
  }
