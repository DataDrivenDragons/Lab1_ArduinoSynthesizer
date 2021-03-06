#include <avr/pgmspace.h>
#define SONGLENGTH 149
typedef struct note {
  int ts;
  const PROGMEM byte vals[122];
} note;

typedef enum {
  AA4,
  AS4,
  AA5,
  B4,
  C5,
  D5,
  DS5,
  E4,
  E5,
  F5,
  FS5,
  G4,
  G5, 
  REST
} song;

note rest = {1, {0}};

note aa4 = {90, {255,254,253,252,249,247,243,239,235,230,224,218,211,
        204,197,189,181,173,165,156,147,138,129,120,111,102,
        94,85,77,69,61,53,46,39,33,27,22,17,13,9,6,3,1,0,0,0,
        0,1,3,6,9,13,17,22,27,33,39,46,53,61,69,77,85,94,102,
        111,120,129,138,147,156,165,173,181,189,197,204,211,
        218,224,230,235,239,243,247,249,252,253,254,255}
      };

note as4 = {85, {255,254,253,251,249,246,242,237,232,227,220,214,206,
        199,191,182,174,165,155,146,137,127,117,108,99,89,80,
        72,63,55,48,40,34,27,22,17,12,8,5,3,1,0,0,0,1,3,5,8,
        12,17,22,27,34,40,48,55,63,72,80,89,99,108,117,127,
        137,146,155,165,174,182,191,199,206,214,220,227,232,
        237,242,246,249,251,253,254,255}
      };

note aa5 PROGMEM= {45, {255,253,249,243,234,223,210,196,180,163,145,127,109,
        91,74,58,44,31,20,11,5,1,0,1,5,11,20,31,44,58,74,91,
        109,127,145,163,180,196,210,223,234,243,249,253,255}
      };

note b4 ={80, {255,254,253,251,248,245,240,235,230,223,216,209,201,
        192,183,174,164,155,145,135,124,114,104,94,85,75,66,
        57,49,41,34,28,22,16,12,8,4,2,0,0,0,0,2,4,8,12,16,22,
        28,34,41,49,57,66,75,85,94,104,114,124,135,145,155,164,
        174,183,192,201,209,216,223,230,235,240,245,248,251,253,254,255}
      };

note c5 = {76, {255,254,253,250,247,243,239,233,227,220,212,204,195,
        186,176,166,156,146,135,124,114,103,93,83,73,63,54,
        46,38,30,24,18,13,8,5,2,1,0,0,1,2,5,8,13,18,24,30,38,
        46,54,63,73,83,93,103,114,124,135,146,156,166,176,186,
        195,204,212,220,227,233,239,243,247,250,253,254,255}
      };

note d5 = {68, {255,254,252,249,246,241,235,228,220,212,202,192,182,
        171,160,148,136,124,112,100,89,78,67,56,47,38,30,22,
        16,11,6,3,1,0,0,1,3,6,11,16,22,30,38,47,56,67,78,89,
        100,112,124,136,148,160,171,182,192,202,212,220,228,
        235,241,246,249,252,254,255}
      };

note ds5 = {64, {255,254,252,249,244,239,232,225,216,206,196,
                185,174,162,149,137,124,111,99,86,75,63,53,43,
                34,25,18,12,7,3,1,0,0,1,3,7,12,18,25,34,43,53,
                63,75,86,99,111,124,137,149,162,174,185,196,206,
                216,225,232,239,244,249,252,254,255}
      };

note e4 = {121, {255,254,254,253,252,250,248,246,243,241,237,234,230,
        226,222,217,212,207,202,196,191,185,179,173,166,160,154,
        147,140,134,127,120,114,107,100,94,88,81,75,69,63,58,52,
        47,42,37,32,28,24,20,17,13,11,8,6,4,2,1,0,0,0,0,0,1,2,4,
        6,8,11,13,17,20,24,28,32,37,42,47,52,58,63,69,75,81,88,
        94,100,107,114,120,127,134,140,147,154,160,166,173,179,
        185,191,196,202,207,212,217,222,226,230,234,237,241,243,
        246,248,250,252,253,254,254,255}
      };

