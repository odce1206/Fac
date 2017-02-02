% Servicios Web
% Orlando Cuevas
% Created Monday 12 September 2016



**¿Que es un servicio web?**

Un conjunto de aplicaciones o tecnologias con habilidad de interoperar en la web

**Sistema distribuido**

* Computacion distribuida:
	* Cualquier sistema en el que multiples agentes autonomos, se comunican entre si y afectan mutuamente su comportamiento.
	* Agentes:
		* pueden ser computadoras completas con capacidad de computo y memoria muy limitados que se pueden comunicar mediante mensajes
* Utilidad:
	* Sistemas distribuidos, procesamientos distribuidos, bases de datos distribuidas y cualquier otro termino computacional que sea distribuido.
* Relacion
	* La computacion distribuida se refiere a los servicios que provee un sistema de computacion distribuida.

**Primeras caracteristicas de sistemas de computadoras distribuido.**

* Compuesto por varios recursos informaticos de proposito general, que pueden asignarse dinamicamente a tareas concretas
* Los recursos estan distribuidos fisicamente y funcionan gracias a una red de comunicaciones.
* Tiene un sistema operativo de alto nivel, que unifica e integra el control de los componentes
* La distribuicion es transparente, permite que los servicios puedan ser solicitados especifiacndo su numbre
* El funcionamiento de los recursos fisicos y logicos esta caracterizado por una autonomia coordinada.

**Caracterisicas de sistemas distribuidas**

* Heterogeneidad
	* Se aplica en los siguientes elementos:
		* Redes
		* Hardware de computadores
		* Sistemas operativos
		* Lenguajes de programacion
		* Implenetaciones de diferentes desarrolladores
* Extensibilidad y apertura
	* Es la caracteristica que determina si el sistema puede extenderse de varias maneras
	* Un sistema puede ser abierto o cerrado con respecto a extensiones de hardware o de software
	* Para lgrar la extensibilidad es imprescindible que las interfaces clave sean publicadas	
* Seguridad
	* Los SD manejan información de alto valor
	* La seguridad juega un papel importante
	* Hay que asegurar que la información sea entregada unicamente a quien debe ser entregada, de forma correcta y en el momento en el que se requiere
	* La seguridad debe ofrecer:
		* Confidencialidad
		* Autenticación, capacidad de asegurar la identidad de un usuario
		* Integridad, asegura que la información no ha sido manipulada
		* No repudio, por parte de los agentes
		* Disponibilidad de los recursos necesarios de un sistema cuando estos sean requeridos
	* Defensas para la información
		* Técnicas de encriptación
		* Firmas digitales
		* Implementación de barreras perimetrales
		* Modelos de seguridad internos y externos
* Escalabilidad
	* Una sd es escalable sil logra conservar su efectividad cuando hay un numero de recursos y el numeo de usuarios icrementa significativamente
	* La escabilidad se mide
		* Respecto al tamaño y se puede agregar mas usuarios y mas recursos
		* Rspecto a la localizacion: usuarios y recursos pueden estar en locaciones remotas y separadas el uno del otro
		* Respecto a su administracion: es mas facil administar a pesar de que se utiliza en diferentes organizaciones independientes que cuentan con diferentes politicas de seguridad y que hacen uso particular de sistema
* Tratamiento de fallas
	* Se puede presentar de manera inevitable 
	* En sd los fallos son parciales
	* El tratamiento de faos estarea dificil
	* Las tecnicas mas comunes son
		* Deteccion de fallos
		* Enmascaramiento de fallos
		* Tolerancia a faos
		* Recuperacion frente a fallos
		* Redundancia    
* Concurrencia
	* Trata con los problemas de aislamientos y consistencia del procesamiento de transacciones
	* Asegura que la consistencia de los datos que se almacenan y que se procesa se mantengan en un ambiente distribuido multiusuario
	* El nivel de concurrencia, es decir en numero de transacciones simultaneas activas, es probablemente el parametro mas importante en sistemas distribuidos
	* Se busca un balance entre el mantenimiento de la consistencia de base de datos y el mantenimiento de un alto nivel de concurrencia.
* Grado de transparencia
	* Un sistema distribuido es transparente, cuando este es capaz de presentarse ante los usuarios y las aplicaciones como si fuese un sistema que corre en ua sola computadora. Aunque realmente esten varias computadoras
	* Tipos de trasparencia:	
		* Acceso
			* Oculta las diferencias entre la representacion de los datos y la manera en que los recursosson accedidos
		* Ubicacion
			* Oculta la localizacion de los recursos que permite el acceso a los mismos sin la necesidad de conocer su localizacion
		* Migracion
			* Oculta que un rcurso o un cliente del sistema sea reubicado, lo que permite hacer dichas reubicaciones sin afectar la operacion de los usuarios y los servicios
		* Recolocacion
			* Oculta que un recurso o un cliente del sistema pueda moverse a una ubicacion diferente mientras estan en uso
		* Replicacion
			* Oculta la existencia de multiples ejemplares del mismo recurso
		* Concurrencia
			* Oculta que un recurso sea compartido por varios usuarios sin interferir entre ellos mismos
		* frente a fallos
			* Oculta el fallo y recuperacion de un recurso dentro del sistema, dejando que los usuarios terminen sus tareas a pesar de los fallos de hardware o software que pudieran presentarse
		* Persistencia
			* Oculta si un recurso de software esa almacenado en memoria o en disco

