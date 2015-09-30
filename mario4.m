noteSamples = 40000;
%%E5
noteF = 659.255;
t = linspace(0, 1/noteF, noteSamples/noteF);
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
E5 = floor(y);
%%A5
noteF = 880.000;
t = linspace(0, 1/noteF, noteSamples/noteF);
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
A5 = floor(y);
%%A4
noteF = 440.000;
t = linspace(0, 1/noteF, noteSamples/noteF);
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
A4 = floor(y);
%%C5
noteF = 523.251;
t = linspace(0, 1/noteF, noteSamples/noteF);
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
C5 = floor(y);
%%G5
noteF = 783.991;
t = linspace(0, 1/noteF, noteSamples/noteF);
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
G5 = floor(y);
%%G4
noteF = 391.995;
t = linspace(0, 1/noteF, noteSamples/noteF);
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
G4 = floor(y);
%%E4
noteF = 329.628;
t = linspace(0, 1/noteF, noteSamples/noteF);
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
E4 = floor(y);
%%B4
noteF = 493.883;
t = linspace(0, 1/noteF, noteSamples/noteF);
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
B4 = floor(y);
%%AS4
noteF = 466.164;
t = linspace(0, 1/noteF, noteSamples/noteF);
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
AS4 = floor(y);
%%F5
noteF = 698.456;
t = linspace(0, 1/noteF, noteSamples/noteF);
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
F5 = floor(y);
%%D5
noteF = 587.330;
t = linspace(0, 1/noteF, noteSamples/noteF);
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
D5 = floor(y);