note e5 = {60, {255,254,252,248,243,237,229,221,211,200,189,177,164,151,
        137,124,110,97,84,71,59,48,38,29,21,14,8,4,1,0,0,1,4,8,
        14,21,29,38,48,59,71,84,97,110,124,137,151,164,177,189,
        200,211,221,229,237,243,248,252,254,255}
      };

note f5 = {57, {255,254,251,247,242,235,227,217,206,195,182,169,155,141,
        127,113,99,85,72,59,48,37,27,19,12,7,3,0,0,0,3,7,12,19,
        27,37,48,59,72,85,99,113,127,141,155,169,182,195,206,217,
        227,235,242,247,251,254,255}
      };

note fs5 = {54, {255,254,251,247,240,233,224,213,201,189,175,161,146,
          131,116,101,86,72,59,47,36,26,17,10,5,2,0,0,2,5,10,17,26,36,
          47,59,72,86,101,116,131,146,161,175,189,201,213,224,233,240,
          247,251,254,255}
        };

note g4 = {102, {255,254,254,252,251,248,246,243,239,235,231,226,221,215,
        209,203,196,190,183,175,168,160,153,145,137,129,121,113,
        105,98,90,82,75,68,61,54,48,42,36,31,26,21,17,13,10,7,4,
        3,1,0,0,0,0,1,3,4,7,10,13,17,21,26,31,36,42,48,54,61,68,
        75,82,90,98,105,113,121,129,137,145,153,160,168,175,183,
        190,196,203,209,215,221,226,231,235,239,243,246,248,251,
        252,254,254,255}
      };

note g5 = {51, {255,253,250,246,239,230,220,208,195,181,166,151,135,119,
        103,88,73,59,46,34,24,15,8,4,1,0,1,4,8,15,24,34,46,59,73,
        88,103,119,135,151,166,181,195,208,220,230,239,246,250,253,255}
      };
      
song mario[] = {E5, E5, REST, E5, REST, C5, E5, G5, REST, G4, 
    REST, C5, G4, REST, E4, AA4, B4, AS4, AA4, G4, E5, G5, AA5, 
    F5, G5, REST, E5, C5, D5, B4, REST, C5, G4, REST, E4, AA4, 
    B4, AS4, AA4, G4, E5, G5, AA5, F5, G5, REST, E5, C5, D5, B4, 
    REST, REST, G5, FS5, F5, DS5, E5, REST, AS4, B4, C5, REST, 
    AA4, C5, D5, REST, G5, FS5, F5, DS5, E5, REST, C5, REST, C5, 
    REST, C5, REST, G5, FS5, F5, DS5, E5, REST, AS4, B4, C5, REST, 
    AA4, C5, D5, REST, G5, FS5, F5, DS5, E5, REST, AS4, B4, C5, REST, 
  AA4, C5, D5, REST, DS5, REST, D5, REST, C5, REST, C5, C5, C5, REST, 
  C5, D5, E5, C5, AA4, G4, C5, C5, REST, C5, D5, E5, C5, C5, C5, REST, C5, D5, E5, C5, AA4, G4};

