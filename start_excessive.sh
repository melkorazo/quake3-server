#!/bin/bash -e
echo "*******************************************************"
echo "  Iniciando Servidor de Quake III Arena "
echo "      Script by MeLkOr "
echo "*******************************************************"
./quake3e.ded.x64 +set com_hunkmegs 128 +set com_zoneMegs 24 +set sv_fps 80 +set fs_game excessiveplus +set gamename excessiveplus +set dedicated 2 +set cl_punkbuster 1 +set xp_antiWallhackLevel 2 +set xp_antiCheatLevel 5 +set vm_rtChecks 0 $@
echo ""
echo "*******************************************************"
echo "  FIN - SERVIDOR Q3A DETENIDO"
echo "*******************************************************"
