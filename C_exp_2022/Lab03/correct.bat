
:loop  
    rand.exe > in.txt
    lab03_educoder_3.exe <in.txt >myout.txt
    xkgg_3.exe <in.txt >stdout.txt
    fc myout.txt stdout.txt
    echo ok
if not errorlevel 1 goto loop  
pause
goto loop