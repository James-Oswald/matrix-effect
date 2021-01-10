
#compile
gcc -o build/matrix main.c

if grep -q Microsoft /proc/version; then
  cmd.exe /c start cmd.exe /c wsl.exe build/matrix
else
  build/matrix
fi