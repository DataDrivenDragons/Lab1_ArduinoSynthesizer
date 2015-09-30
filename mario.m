noteSamples = 11000*.05*1.5;
t = linspace(0, 0.05*1.5, noteSamples);
%%E7
noteF = 2637.02;
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
E7 = floor(y);
%%A7
noteF = 3520.00;
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
A7 = floor(y);
%%A6
noteF = 1760;
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
A6 = floor(y);
%%C7
noteF = 2093;
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
C7 = floor(y);
%%G7
noteF = 3135.96;
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
G7 = floor(y);
%%G6
noteF = 1567.98;
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
G6 = floor(y);
%%E6
noteF = 1318.51;
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
E6 = floor(y);
%%B6
noteF = 1975.53;
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
B6 = floor(y);
%%AS6
noteF = 1864.66;
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
AS6 = floor(y);
%%F7
noteF = 2793.83;
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
F7 = floor(y);
%%D7
noteF = 2349.32;
x = cos(2*pi*noteF*t);
y = x+1;
y = y.*128;
D7 = floor(y);
%%Play music
sixteenth = floor(.75*noteSamples);
rest = zeros(1,noteSamples);
m1 = horzcat(E7,E7,rest,E7,rest,C7,E7,rest,G7,rest,rest,rest,G6,rest,rest,rest);
m2 = horzcat(C7,rest,rest,G6,rest,rest,E6,rest,rest,A6,rest,B6,rest,AS6,A6,rest);
m3 = horzcat(G6(1,1:sixteenth),E7(1,1:sixteenth),G7(1,1:sixteenth));
m4 = horzcat(A7,rest,F7,G7,rest,E7,rest,C7,D7,B6,rest,rest);

marioOut = horzcat(m1,m2,m3,m4,m2,m3,m4);