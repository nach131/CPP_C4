Aquí está la traducción al castellano del documento:

<documents>
<document index="1"> 
<source>es.subject.pdf</source>
<document_content>C++ - Módulo 04
Polimorfismo de subtipo, clases abstractas, interfaces
Resumen:  
Este documento contiene los ejercicios del Módulo 04 de los módulos de C++.
Versión: 11

Contenido
I Introducción 2
II Reglas generales 3
III Ejercicio 00: Polimorfismo 5  
IV Ejercicio 01: No quiero prender fuego al mundo 7
V Ejercicio 02: Clase abstracta 9
VI Ejercicio 03: Interfaz y repaso 10
VII Entrega y evaluación por pares 14
1

Capítulo I
Introducción
C++ es un lenguaje de programación de propósito general creado por Bjarne Stroustrup como una extensión del lenguaje de programación C, o "C con Clases" (fuente: Wikipedia).
El objetivo de estos módulos es introducirte a la Programación Orientada a Objetos.
Este será el punto de partida de tu viaje en C++. Muchos lenguajes se recomiendan para aprender POO. Decidimos elegir C++ ya que se deriva de tu viejo amigo C.
Debido a que este es un lenguaje complejo, y para mantener las cosas simples, tu código cumplirá con el estándar C++98.
Somos conscientes de que el C++ moderno es muy diferente en muchos aspectos. Así que si quieres convertirte en un desarrollador de C++ competente, depende de ti seguir avanzando después del 42 Common Core.
2

Capítulo II
Reglas generales
Compilación
- Compila tu código con c++ y las banderas -Wall -Wextra -Werror
- Tu código aún debería compilar si agregas la bandera -std=c++98
Convenciones de formato y nomenclatura
- Los directorios de los ejercicios se nombrarán de esta manera: ex00, ex01, ..., exn
- Nombra tus archivos, clases, funciones, funciones miembro y atributos como se requiere en las pautas.
- Escribe los nombres de las clases en formato UpperCamelCase. Los archivos que contengan código de clase siempre se nombrarán de acuerdo con el nombre de la clase. Por ejemplo: 
ClassName.hpp/ClassName.h, ClassName.cpp o ClassName.tpp. Entonces, si tienes un archivo de encabezado que contiene la definición de una clase "BrickWall" que representa una pared de ladrillos, su nombre será BrickWall.hpp.
- A menos que se indique lo contrario, todos los mensajes de salida deben terminar con un carácter de nueva línea y mostrarse en la salida estándar.
- ¡Adiós Norminette! No se aplica ningún estilo de codificación en los módulos de C++. Puedes seguir el que más te guste. Pero ten en cuenta que un código que tus compañeros evaluadores no puedan entender es un código que no pueden calificar. Haz lo mejor posible para escribir un código limpio y legible.
Permitido/Prohibido
Ya no estás programando en C. ¡Es hora de C++! Por lo tanto:
- Se te permite usar casi todo de la biblioteca estándar. Por lo tanto, en lugar de apegarte a lo que ya conoces, sería inteligente usar lo máximo posible las versiones propias de C++ de las funciones de C que estás acostumbrado.
- Sin embargo, no puedes usar ninguna otra biblioteca externa. Esto significa que las bibliotecas C++11 (y derivadas) y Boost están prohibidas. Las siguientes funciones también están prohibidas: *printf(), *alloc() y free(). Si las usas, tu calificación será 0 y eso es todo.
- Ten en cuenta que, a menos que se indique explícitamente lo contrario, las palabras clave using namespace y friend están prohibidas. De lo contrario, tu calificación será -42.
- Se te permite usar STL solo en los módulos 08 y 09. Eso significa: ningún contenedor (vector/list/map/etc.) y ningún algoritmo (nada que requiera incluir el encabezado <algorithm>) hasta entonces. De lo contrario, tu calificación será -42.

Algunos requisitos de diseño
- Las fugas de memoria también ocurren en C++. Cuando asignas memoria (usando la palabra clave new), debes evitar fugas de memoria.
- Del Módulo 02 al Módulo 09, tus clases deben estar diseñadas en la Forma Canónica Ortodoxa, excepto cuando se indique explícitamente lo contrario. 
- Cualquier implementación de función puesta en un archivo de encabezado (excepto para plantillas de función) significa 0 para el ejercicio.
- Debes poder usar cada uno de tus encabezados de forma independiente de los demás. Por lo tanto, deben incluir todas las dependencias que necesitan. Sin embargo, debes evitar el problema de la inclusión doble agregando protectores de inclusión. De lo contrario, tu calificación será 0.

