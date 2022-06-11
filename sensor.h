class mySensor{

  public:

   mySensor(int greenLightPin, int redLightPin, int sensorPin)
   {

    _greenLightPin = greenLightPin;
    _redLightPin = redLightPin;
    _sensorPin = sensorPin;
    
   }

   void greenLight(){

      digitalWrite(_greenLightPin, HIGH);
      digitalWrite(_redLightPin, LOW);    
   }


   void redLight(){

      digitalWrite(_greenLightPin, LOW);
      digitalWrite(_redLightPin, HIGH);  
   }

   void AllLightOff(){

      digitalWrite(_greenLightPin, LOW);
      digitalWrite(_redLightPin, LOW); 
   }

   boolean sensor()
   {
    boolean state=(digitalRead(_sensorPin)== HIGH);
    return state;
   }

  private:

  int _greenLightPin;
  int _redLightPin;
  int _sensorPin;  
  
};
