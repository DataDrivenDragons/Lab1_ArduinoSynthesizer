#define SAMPLES_A4 90
#define SAMPLES_E4 121
const PROGMEM byte a4[91] = {256,255,254,253,250,248,244,240,236,231,225,219,212,205,198,190,182,174,165,157,148,139,130,121,112,103,94,85,77,69,61,53,46,39,33,27,22,17,13,9,6,3,1,0,0,0,0,1,3,6,9,13,17,22,27,33,39,46,53,61,69,77,85,94,103,112,121,130,139,148,157,165,174,182,190,198,205,212,219,225,231,236,240,244,248,250,253,254,255,256};
const PROGMEM byte e4[122] = {256,255,255,254,253,251,249,247,244,242,238,235,231,227,223,218,213,208,203,197,192,186,180,173,167,161,154,148,141,134,128,121,114,107,101,94,88,82,75,69,64,58,52,47,42,37,32,28,24,20,17,13,11,8,6,4,2,1,0,0,0,0,0,1,2,4,6,8,11,13,17,20,24,28,32,37,42,47,52,58,63,69,75,82,88,94,101,107,114,121,127,134,141,148,154,161,167,173,180,186,191,197,203,208,213,218,223,227,231,235,238,242,244,247,249,251,253,254,255,255,256};
int len = floor(3000/SAMPLES_E4);
int len2 = floor(3000/SAMPLES_A4);
void setup(){
  DDRD = B11111111;
  PORTD = B00000000;
//  Serial.begin(9600);
}

void loop(){
//  Serial.println("Begin Song");
    for (int j=0; j<len; j++){
      for (int i=0; i<SAMPLES_E4; i++) {
        PORTD = e4[i];
        delayMicroseconds(50);
      }
    }
     for (int n=0; n<3001; n++){
        PORTD=B00000000;
        delayMicroseconds(50);
    }
     for (int m=0; m<len2; m++){
      for (int k=0; k<SAMPLES_A4; k++) {
        PORTD = a4[k];
        delayMicroseconds(50);
      }
    }
//    delay(100);
//    for (int k=0; k<SAMPLES; k++) {
////        Serial.println(C5[i]);
//      PORTD = C5[k];
//      delayMicroseconds(50);

//    }
}

