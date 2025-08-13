# Github y git 
Github es una plataforma de microsoft diseñada principalmente para
compartir código y tenerlo en la nube.

git es una herramienta que por la terminal de linux 
nos permite interactuar con github y subir nuestro código.

## Descargar git en windows 
- Busca git windows
- ve a la pagina que dice descargas
- le das click donde dice "Download for windows"
- Abres el instalador y "Siguiente, siguiente y siguiente"

## Descargar un repositorio 

- git clone https://github.com/(usuario)/(Nombre del repositorio).git 
 ejemplo: git clone MiguelVRRL/Busca-Minas.git

## subir código
En git para subir código constamos de 3 fases: add, commit y push 

### Add
Consiste en seleccionar los archivos que vamos a subir, para esto se usa git add (files). ejemplo:

Añadir archivo por archivo (recomendado)
- git add src/main.cpp src/windows/windows.cpp src/windows/windows.h
Añadir una carpeta entera (depende del caso puede ser bueno)
- git add lib/
Añadir todo de golpe (solo recomendado en el setup)
- git add . 

### commit
Consiste en reunir los archivos seleccionados y darles un mensaje informativo sobre que estamos subiendo
para esto hay convenciones, véase https://gist.github.com/qoomon/5dfcdf8eec66a051ecd85625518cfd13
Ejemplo:

- git commit -m "feat: new feature added"

### push
Este es el paso final, donde ya subimos el código a github. para estoy hay dos opciones
- usar windows con git-bash, donde la primera vez que hagamos un push nos pedira loggearnos desde 
la página (recomendado para principiantes o si usar windows y ya)
- usar wsl, donde cada vez que hagamos un push nos pedira nuestro nombre de usuario y un token

ejemplo:
- git push

Y bueno este seria el uso básico de git


