const int lBtn = 13;
const int rBtn = 14;

bool prevStateL = LOW;
bool prevStateR = LOW;

float pressing = 0;

int shortpress = 100;
int longpress = 2000;

void setupButtons() {
  pinMode(lBtn, INPUT_PULLUP);
  pinMode(rBtn, INPUT_PULLUP);
}

// If we press the lb(left button), then send a message to shoot the bullet
// If we press the rb(right button), then send a message to pause/resume the game
void getButton() {
  
  int lb = digitalRead(lBtn);
  int rb = digitalRead(rBtn);

  if(lb == LOW && prevStateL == HIGH && sending) {
    sendMessage("9");
  }
  prevStateL = lb;
  
  if(rb == LOW && prevStateR == HIGH && sending) {
    sendMessage("11");
  }
  prevStateR = rb;
  
}
