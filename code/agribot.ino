int m11=4; 
int m12=5; 
int m21=6; 
int m22=7; 
 
int r11=10; 
int r12=11; 
int r21=8; 
int r22=9; 
 
int dr1=2; 
int dr2=3; 
int md=1; 
void setup() { 
  Serial.begin(9600); 
  pinMode(m11,OUTPUT); 
  pinMode(m12,OUTPUT); 
  pinMode(m21,OUTPUT); 
  pinMode(m22,OUTPUT); 
 
  pinMode(r11,OUTPUT); 
  pinMode(r12,OUTPUT); 
  pinMode(r21,OUTPUT); 
  pinMode(r22,OUTPUT); 
  pinMode(dr1,OUTPUT); 
  pinMode(dr2,OUTPUT); 
  delay(1000); 
  digitalWrite(m11,0); 
  digitalWrite(m12,0); 
  digitalWrite(m21,0); 
  digitalWrite(m22,0); 
 
  digitalWrite(r11,0); 
  digitalWrite(r12,0); 
  digitalWrite(r21,0); 
  digitalWrite(r22,0); 
  digitalWrite(dr1,0); 
  digitalWrite(dr2,0); 
   
  delay(500); 
} 
 
void loop() { 
if(md==0) 
{ 
  Serial.println("clock"); 
  clk(); 
  delay(10000); 
   Serial.println("Aclock"); 
  aclk(); 
   delay(10000); 
    Serial.println("dstop"); 
   dstop(); 
   delay(500); 
    Serial.println("Front"); 
   front(); 
   delay(2000); 
   delay(500); 
    Serial.println("stop"); 
   stop(); 
   delay(500); 
    Serial.println("Pick"); 
   pick(); 
   delay(3000); 
   rstop(); 
   delay(500); 
    Serial.println("down"); 
   down(); 
   delay(5000); 
   delay(500); 
    Serial.println("place"); 
   place(); 
   delay(3000); 
   rstop(); 
   delay(500); 
    Serial.println("rstop"); 
   up(); 
   delay(500); 
    Serial.println("up"); 
   delay(7000); 
   rstop(); 
   delay(500); 
    Serial.println("rstop"); 
   front(); 
   delay(500); 
    Serial.println("front"); 
   delay(5000); 
   delay(500); 
    Serial.println("stop"); 
   stop(); 
} 
  if(Serial.available()) 
  { 
    int x=Serial.read(); 
    if(x=='1') 
    { 
      front(); 
    } 
    if(x=='2') 
    { 
     back(); 
    } 
    if(x=='3') 
    { 
      left(); 
    } 
    if(x=='4') 
    { 
     right(); 
    } 
 
 
    if(x=='5') 
    { 
      stop(); 
    } 
if(x=='6') 
    { 
 place(); 
  delay(500); 
  rstop(); 
    } 
if(x=='7') 
    { 
   pick(); 
  delay(500); 
  rstop(); 
    } 
if(x=='8') 
    { 
  up(); 
  delay(500); 
  rstop(); 
    } 
    if(x=='9') 
    { 
   down(); 
  delay(500); 
  rstop(); 
    } 
     if(x=='A') 
    { 
   clk(); 
    } 
     if(x=='B') 
    { 
   aclk(); 
    } 
     if(x=='C') 
    { 
    dstop(); 
    } 
     if(x=='D') 
    { 
    md=0; 
    } 
        if(x=='E') 
    { 
    md=1; 
    } 
  } 
} 
void front() 
{ 
digitalWrite(m11,1); 
  digitalWrite(m12,0); 
  digitalWrite(m21,1); 
  digitalWrite(m22,0);   
} 
void back() 
{ 
digitalWrite(m11,0); 
  digitalWrite(m12,1); 
  digitalWrite(m21,0); 
  digitalWrite(m22,1);   
} 
void left() 
{ 
digitalWrite(m11,1); 
  digitalWrite(m12,0); 
  digitalWrite(m21,0); 
  digitalWrite(m22,1);   
} 
void right() 
{ 
digitalWrite(m11,0); 
  digitalWrite(m12,1); 
  digitalWrite(m21,1); 
  digitalWrite(m22,0);   
} 
void stop() 
{ 
digitalWrite(m11,0); 
  digitalWrite(m12,0); 
  digitalWrite(m21,0); 
  digitalWrite(m22,0);   
} 
void up() 
{ 
  digitalWrite(r11,0); 
  digitalWrite(r12,1); 
} 
void down() 
{ 
  digitalWrite(r11,1); 
  digitalWrite(r12,0); 
} 
void pick() 
{ 
  digitalWrite(r21,0); 
  digitalWrite(r22,1); 
} 
void place() 
{ 
  digitalWrite(r21,1); 
  digitalWrite(r22,0); 
} 
void rstop() 
{ 
  digitalWrite(r21,0); 
  digitalWrite(r22,0); 
    digitalWrite(r11,0); 
  digitalWrite(r12,0); 
} 
void clk() 
{ 
  digitalWrite(dr1,1); 
  digitalWrite(dr2,0); 
} 
void aclk() 
{ 
  digitalWrite(dr1,0); 
  digitalWrite(dr2,1); 
} 
void dstop() 
{ 
  delay(1000); 
   digitalWrite(dr1,0); 
  digitalWrite(dr2,0); 
} 
