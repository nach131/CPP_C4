Aquí está la traducción al castellano del texto en inglés:

<documents>
<document index="1"> 
<source>es.subject.pdf</source>
<document_content>C++ - Módulo 03 
Herencia
Resumen:
Este documento contiene los ejercicios del Módulo 03 de los módulos de C++.  
Versión: 7

Contenido
I Introducción 2
II Reglas generales 3  
III Ejercicio 00: ¡Aaaaabre! 5
IV Ejercicio 01: ¡Serena, amor mío! 7
V Ejercicio 02: Trabajo repetitivo 8
VI Ejercicio 03: ¡Ahora es raro! 9
VII Entrega y evaluación entre pares 11
1

Capítulo I  
Introducción
C++ es un lenguaje de programación de propósito general creado por Bjarne Stroustrup como una extensión del lenguaje de programación C, o "C con Clases" (fuente: Wikipedia).

El objetivo de estos módulos es introducirte a la Programación Orientada a Objetos. 

Este será el punto de partida de tu viaje en C++. Se recomiendan muchos lenguajes para aprender POO. Decidimos elegir C++ ya que se deriva de tu viejo amigo C.

Debido a que este es un lenguaje complejo, y para mantener las cosas simples, tu código cumplirá con el estándar C++98.

Somos conscientes de que el C++ moderno es muy diferente en muchos aspectos. Así que si quieres convertirte en un desarrollador de C++ competente, depende de ti ir más allá después del Common Core 42!

2

Capítulo II
Reglas generales

Compilación

- Compila tu código con c++ y las banderas -Wall -Wextra -Werror
- Tu código aún debería compilar si agregas la bandera -std=c++98

Convenciones de formato y nomenclatura

- Los directorios de los ejercicios se nombrarán de esta forma: ex00, ex01, ..., exn
- Nombra tus archivos, clases, funciones, funciones miembro y atributos como se requiere en las pautas.
- Escribe los nombres de las clases en formato UpperCamelCase. Los archivos que contengan el código de la clase siempre se nombrarán de acuerdo con el nombre de la clase. Por ejemplo:
ClassName.hpp/ClassName.h, ClassName.cpp o ClassName.tpp. Entonces, si tienes un archivo de encabezado que contiene la definición de una clase "BrickWall" que representa una pared de ladrillos, su nombre será BrickWall.hpp.
- ¡Adiós Norminette! No se aplica ningún estilo de codificación en los módulos de C++. Puedes seguir el que más te guste. Pero ten en cuenta que un código que tus evaluadores entre pares no puedan entender es un código que no pueden calificar. Haz lo mejor posible para escribir un código limpio y legible.

Permitido/Prohibido

Ya no estás programando en C. ¡Es hora de C++! Por lo tanto:

- Se te permite utilizar casi todo de la biblioteca estándar. Por lo tanto, en lugar de apegarte a lo que ya conoces, sería inteligente usar tanto como sea posible las versiones al estilo de C++ de las funciones de C que estás acostumbrado.
- Sin embargo, no puedes usar ninguna otra biblioteca externa. Esto significa que las bibliotecas C++11 (y derivadas) y Boost están prohibidas. Las siguientes funciones también están prohibidas: *printf(), *alloc() y free(). Si las usas, tu calificación será 0 y eso es todo.

- Ten en cuenta que a menos que se indique explícitamente lo contrario, se prohíben las palabras clave using namespace <ns_name> y friend. De lo contrario, tu calificación será -42.

- Se te permite usar STL solo en los Módulos 08 y 09. Eso significa: no Contenedores (vector/list/map/etc.) y no Algoritmos (nada que requiera incluir el encabezado <algorithm>) hasta entonces. De lo contrario, tu calificación será -42.


Algunos requisitos de diseño

- La fuga de memoria también ocurre en C++. Cuando asignas memoria (usando la palabra clave new), debes evitar fugas de memoria.

- Del Módulo 02 al Módulo 09, tus clases deben estar diseñadas en la Forma Canónica Ortodoxa, excepto cuando se indique explícitamente lo contrario.