Léame
- Puedes agregar algunos archivos adicionales si lo necesitas (es decir, para dividir tu código). Como estas tareas no son verificadas por un programa, no dudes en hacerlo siempre y cuando entregues los archivos obligatorios.
- A veces, las pautas de un ejercicio parecen cortas, pero los ejemplos pueden mostrar requisitos que no están escritos explícitamente en las instrucciones.
- ¡Lee cada módulo completamente antes de comenzar! De verdad, hazlo.
- ¡Por Odín, por Thor! ¡Usa tu cerebro!

Tendrás que implementar muchas clases. Esto puede parecer tedioso, a menos que puedas automatizar tu editor de texto favorito.

Se te da cierta libertad para completar los ejercicios. Sin embargo, sigue las reglas obligatorias y no seas perezoso. Te perderías mucha información útil. No dudes en leer sobre conceptos teóricos.

3

Capítulo III
Ejercicio 00: Polimorfismo

Ejercicio: 00 
Polimorfismo

Directorio de entrega: ex00/
Archivos a entregar: Makefile, main.cpp, *.cpp, *.{h, hpp}
Funciones prohibidas: Ninguna

Para cada ejercicio, debes proporcionar las pruebas más completas que puedas.

Los constructores y destructores de cada clase deben mostrar mensajes específicos. No uses el mismo mensaje para todas las clases.

Comienza implementando una simple clase base llamada Animal. Tiene un atributo protegido:

- std::string type;

Implementa una clase Dog que herede de Animal.
Implementa una clase Cat que herede de Animal.

Estas dos clases derivadas deben establecer su campo type según su nombre. Entonces, el tipo de Dog se inicializará en "Dog" y el tipo de Cat se inicializará en "Cat". El tipo de la clase Animal se puede dejar vacío o establecer en el valor de tu elección.

Cada animal debe poder usar la función miembro:

makeSound()

Imprimirá un sonido apropiado (los gatos no ladran).

4

Ejecutar este código debería imprimir los sonidos específicos de las clases Dog y Cat, no el de Animal.

int main()
{
const Animal* meta = new Animal(); 
const Animal* j = new Dog();
const Animal* i = new Cat();

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;

i->makeSound(); // ¡salida del sonido del gato! 
j->makeSound();
meta->makeSound();

...

return 0;
}

Para asegurarte de que entendiste cómo funciona, implementa una clase WrongCat que herede de una clase WrongAnimal. Si reemplazas Animal y Cat por los incorrectos en el código anterior, WrongCat debería generar el sonido de WrongAnimal.

Implementa y entrega más pruebas que las dadas anteriormente.

5

Capítulo IV
Ejercicio 01: No quiero prender fuego al mundo

Ejercicio: 01
No quiero prender fuego al mundo

Directorio de entrega: ex01/
Archivos a entregar: Archivos del ejercicio anterior + *.cpp, *.{h, hpp} 
Funciones prohibidas: Ninguna

Los constructores y destructores de cada clase deben mostrar mensajes específicos.

Implementa una clase Cerebro. Contiene un array de 100 std::string llamado ideas.

De esta manera, Dog y Cat tendrán un atributo privado Cerebro*.

Al construirse, Dog y Cat crearán su Cerebro usando new Cerebro();
Al destruirse, Dog y Cat eliminarán su Cerebro.

En tu función main, crea y llena un array de objetos Animal. La mitad serán objetos Dog y la otra mitad objetos Cat. Al final de la ejecución de tu programa, recorre en bucle este array y elimina cada Animal. Debes eliminar directamente perros y gatos como Animales. Se deben llamar los destructores apropiados en el orden esperado.

No olvides verificar si hay fugas de memoria.

Una copia de un Dog o un Cat no debe ser superficial. ¡Por lo tanto, debes probar que tus copias son copias profundas!


int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();

delete j;//no debería crear una fuga
delete i;

...

return 0;
}

Implementa y entrega más pruebas que las dadas anteriormente.

6

Capítulo V
Ejercicio 02: Clase abstracta

Ejercicio: 02
Clase abstracta 

Directorio de entrega: ex02/
Archivos a entregar: Archivos del ejercicio anterior + *.cpp, *.{h, hpp}
Funciones prohibidas: Ninguna

Crear objetos Animal no tiene sentido después de todo. Es cierto, ¡no hacen ningún sonido! Para evitar posibles errores, la clase Animal predeterminada no debería poder instanciarse.

