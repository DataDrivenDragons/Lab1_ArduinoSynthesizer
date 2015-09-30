noteSamples = 40000*.05*1.5;
t = linspace(0, 0.05*1.5, noteSamples);

%%E5
noteF = 659.255;
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
E5 = floor(y);
%%A5
noteF = 880.000;
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
A5 = floor(y);
%%A4
noteF = 440.000;
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
A4 = floor(y);
%%C5
noteF = 523.251;
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
C5 = floor(y);
%%G5
noteF = 783.991;
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
G5 = floor(y);
%%G4
noteF = 391.995;
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
G4 = floor(y);
%%E4
noteF = 329.628;
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
E4 = floor(y);
%%B4
noteF = 493.883;
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
B4 = floor(y);
%%AS4
noteF = 466.164;
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
AS4 = floor(y);
%%F5
noteF = 698.456;
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
F5 = floor(y);
%%D5
noteF = 587.330;
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
D5 = floor(y);
%%Play music
sixteenth = floor(.75*noteSamples);
rest = zeros(1,noteSamples);
m1 = horzcat(E5,E5,rest,E5,rest,C5,E5,rest,G5,rest,rest,rest,G4,rest,rest,rest);
m2 = horzcat(C5,rest,rest,G4,rest,rest,E4,rest,rest,A4,rest,B4,rest,AS4,A4,rest);
m3 = horzcat(G4(1,1:sixteenth),E5(1,1:sixteenth),G5(1,1:sixteenth));
m4 = horzcat(A5,rest,F5,G5,rest,E5,rest,C5,D5,B4,rest,rest);

marioOut = horzcat(m1,m2,m3,m4,m2,m3,m4);