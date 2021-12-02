# quake3-server
Levantar servidores de Quake 3 Arena utilizando Linux.

Debemos tener en cuenta copiar los archivos del "pak0.pk3" al "pak8.pk3" en nuestra carpeta baseq3/ antes de iniciar el servidor.
Se obtienen de la instalación oficial de Quake 3 Arena.

## Comando para servidor FFA:
./start.sh +exec zone_ffa.cfg +set net_Port 27960

## Comando para servidor CTF:
./start.sh +exec zone_ctf.cfg +set net_Port 27963

## Comando para servidor InstaCTF:
./start.sh +exec zone_instactf.cfg +set net_Port 27970
./start.sh +exec zone_instactf_2.cfg +set net_Port 27962
./start.sh +exec zone_instactf_liga.cfg +set net_Port 27961

## Comando para servidor Freeze:
./start.sh +exec zone_freeze.cfg +set net_Port 27964

## Comando para servidor Duelo:
./start.sh +exec zone_duel.cfg +set net_Port 27966