//const PROGMEM short dur[] = {3000, 3000, 3000, 3000, 3000, 3000, 6000, 6000, 6000, 
//             6000, 6000, 9000, 3000, 6000, 9000, 6000, 6000, 3000, 6000, 
//            4500, 4500, 4500, 6000, 3000,
//            3000, 3000, 6000, 3000, 3000, 
//          6000, 3000, 9000, 3000, 6000, 9000, 6000, 6000, 3000, 6000, 
//        4500, 4500, 4500, 6000, 3000, 3000, 3000, 6000, 3000, 3000, 
//      6000, 3000, 6000, 3000, 3000, 3000, 6000, 3000, 3000, 3000, 
//    3000, 3000, 3000, 3000, 3000, 3000, 6000, 3000, 3000, 3000, 
//  6000, 3000, 3000, 3000, 3000, 3000, 3000, 12000, 6000, 3000, 
//3000, 3000, 6000, 3000, 3000, 3000, 3000, 3000, 3000, 3000, 
//3000, 3000, 6000, 3000, 3000, 3000, 6000, 3000, 3000, 3000, 
//3000, 3000, 3000, 3000, 3000, 3000, 6000, 6000, 3000, 6000, 
//3000, 12000, 12000, 3000, 6000, 3000, 3000, 3000, 6000, 3000, 
//6000, 3000, 12000, 3000, 6000, 3000, 3000, 3000, 3000, 3000, 
//6000, 3000, 3000, 3000, 6000, 3000, 6000, 3000, 12000, 3000, 
//3000, 3000, 3000, 3000, 3000, 6000, 6000, 6000, 6000, 6000};

const byte dur[] = {30, 30, 30, 30, 30, 30, 60, 60, 60, 60, 60, 90, 30, 60, 90, 60, 60, 30, 60, 45, 45, 45, 60, 30, 30, 30, 60, 30, 30, 60, 30, 90, 30, 60, 90, 60, 60, 30, 60, 45, 45, 45, 60, 30, 30, 30, 60, 30, 30, 60, 30, 60, 30, 30, 30, 60, 30, 30, 30, 30, 30, 30, 30, 30, 30, 60, 30, 30, 30, 60, 30, 30, 30, 30, 30, 30, 120, 60, 30, 30, 30, 60, 30, 30, 30, 30, 30, 30, 30, 30, 30, 60, 30, 30, 30, 60, 30, 30, 30, 30, 30, 30, 30, 30, 30, 60, 60, 30, 60, 30, 120, 120, 30, 60, 30, 30, 30, 60, 30, 60, 30, 120, 30, 60, 30, 30, 30, 30, 30, 60, 30, 30, 30, 60, 30, 60, 30, 120};


void setup(){
  DDRD = B11111111;
  PORTD = B00000000;
  
  cli();//disable interrupts
  //set timer0 interrupt at 40kHz
  TCCR0A = 0;// set entire TCCR0A register to 0
  TCCR0B = 0;// same for TCCR0B
  TCNT0  = 0;//initialize counter value to 0
  // set compare match register for 40khz increments
  OCR0A = 49;// = (16*10^6) / (40000*8) - 1 (must be <256)
  // turn on CTC mode
  TCCR0A |= (1 << WGM01);
  // Set CS11 bit for 8 prescaler
  TCCR0B |= (1 << CS11); 
  // enable timer compare interrupt
  TIMSK0 |= (1 << OCIE0A);
  sei();//enable interrupts
}

int s;
int len;
int i = 0;
note *mNote;

ISR(TIMER0_COMPA_vect){ //40kHz interrupt routine
  if (i>138) {
    i = 0;
  }
  switch(mario[i]) {
    case AA4:
      mNote = &aa4;
      break;
    case AA5:
      mNote = &aa5;
      break;
    case AS4:
      mNote = &as4;
      break;
    case C5:
      mNote = &c5;
      break;
    case D5:
      mNote = &d5;
      break;
    case DS5:
      mNote = &ds5;
      break;
    case E4:
      mNote = &e4;
      break;
    case E5:
      mNote = &e5;
      break;
    case F5:
      mNote = &f5;
      break;
    case FS5:
      mNote = &fs5;
      break;
    case G4:
      mNote = &g4;
      break;
    case G5:
      mNote = &g5;
      break;
    default:
      mNote = &rest;
  }
  len = floor(dur[i]*100/(mNote->ts));
  for (int j=0; j<len; j++) {
    for (int k=0; k<mNote->ts; k++) {
      PORTD = mNote->vals[k];
      delayMicroseconds(50);
    }
  }
  i++;
}

void loop(){
}
