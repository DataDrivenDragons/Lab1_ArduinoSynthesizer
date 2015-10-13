#include <avr/pgmspace.h>
#define SONGLENGTH 138
//Struct to hold waveform array and size
typedef struct note {
  int ts;
  const PROGMEM byte vals[61];
} note; 
//Allows for an expressive song array
typedef enum {
  AA5,
  AS5,
  AA6,
  B5,
  C6,
  D6,
  DS6,
  E5,
  E6,
  F6,
  FS6,
  G5,
  G6, 
  REST
} song;
//Initializing all note structs
note rest = {1, {0}};

note aa6 = {22, {255,249,232,206,174,137,99,63,34,12,1,1,12,34,63,99,137,174,206,232,249,255}
      };

note as5 = {42, {255,253,249,241,231,219,204,188,170,151,132,112,93,75,58,42,29,17,9,3,0,0,3,9,17,29,42,58,75,93,112,132,151,170,188,204,219,231,241,249,253,255}
      };

note aa5 = {45, {255,253,249,243,234,223,210,196,180,163,145,127,109,
        91,74,58,44,31,20,11,5,1,0,1,5,11,20,31,44,58,74,91,
        109,127,145,163,180,196,210,223,234,243,249,253,255}
      };

note b5 ={40, {255,253,248,240,229,215,199,182,162,142,122,101,82,63,46,32,19,10,3,0,0,3,10,19,32,46,63,82,101,122,142,162,182,199,215,229,240,248,253,255}
      };

note c6 = {38, {255,253,247,238,226,211,194,175,154,132,111,90,70,51,35,21,11,4,0,0,4,11,21,35,51,70,90,111,132,154,175,194,211,226,238,247,253,255}
      };

note d6 = {34, {255,252,245,234,219,201,180,157,133,109,85,63,44,27,14,5,0,0,5,14,27,44,63,85,109,133,157,180,201,219,234,245,252,255}
      };

note ds6 = {32, {255,252,244,232,215,194,171,146,121,95,71,49,30,16,5,0,0,5,16,30,49,71,95,121,146,171,194,215,232,244,252,255}
      };

note e6 = {30, {255,252,243,229,210,187,161,134,106,80,55,34,18,6,0,0,6,18,34,55,80,106,134,161,187,210,229,243,252,255}
      };

note e5 = {60, {255,254,252,248,243,237,229,221,211,200,189,177,164,151,
        137,124,110,97,84,71,59,48,38,29,21,14,8,4,1,0,0,1,4,8,
        14,21,29,38,48,59,71,84,97,110,124,137,151,164,177,189,
        200,211,221,229,237,243,248,252,254,255}
      };

note f6 = {28, {255,251,241,225,203,178,149,120,90,63,40,20,7,0,0,7,20,40,63,90,120,149,178,203,225,241,251,255}
      };

note fs6 = {27, {255,251,240,222,199,172,142,112,82,55,32,14,3,0,3,14,32,55,82,112,142,172,199,222,240,251,255}
        };

note g6 = {25, {255,250,237,217,191,160,127,94,63,37,17,4,0,4,17,37,63,94,127,160,191,217,237,250,255}
      };

note g5 = {51, {255,253,250,246,239,230,220,208,195,181,166,151,135,119,
        103,88,73,59,46,34,24,15,8,4,1,0,1,4,8,15,24,34,46,59,73,
        88,103,119,135,151,166,181,195,208,220,230,239,246,250,253,255}
      };
//Array of song enums with the actual notes in the song      
song mario[] = {E6, E6, REST, E6, REST, C6, E6, G6, REST, G5, REST, C6, G5, REST, E5, AA5, B5, AS5, AA5, G5, E6, G6, AA6, F6, G6, REST, E6, C6, D6, B5, REST, C6, G5, REST, E5, AA5, B5, AS5, AA5, G5, E6, G6, AA6, F6, G6, REST, E6, C6, D6, B5, REST, REST, G6, FS6, F6, DS6, E6, REST, AS5, B5, C6, REST, AA5, C6, D6, REST, G6, FS6, F6, DS6, E6, REST, C6, REST, C6, REST, C6, REST, G6, FS6, F6, DS6, E6, REST, AS5, B5, C6, REST, AA5, C6, D6, REST, G6, FS6, F6, DS6, E6, REST, AS5, B5, C6, REST, AA5, C6, D6, REST, DS6, REST, D6, REST, C6, REST, C6, C6, C6, REST, C6, D6, E6, C6, AA5, G5, C6, C6, REST, C6, D6, E6, C6, C6, C6, REST, C6, D6, E6, C6, AA5, G5};
//Duration of each note
const byte dur[] = {30, 30, 30, 30, 30, 30, 60, 60, 60, 60, 60, 90, 30, 60, 90, 60, 60, 30, 60, 45, 45, 45, 60, 30, 30, 30, 60, 30, 30, 60, 30, 90, 30, 60, 90, 60, 60, 30, 60, 45, 45, 45, 60, 30, 30, 30, 60, 30, 30, 60, 30, 60, 30, 30, 30, 60, 30, 30, 30, 30, 30, 30, 30, 30, 30, 60, 30, 30, 30, 60, 30, 30, 30, 30, 30, 30, 120, 60, 30, 30, 30, 60, 30, 30, 30, 30, 30, 30, 30, 30, 30, 60, 30, 30, 30, 60, 30, 30, 30, 30, 30, 30, 30, 30, 30, 60, 60, 30, 60, 30, 120, 120, 30, 60, 30, 30, 30, 60, 30, 60, 30, 120, 30, 60, 30, 30, 30, 30, 30, 60, 30, 30, 30, 60, 30, 60, 30, 120};


void setup(){
  //Initialize Ports for manual addressing
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
//declare variables for interupt function
int s;
int len;
int i = 0;
note *mNote;

ISR(TIMER0_COMPA_vect){ //40kHz interrupt routine
  if (i>138) {
    i = 0;
  }
  //based on the enum set pointer to note
  switch(mario[i]) {
    case AA5:
      mNote = &aa5;
      break;
    case AA6:
      mNote = &aa6;
      break;
    case AS5:
      mNote = &as5;
      break;
    case C6:
      mNote = &c6;
      break;
    case D6:
      mNote = &d6;
      break;
    case DS6:
      mNote = &ds6;
      break;
    case E5:
      mNote = &e5;
      break;
    case E6:
      mNote = &e6;
      break;
    case F6:
      mNote = &f6;
      break;
    case FS6:
      mNote = &fs6;
      break;
    case G5:
      mNote = &g5;
      break;
    case G6:
      mNote = &g6;
      break;
    default:
      mNote = &rest;
  }
  //calculate how many cosine waves make up the note played given duration
  len = floor(dur[i]*100/(mNote->ts));
  //loop and write to portD
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