Corrige la clase Animal para que nadie pueda crear instancias de ella. Todo debe funcionar como antes.

Si quieres, puedes actualizar el nombre de la clase agregando el prefijo A a Animal.

7

Capítulo VI 
Ejercicio 03: Interfaz y repaso

Ejercicio: 03
Interfaz y repaso

Directorio de entrega: ex03/
Archivos a entregar: Makefile, main.cpp, *.cpp, *.{h, hpp}
Funciones prohibidas: Ninguna

Las interfaces no existen en C++98 (ni siquiera en C++20). Sin embargo, las clases abstractas puras se denominan comúnmente interfaces. Por lo tanto, en este último ejercicio, intentemos implementar interfaces para asegurarnos de que entendiste este módulo.

Completa la definición de la siguiente clase AMateria e implementa las funciones miembro necesarias.

class AMateria  
{
protected:
[...]

public:
AMateria(std::string const & type);
[...]
std::string const & getType() const; //Devuelve el tipo de materia
virtual AMateria* clone() const = 0;  
virtual void use(ICharacter& target);
};

Implementa las clases concretas Materia Ice y Cure. Usa su nombre en minúscula ("ice" para Ice, "cure" para Cure) para establecer sus tipos. Por supuesto, su función miembro clone() devolverá una nueva instancia del mismo tipo (es decir, si clonas una Materia Ice, obtendrás una nueva Materia Ice).

La función miembro use(ICharacter&) mostrará:

- Ice: "* dispara un rayo de hielo a <name> *" 
- Cure: "* cura las heridas de <name> *"

<name> es el nombre del Personaje pasado como parámetro. No imprimas los corchetes angulares (< y >).

8

Al asignar una Materia a otra, copiar el tipo no tiene sentido.

Escribe la clase concreta Character que implementará la siguiente interfaz:

class ICharacter
{
public:
virtual ~ICharacter() {}
virtual std::string const & getName() const = 0;  
virtual void equip(AMateria* m) = 0;
virtual void unequip(int idx) = 0;
virtual void use(int idx, ICharacter& target) = 0;
};

El Personaje posee un inventario de 4 ranuras, lo que significa un máximo de 4 Materias. El inventario está vacío en la construcción. Equipan las Materias en la primera ranura vacía que encuentran. Esto significa, en este orden: de la ranura 0 a la 3. En caso de intentar agregar una Materia a un inventario lleno, o usar/desequipar una Materia inexistente, no hagas nada (pero aún así, los errores están prohibidos). ¡La función miembro unequip() NO debe eliminar la Materia! 

Manipula las Materias que tu personaje dejó en el suelo como gustes. Guarda las direcciones antes de llamar a unequip(), o cualquier otra cosa, pero no olvides que debes evitar fugas de memoria.

La función miembro use(int, ICharacter&) tendrá que usar la Materia en el slot[idx], y pasar el parámetro target a la función AMateria::use.


El inventario de tu personaje podrá admitir cualquier tipo de AMateria.

Tu Personaje debe tener un constructor que tome su nombre como parámetro. Cualquier copia (usando constructor de copia u operador de asignación de copia) de un Personaje debe ser profunda. Durante la copia, las Materias de un Personaje deben eliminarse antes de que se agreguen las nuevas a su inventario. Por supuesto, las Materias deben eliminarse cuando se destruye un Personaje.

Escribe la clase concreta MateriaSource que implementará la siguiente interfaz:

class IMateriaSource
{
public:
virtual ~IMateriaSource() {}
virtual void learnMateria(AMateria*) = 0;
virtual AMateria* createMateria(std::string const & type) = 0;
};

- learnMateria(AMateria*)
Copia la Materia pasada como parámetro y la almacena en memoria para poder clonarla más tarde. Al igual que el Personaje, MateriaSource puede conocer un máximo de 4 Materias. No necesariamente son únicas.

- createMateria(std::string const &)
Devuelve una nueva Materia. Esta última es una copia de la Materia aprendida previamente por MateriaSource cuyo tipo es igual al pasado como parámetro. Devuelve 0 si el tipo es desconocido.

En resumen, tu MateriaSource debe poder aprender "plantillas" de Materias para crearlas cuando sea necesario. Luego, podrás generar una nueva Materia usando solo una cadena que identifique su tipo.


9

Ejecutar este código:

int main()
{
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
  
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);
  
ICharacter* bob = new Character("bob");
