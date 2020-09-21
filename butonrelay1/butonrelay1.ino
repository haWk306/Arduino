//PUSH BUTTON RELAY CONTROL;

//pevné constanty;
const int PIN_relay = D1;        // cislo pinu rele (1);
const int PIN_button = D3;       // cislo pinu tlacitka (3);

//variabilni constany;
int buttonState = LOW;
int relayprom = LOW ;

void setup()
{
  //inicializovaní portů (rele a tlacitka);
  pinMode(PIN_relay, OUTPUT);
  pinMode(PIN_button, INPUT);
  relayprom = LOW ;

}

void loop()

{
  int aktualState = digitalRead(PIN_button);
  if (buttonState != aktualState) {
    // tlacitko zmenilo svuj stav ;
    if (relayprom == HIGH) {
      relayprom = LOW ;
    } else {
      relayprom = HIGH;
    }
    digitalWrite(PIN_relay , relayprom);
  }
  buttonState = digitalRead(PIN_button);
}
