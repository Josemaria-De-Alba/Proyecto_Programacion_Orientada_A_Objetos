## Proyecto_Programacion_Orientada_A_Objetos
## Destiny 2 Loadout Editor
# Josemaria De Alba Arguelles A01706847
# Descripcion y Funcionalidad
Dentro del juego de Destiny hay cientas de armas distintas. Cada una tiene algo que la hace distinta de las demás, Aun cuando están separadas por categorías, sigue habiendo docenas de características que las diferencian entre sí ya que un arma puede tener distinto tipo de daño, puede que tenga balas infinitas, habilidades que no tengan otras armas, etc. Dentro del juego. Es importante saber que armas tienes y que hacen ya que si solo escoges armas al azar, será mucho más difícil completar algunas de las misiones. Este código te ayuda creando un loadout default que tu luego puedes modificar para poder ver que armas estas usando y cuáles son sus características más importantes de considerar. Aun cuando hay tantas armas dentro del juego, casi todas pueden ser categorizadas en una de dos, Legendary y Exotic, y dentro del programa también puedes escribir funciones que te dan una descripción de que tienen de especial, y cuales son las diferencias. 

Este codigo viene con ejemplos para cada una de las clases con y sin polmorfismo.
Enseña el uso de la clase loadout utilizando default_loadout y tiene escrito un ejemplo de que debes de escribir si queres hacerle algun cambio al loadout.

# Casos De Fallo:
-Se utilizan las variables incorrectas para un constructor
-Constructor recibe número incorrecto de variables
-Función recibe cantidad o tipo de parámetros incorrectos
-Poner valores incorrectos cuando el código pide números específicos
-Utiliza compilador para lenguaje que no sea c++


Semana 1: Hice el primer diagrama UML, es importante que antes de programar ya tenga una idea de que va a necesitar. Establecí 6 clases distintas, utilizando agregación, composición, y herencia. No es tan grande como me gustaría el documento, pero ya que tengo tiempo más limitado, es más difícil hacer todo de mi idea original. En este diagrama se puede ver que se utilizan 5 clases para crear una clase que junta todos los datos al final. No establecí los get y los set como funciones en las clases, ya que en los ejemplos que nos dio el profe no tenían estas funciones.

Semana 2: Empeze el programa, declarando 3 clases, una clase madre, y dos clases hijas. Se usa sobrecarga ya que hay muchos constructores que reciben distintas cantidades de variables, aparte de hacer un constructor por default. También se usa sobreescritura ya que declaró una función en la clase madre, e imprime distintos datos dependiendo de qué clase hija la utiliza. También probé las funciones dentro del main, mas que nada lo use para las distintas clases. No deje los setters y getters pero también los pruebe para que funcionaran.

Semana 3: Esta semana implemente una nueva funcion que utiliza polimorfismo paar que imprima distintas descripciones para los distintos tipos de armas. Esto es para que el usuario que utilize este programa tenga mayor entendimiento de que tiene de especial cada una y una descripcion general de porque es importante saber cuales armas escoger en distintas situaciones.

Semana 4.1: Agrege una nueva clase donde se usan 3 de las clases hijas para crear un loadout. Tambien modifique la clase madre para que fuera abstracta. Estoy empezando a hacer cambios de sintaxis para que asegurar de que todo dentro del codigo este como deberia de ser y no haya errores ahi.

Semana 4.2: Agregue una nueva funcion dentro de loadout que sirve para cambiar alguna de las armas dentro del loadout. Tambien incluí un uso de esta funcion dentro del main con los parametros que te pide ya llenados.