- Cualquier implementación de función puesta en un archivo de encabezado (excepto las plantillas de función) significa 0 para el ejercicio.

- Debes poder usar cada uno de tus encabezados de forma independiente de los demás. Por lo tanto, deben incluir todas las dependencias que necesitan. Sin embargo, debes evitar el problema de la inclusión doble agregando protecciones de inclusión. De lo contrario, tu calificación será 0.

Léame

- Puedes agregar algunos archivos adicionales si lo necesitas (es decir, para dividir tu código). Como estas tareas no se verifican mediante un programa, no dudes en hacerlo siempre y cuando entregues los archivos obligatorios.

- A veces, las pautas de un ejercicio parecen cortas pero los ejemplos pueden mostrar requisitos que no están explícitamente escritos en las instrucciones.

- ¡Lee cada módulo completamente antes de comenzar! De verdad, hazlo.

- ¡Por Odín, por Thor! ¡Usa tu cerebro!

Tendrás que implementar muchas clases. Esto puede parecer tedioso, a menos que puedas escribir un script para tu editor de texto favorito.

Se te da cierta libertad para completar los ejercicios. Sin embargo, sigue las reglas obligatorias y no seas perezoso. Te perderías mucha información útil. No dudes en leer sobre conceptos teóricos.

4

Capítulo III
Ejercicio 00: ¡Aaaaabre!  

Ejercicio: 00
¡Aaaaabre!

Directorio de entrega: ex00/

Archivos para entregar: Makefile, main.cpp, ClapTrap.{h, hpp}, ClapTrap.cpp

Funciones prohibidas: Ninguna

Primero, ¡tienes que implementar una clase! ¡Qué original!

Se llamará ClapTrap y tendrá los siguientes atributos privados inicializados con los valores especificados entre corchetes:

- Nombre, que se pasa como parámetro a un constructor
- Puntos de golpe (10), representan la salud del ClapTrap  
- Puntos de energía (10)
- Daño de ataque (0)

Agrega las siguientes funciones miembro públicas para que el ClapTrap se vea más realista:

- void attack(const std::string& target);
- void takeDamage(unsigned int amount);
- void beRepaired(unsigned int amount);

Cuando ClapTrack ataca, hace que su objetivo pierda <attack damage> puntos de golpe.

Cuando ClapTrap se repara, recupera <amount> puntos de golpe.
Atacar y repararse cuestan 1 punto de energía cada uno.

Por supuesto, ClapTrap no puede hacer nada si no le quedan puntos de golpe o de energía. 

En todas estas funciones miembro, tienes que imprimir un mensaje para describir lo que sucede. Por ejemplo, la función attack() puede mostrar algo como (por supuesto, sin los corchetes angulares):

ClapTrap <name> ataca a <target>, ¡causando <damage> puntos de daño! 

Los constructores y el destructor también deben mostrar un mensaje, para que tus evaluadores entre pares puedan ver fácilmente que se han llamado.

Implementa y entrega tus propias pruebas para asegurarte de que tu código funcione según lo esperado.

5

Capítulo IV
Ejercicio 01: ¡Serena, amor mío!

Ejercicio: 01 
¡Serena, amor mío!

Directorio de entrega: ex01/

Archivos para entregar: Archivos del ejercicio anterior + ScavTrap.{h, hpp}, ScavTrap.cpp

Funciones prohibidas: Ninguna

Como nunca se pueden tener suficientes ClapTraps, ahora crearás un robot derivado. 

Se llamará ScavTrap y heredará los constructores y el destructor de ClapTrap. Sin embargo, sus constructores, destructor y attack() imprimirán mensajes diferentes. Después de todo, los ClapTraps son conscientes de su individualidad.

Ten en cuenta que se debe mostrar el encadenamiento de construcción/destrucción adecuado en tus pruebas. Cuando se crea un ScavTrap, el programa comienza construyendo un ClapTrap. La destrucción es en orden inverso. ¿Por qué?

ScavTrap utilizará los atributos de ClapTrap (actualiza ClapTrap en consecuencia) y debe inicializarlos en:

