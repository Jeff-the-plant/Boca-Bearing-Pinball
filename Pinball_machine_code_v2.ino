//this is the Boca bearing pinball machine
//James T. Laumeyer

//https://www.youtube.com/watch?v=8bufqdXwCpY

//Switches
int tower1_s = 53;
int tower2_s = 52;
int tower3_s = 51;

int L_bumper_s = 50;
int R_bumper_s = 49;

int L_slingshot_s = 48;
int R_slingshot_s = 47;

int L_tunnel_s = 46;
int R_tunnel_s = 45;

int L_loss_s = 44;
int R_loss_s = 43;
int C_loss_s = 42;

int L_bumper_bonus_s = 41;
int R_bumper_bonus_s = 40;

int L_launch_s = 39;
int R_launch_s = 38;

int load_s = 37;

//Relays
int tower1_r = 36;
int tower2_r = 35;
int tower3_r = 34;

int L_bumper_r = 33;
int R_bumper_r = 32;

int L_slingshot_r = 31;
int R_slingshot_r = 30;

int L_tunnel_r = 29;//No current trigger just score
int R_tunnel_r = 28;//No current trigger just score

int L_loss_r = 27;//No current trigger just score 
int R_loss_r = 26;//No current trigger just score
int C_loss_r = 25;//No current trigger just score

int L_bumper_bonus_r = 24;//No current trigger just score
int R_bumper_bonus_r = 23;//No current trigger just score

int L_launch_r = 22;
int R_launch_r = 21;

int load_r = 20;

float SCORE = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(tower1_s, INPUT);
pinMode(tower2_s, INPUT);
pinMode(tower3_s, INPUT);
pinMode(L_bumper_s,INPUT);
pinMode(R_bumper_s,INPUT);
pinMode(L_slingshot_s,INPUT);
pinMode(R_slingshot_s,INPUT);
pinMode(L_tunnel_s,INPUT);
pinMode(R_tunnel_s,INPUT);
pinMode(L_loss_s,INPUT);
pinMode(R_loss_s,INPUT);
pinMode(C_loss_s,INPUT);
pinMode(L_bumper_bonus_s,INPUT);
pinMode(R_bumper_bonus_s,INPUT);
pinMode(L_launch_s,INPUT);
pinMode(R_launch_s,INPUT);
pinMode(load_s,INPUT);

pinMode(tower1_r,OUTPUT);
pinMode(tower2_r,OUTPUT);
pinMode(tower3_r,OUTPUT);
pinMode(L_bumper_r,OUTPUT);
pinMode(R_bumper_r,OUTPUT);
pinMode(L_slingshot_r,OUTPUT);
pinMode(R_slingshot_r,OUTPUT);
pinMode(L_tunnel_r,OUTPUT);
pinMode(R_tunnel_r,OUTPUT);
pinMode(L_loss_r,OUTPUT);
pinMode(R_loss_r,OUTPUT);
pinMode(C_loss_r,OUTPUT);
pinMode(L_bumper_bonus_r,OUTPUT);
pinMode(R_bumper_bonus_r,OUTPUT);
pinMode(L_launch_r,OUTPUT);
pinMode(R_launch_r,OUTPUT);
pinMode(load_r,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

// tower1----------------------------------------------------------------------------
if(digitalRead(tower1_s) == HIGH){
  digitalWrite(tower1_r,HIGH);


}
else{
  digitalWrite(tower1_r,LOW); 
}

//tower2--------------------------------------------------------------------------
if(digitalRead(tower2_s) == HIGH){
  digitalWrite(tower2_r,HIGH);
}
else{
  digitalWrite(tower2_r,LOW);
}

//tower3-------------------------------------------------------------------------
if(digitalRead(tower3_s) == HIGH){
  digitalWrite(tower3_r,HIGH);
}
else{
  digitalWrite(tower3_r,LOW);
}

//L_bumper-----------------------------------------------------------------------
if(digitalRead(L_bumper_s) == HIGH){
  digitalWrite(L_bumper_r,HIGH);
}
else{
  digitalWrite(L_bumper_r,LOW);
}

//R_bumper-----------------------------------------------------------------------
if(digitalRead(R_bumper_s) == HIGH){
  digitalWrite(R_bumper_r,HIGH);
}
else{
  digitalWrite(R_bumper_r,LOW);
}

//L_slingshot--------------------------------------------------------------------
if(digitalRead(L_slingshot_s) == HIGH){
  digitalWrite(L_slingshot_r,HIGH);
}
else{
  digitalWrite(L_slingshot_r,LOW);
}

//R_slingshot--------------------------------------------------------------------
if(digitalRead(R_slingshot_s) == HIGH){
  digitalWrite(R_slingshot_r,HIGH);
}
else{
  digitalWrite(R_slingshot_r,LOW);
}
//L_tunnel----------------------------------------------------------------------
if(digitalRead(L_tunnel_s) == HIGH){
  digitalWrite(L_tunnel_r,HIGH);
}
else{
  digitalWrite(L_tunnel_r,LOW);
}

//R_tunnel---------------------------------------------------------------------
if(digitalRead(L_tunnel_s) == HIGH){
  digitalWrite(L_tunnel_r,HIGH);
}
else{
  digitalWrite(L_tunnel_r,LOW);
}

//L_loss------------------------------------------------------------------------
if(digitalRead(L_loss_s) == HIGH){
  digitalWrite(L_loss_r,HIGH);
}
else{
  digitalWrite(L_loss_r,LOW);
}

//R_loss------------------------------------------------------------------------
if(digitalRead(R_loss_s) == HIGH){
  digitalWrite(R_loss_r,HIGH);
}
else{
  digitalWrite(R_loss_r,LOW);
}

//C_loss-----------------------------------------------------------------------
if(digitalRead(C_loss_s) == HIGH){
  digitalWrite(C_loss_r,HIGH);
}
else{
  digitalWrite(C_loss_r,LOW);
}

//L_bumper_bonus--------------------------------------------------------------
if(digitalRead(L_bumper_bonus_s) == HIGH){
  digitalWrite(L_bumper_bonus_r,HIGH);
}
else{
  digitalWrite(L_bumper_bonus_r,LOW);
}
//R_bumper_bonus--------------------------------------------------------------
if(digitalRead(R_bumper_bonus_s) == HIGH){
  digitalWrite(R_bumper_bonus_r,HIGH);
}
else{
  digitalWrite(R_bumper_bonus_r,LOW);
}
//L_launch--------------------------------------------------------------------
if(digitalRead(L_launch_s) == HIGH){
  digitalWrite(L_launch_r,HIGH);
}
else{
  digitalWrite(L_launch_r,LOW);
}
//R_launch--------------------------------------------------------------------
if(digitalRead(R_launch_s) == HIGH){
  digitalWrite(R_launch_r,HIGH);
}
else{
  digitalWrite(R_launch_r,LOW);
}
//load------------------------------------------------------------------------
if(digitalRead(load_s) == HIGH){
  digitalWrite(load_r,HIGH);
}
else{
  digitalWrite(load_r,LOW);
}
}
