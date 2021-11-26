# scoala-info

Acest repository a fost creat cu scopul de a păstra o copie a teoriei dată la clasă + exerciții, dar și cu scopul personal de a mă familiariza cu Git și GitHub.
modificările vor veni în timp. încerc să aduc și explicații la ce este dat + variantele mai moderne cules de mine din diferite surse, folosind setul de librării STL, inclus C++. cei care doresc să aduce lucruri aici sunt bine poftiț! 

# Download

Ambele metode necesită clonarea/downloadarea repo-ului. Cea mai ușoară metoda este de a download tot. ![download-zip](https://i.imgur.com/ueG1Sz6.png)

Extragem din archiva ZIP ce dorim să rulă.

---

Pentru clonare, dacă avem Linux sau [Git for Windows](https://gitforwindows.org/), vom scrie:

<code>git clone https://github.com/winnyace/scoala-info</code>

Un folder cu același nume este acum present în directorul în care ne afla la cel moment. 

# Rulare

**Windows:**\
Cea mai ușoară modalitate de a rula fișirele este a instala [Code::Blocks cu tot cu compilatorul Mingw-W64.](https://www.fosshub.com/Code-Blocks.html?dwl=codeblocks-20.03mingw-setup.exe)

Deschidem Code::Blocks și tragem de fișierul pe care dorim să-l rulăm în fereastra Code::Blocks. După aceia, apăsăm <code>CTRL + F10</code> pentru a compila și rula programul nostru.

**Linux:**\
Modalitatea cea mai simplă de a rula fișierele este de a folosi GCC. Instalăm GCC, din terminal astfel:<br>

Debian/Ubuntu
\
<code>sudo apt install gcc g++</code>

Arch/Manjaro
\
<code>sudo pacman -S gcc</code>

Găsim fișierul pe care vrem să-l rulăm și, tot din terminal, vom compila fișierul astfel:

<code>g++ -o *nume_fisier* *nume_fisier*.cpp</code>

Pentru a rula fișierul compilat, vom face astfel:

<code>./*nume_fisier*</code>