- Nombre, que se pasa como parámetro a un constructor
- Puntos de golpe (100), representan la salud del ClapTrap
- Puntos de energía (50)  
- Daño de ataque (20)

ScavTrap también tendrá su propia capacidad especial:

void guardGate();

Esta función miembro mostrará un mensaje informando que ScavTrap ahora está en modo Guardian de puerta.

No olvides agregar más pruebas a tu programa.

6

Capítulo V
Ejercicio 02: Trabajo repetitivo  

Ejercicio: 02
Trabajo repetitivo

Directorio de entrega: ex02/

Archivos para entregar: Archivos de los ejercicios anteriores + FragTrap.{h, hpp}, FragTrap.cpp

Funciones prohibidas: Ninguna

Hacer ClapTraps probablemente comience a cansarte. 

Ahora, implementa una clase FragTrap que herede de ClapTrap. Es muy similar a ScavTrap. Sin embargo, sus mensajes de construcción y destrucción deben ser diferentes. Se debe mostrar la construcción/destrucción en cadena adecuada en tus pruebas. Cuando se crea un FragTrap, el programa comienza construyendo un ClapTrap. La destrucción es en orden inverso.

Lo mismo para los atributos, pero con valores diferentes esta vez:

- Nombre, que se pasa como parámetro a un constructor
- Puntos de golpe (100), representan la salud del ClapTrap
- Puntos de energía (100)
- Daño de ataque (30)

FragTrap también tiene una capacidad especial:

void highFivesGuys(void);

Esta función miembro muestra una solicitud positiva de chocar esos cinco en la salida estándar.

Una vez más, agrega más pruebas a tu programa.

7

Capítulo VI
Ejercicio 03: ¡Ahora es raro!

Ejercicio: 03
¡Ahora es raro!

Directorio de entrega: ex03/

Archivos para entregar: Archivos de los ejercicios anteriores + DiamondTrap.{h, hpp}, DiamondTrap.cpp

Funciones prohibidas: Ninguna


En este ejercicio, crearás un monstruo: un ClapTrap que es mitad FragTrap, mitad ScavTrap. Se llamará DiamondTrap, y heredará tanto de FragTrap COMO de ScavTrap. ¡Esto es tan arriesgado!

La clase DiamondTrap tendrá un atributo name privado. Dale a este atributo exactamente el mismo nombre de variable (no se habla aquí del nombre del robot) que el de la clase base ClapTrap.

Para ser más claro, aquí hay dos ejemplos.

Si la variable de ClapTrap es name, da el nombre name a la de DiamondTrap.
Si la variable de ClapTrap es _name, da el nombre _name a la de DiamondTrap.

Sus atributos y funciones miembro se tomarán de cualquiera de sus clases padre:

- Nombre, que se pasa como parámetro a un constructor
- ClapTrap::name (parámetro del constructor + sufijo "_clap_name") 
- Puntos de golpe (FragTrap)
- Puntos de energía (ScavTrap)
- Daño de ataque (FragTrap)
- attack() (Scavtrap)

Además de las funciones especiales de ambas clases padre, DiamondTrap tendrá su propia capacidad especial:  

void whoAmI();

Esta función miembro mostrará tanto su nombre como su nombre ClapTrap.

Por supuesto, el subobjeto ClapTrap de DiamondTrap se creará una vez, y solo una vez. Sí, hay un truco.

Una vez más, agrega más pruebas a tu programa.

¿Conoces las banderas del compilador -Wshadow y -Wno-shadow?

Puedes pasar este módulo sin hacer el ejercicio 03.

8

Capítulo VII
Entrega y evaluación entre pares

Entrega tu tarea en tu repositorio de Git como de costumbre. Solo se evaluará el trabajo dentro de tu repositorio durante la defensa. No dudes en revisar dos veces los nombres de tus carpetas y archivos para asegurarte de que sean correctos.

???????????? XXXXXXXXXX = $3$$cf36316f07f871b4f14926007c37d388
11
</document_content>
</document> 
</documents>