**Factores de distribucion**

* Factor Estrategico
	* Las redes de informacion que unen a los clientes, proveedores y compañias les permiten interactuar puede ofrecer a las empresas mayor competitividad
* Costos de Equipo:
	* Precio/Desempeño al tener procesadores separados, ya que permites que mles de clientes compartan los mismos recurss computacionales del mismo aunque la diferencia de costos es enoarme
* Conocimientos y control de los usuarios:
	* Ofrece a los usuarios estar mas cerca de los procesos y de los datos.
* Costos de Desarrollo: 
	* Al trabajar con diferentes modulos de software que pueden integrarse como parte de un solo sistema, los usuarios finales interesados en desarrollar sus propias aplicaciones pueden hacerlo utilizando sus ropias maquinas, lo que trae una reduccion de costo.
* Interfaz de usuario:
	* La mayoria de las estaciones de trabajo que se utilizan hoy en dia soportan el uso de interfaces graficas sofisticadas son dispositivos de señalamiento y sistemas de audio y video
* Flexibilidad y facilidad de configuracion
	* Ofrece muchas opciones para mejorar al desempeño y fiabilidad de un sistema mediante el uso de procesos y datos redundantes
* Explotacion de Hardware:
	* Las estaciones de trabajo y computadoras personales permiten el desarrollo de software especializado que hace uso de las caracteristicas especificas del hardware de la estacion de trabajo, cada una de estas estaciones puede ser utilizada como un servidor especializado.
¿Que arquitectura le propondrias para poder realizar busquedas en las diferentes sedes?

¿Cual es la dinamica de esta empresa, es decir cual es su proceso de compra venta?

¿Mediante un diagrama representa como crees que seria el diseño del sistema distribuido?

**Arquitecturas multiprocesador:**

* Modelo mas simple de un sistema distribuido
* El software esta formado por varios procesos que pueden (no necesariamente) ejecutarse sobre procesadores diferentes.
* Es comunmente utilizado en sistemas grandes de tiempo real.
* Estos sitemas recogen informacion, toman decisiones usando esta informacion y envian señales a los actuadores que modifiquen el entorno del sistema
* El uso de multiples procesadores mejora el rendimiento y adaptabilidad del sistema.	

**Sistemas de tiempo real**

* Una forma de ver un sistema de tiempo real es como un sistema de estimulo
* Diseño de un sistema de tiempo real:
	* Identifica estimulos que el sistema debe procesar y las respuestas asociadas
	* Para cada estimulo y respuesta asociada, identificar las restricciones temporales que se aplican tanto al procesamiento del estimulo como la de la respuesta
	* Elegir una plataforma de ejecucion para el sistema
	* Incorporar el procesamiento de estimulos y respuestas a varios procesos
	* Para cada estimulo y respuesta, diseñar algoritmos para llevar a cabo los calculos requeridos
	* Diseñar un sistema 

- - -

**Modo cliente-servidor:**

* Es un modelo de sistema que se organiza como un conjunto de servicios y servidores asociados
* Se componen:
	* Conjunto de servidores que ofrecen servicios a otros subsistemas
	* Conjunto de clientes que se llaman alos servicios ofrecidos por los servidores
	* Red que permite a los clientes acceder a estos servicios

**Dinamica**

* Los clientes puden conocer los nombres de los servidores disponibles y los servicios
* Los servidores no necesitan conocer la identidad de los clientes o cuantos clientestienen
* Los clientes acceden a los servicios proporcionados por un servidor de llamadas a procedimientos remotos usando un protocolo de peticionrespuesta tal como el protocolo http usado en la WWW

**Ventaja mas importante**

* Es una arquitectua distribuida. Se puede hacer un uso efectivo de los sistemas en red co muchos procesadres distribuidos
* Es facil añadir un nuevo servidor e integrarlo con el resto del sistema

**Diseño**

* El diseño debe debera reflejar 
* Capas el diseño de un cliente-servidor:
	* Capa de presentacion
	* Capa de procesamiento de la aplicacion
	* Capa de gestion de datos

**Arquitectura de 3 capas:**

* En esta la presentacion, el procesamiento de la aplicacion y la gestion de los datos son procesos logicamente separados que se ejecutan sobre procesadores diferentes.
* Permite optimizar la transferencia de informacion entre el servidor web y el servidor de la base de datos. Las comunicaciones entre estos sstemas puedne usar protocolos de comunicacion de bajonivel muy rapido,

**Arquitecturas simples de modelo cliente-servidor:**

