function piano = mario3
noteSamples = 40000;
function freq = key(n)
    freq = 440*2^((n-49)/12);
end
start = 43;
piano = zeros(19,noteSamples*.05*1.5);
t = linspace(0, .05*1.5, noteSamples*.05*1.5);
for i=1:19
    f = key(start+i);
    piano(i,:) = floor((cos(2*pi*f*t)+1).*128);
end
rest = zeros(1,noteSamples*.05*1.5);
sixteenth = floor(.75*noteSamples*.05*1.5);
E4 = piano(1,:);
G4 = piano(4,:);
A4 = piano(6,:);
AS4 = piano(7,:);
B4 = piano(8,:);
C5 = piano(9,:);
D5 = piano(11,:);
E5 = piano(13,:);
F5 = piano(14,:);
G5 = piano(16,:);
A5 = piano(18,:);

m1 = horzcat(E5,E5,rest,E5,rest,C5,E5,rest,G5,rest,rest,rest,G4,rest,rest,rest);
m2 = horzcat(C5,rest,rest,G4,rest,rest,E4,rest,rest,A4,rest,B4,rest,AS4,A4,rest);
m3 = horzcat(G4(1,1:sixteenth),E5(1,1:sixteenth),G5(1,1:sixteenth));
m4 = horzcat(A5,rest,F5,G5,rest,E5,rest,C5,D5,B4,rest,rest);

marioOut = horzcat(m1,m2,m3,m4,m2,m3,m4);
sound(marioOut', noteSamples/2, 8);
end