#!/bin/bash -e
echo "*******************************************************"
echo "  Iniciando Servidor de Quake III Arena "
echo "      Script by MeLkOr "
echo "*******************************************************"
./quake3e.ded.x64 +set com_hunkmegs 128 +set fs_game baseq3 +set gamename baseq3 +set dedicated 2 +set cl_punkbuster 0 $@
echo ""
echo "*******************************************************"
echo "  FIN - SERVIDOR Q3A DETENIDO"
echo "*******************************************************"