* Se denomina cliente-servidor de dos capas
* Pueden ser de dos tipos.
	* Modelo de cliente ligero (thin client): Todo el procesamiento de las aplicaciones y la gestion de los datos se lleva a cabo en el servidor.
	* Modelo de cliente rico (fat client): El servidor solamente es responsable de la gestion de datos. El software del cliente implementa la logica de la aplicacion y las interacciones con el ususario del sistema

**Desventaja del modelo ligero:**

* Ubica una elevada carga de procesamientos tanto en el servidor como en la red. El servidor es responsable de todos los calculos, esto puede implicar la generacion de un trafico significativo en la red entre el cliente y el servidor.

**Arquitectura de 3 capas**

* En esta 

- - -

## Arquitectura de objetos distribuidos

- Los componentes fundamentales del sistema son objetos que proporcionan una interfaz a un conjuntos de servicios que ellos suministran. Otros objetos realizan llamadas a estos servicios sin hacer ninguna distincion logica entre un cliente (el receptor de un servicio) y un servidor (proveedor de un servicio).
- Los objetos pueden distribuirse a traves de varias computadoras en una red y comunicarse a traves de un middleware. Llamado intermediario de peticiones de objetos.

- - -

## Ventaja de objetos distribuidos

- Permite al diseñador del sistema retrasar decisiones osbre donde y como deberian proporcionarse los servicios. Los objetos que proporcionan servicios pueden ejecutarse sobre cualquier nodo de la red.
- Es una arquitectura de sistema muy abierta que permite añadir nuevos recursos si es necesario.
- El sistema es flexible y escalable. Se pueden crear diferentes instancias del sistema proporcionando los mismos servicios por objetos diferentes.
- Es posible reconfigurar el sistema de forma dinamica mediante la migracion de objetos a traves de la red.

## CORBA

- Es una especifacion definida por el OMG (Object Management Group) par ala creacion y uso de objetos remotos, cuyo objetivo es proporcionar interoperatibilidad entre aplicaciones en un entorno distribuido y heterogeneo. Es conocido como un tipo de "middle-ware", ya que no efectua las funciones de bajo nivel necesarias para ser considerada un sistema operativo.

## Arquitecura P2P

- Los sistemas _p2p_ son sistemas descentralizados, en los que los calculos pueden llevarse a cabo en cualquier nodo de la red y al menos en principio, no se hacen distinciones entre clientes y servidores.

- En teoria, en los sistemas p2p, cada nodo podria conocer cualquier otro nodo

# UDDI

# Utilidades de los UDDI
- En tiempos de diseño, permite a desarrolladores localizar servicios disponibles para utilizar desde aplicaciones u otros servicios.
- En tiempos de ejecucion, permite a un programa localizar dinamicamente implementaciones de servicios y utilizarlas

# Arquitectura de un UDDI
- La arquitectura de UDDI se compone de los siguientes elementos:
    - Clientes
    - Una o mas implementaciones de UDDI (nodos) que forman un registro
    - Cero o mas servidores de taxonomia
        - Taxonomias: esquemas de categorizacion, metadatos que se pueden utilizar en las consultas para localizar servicios
        - Pueden ser de dominio publico o propietarias.
- Los clientes interaccionan con el registro UDDI mediante SOAP sobre HTTP, mediante APIS
- Una consulta debe devlver la misma informacion indepndientemente del nodo del registro al cual se envie.
- Cada nodo del registro se encarga de custodiar una parte de la informacion del mismo, que solo puede ser actualizada a traves de el

## Porque surgio?
- El desarrollo de la WWW trajo consigo que las computadoras cliente tuviesen acceso a los servidores remotos situados fuera de sus propias organizaciones
- Si estas organizaciones convertian su informacion a formato HTML, entonces esta podia ser accedida por estas computadoras.
- Pero se necesitaba un navegador web
- Y las conexiones oportunistas

## ¿Como solucionaron el acceso directo a almacenes de informacion por otros programas?
- Uso de servicio web
- La informacion era accesible debido a una interfaz de servicio web.
- La interfaz define los datoas disponibles y como acceder a ellos.

## Definicion de servicio web
- Es una representacion estandar para cualquier recurso computacional o de informacion que pueda ser usado por otros programas.
- Es una instancia de una ncion mas general de un servicio, la cual se define como:
    - Un acto o realizacion ofertada por una de las partes a otra, si bien el proceso puede sestar asociado a un producto fisico, la realizacion es escencialmente itangible y no se convierte normalmente e propietaria de cualquier de los factores de la produccion

## Arquitctura conceptual de un sistema orientado a servicios
- Un proveedor de servicio oferta un servicio definiendo su interfaz y definiendo la funcionalidad del servicio
- Un solicitante del servicio enlaza este servicio en su aplicacion
- El proveedor  de servicios registra una entrada en el servicio de registros que incluye informacion sobre el servicio y lo que hace, para asegurar que el servicio puede ser accedido.

## Estandares fundamentales:
- Permitan las comunicaciones entre servicios web son:
    - 
