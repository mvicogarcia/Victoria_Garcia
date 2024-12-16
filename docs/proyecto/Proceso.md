---
hide:
    - toc
---

# Proceso

## Propuesta de Valor

Acercar a las personas al uso de herramientas de fabricación y generar apropiación de espacios comunitarios a través del armado colectivo de equipamiento con materiales reutilizados y reciclados.

Generar y compartir conocimiento sobre los materiales que usamos y su ciclo de vida. 

Ser activistas del cuidado.

El enfoque del proyecto es el diseño de sistema de conectores para armado de equipamiento efímero, pensado para el uso de colectivos de vecinxs, grupos, educadores, diseñadores, etc.


## Lineamientos para el diseño

**Reúso**: Trabajar en base a placas de maderas de descarte de diferentes formatos y espesores, especialmente placas tipo compensado en base a resinas que no se deberían quemar (para evitar generar gases tóxicos). Las piezas diseñadas y fabricadas serán de gran resistencia y con una extensa vida útil.

**Reciclaje**: incorporar plástico reciclado. Fomentar el uso de polietileno. Elijo usar un solo tipo de plástico para garantizar que se genere un objeto reciclable, y que sea polietileno (de alta densidad o N°2 y de baja densidad o N°4), porque es fácilmente identificable (tapitas, envases, bolsas), y tiene un rango amplio de temperatura en el que se puede trabajar sin que generen emisiones dañinas para la salud o el ambiente.

**Abierto y accesible**: Diseño de moldes que sean fácilmente replicables y que se puedan realizar con materiales reutilizados o económicos.
El proceso de diseño y los resultados serán accesibles desde mi web de EFDI.

**Fácil montaje y desmontaje**: Las piezas diseñadas serán de fácil desmontaje para poder ser reparadas, reutilizads o recicladas al final de su vida útil.

**Comunitario**: el proyecto se enfoca en brindar un insumo para la fabricación colectiva.


*Más que un resultado cerrado, quiero generar un punto de inicio, un excusa para activar procesos.*


![](../images/proy/01.jpg)


## Diseño del Conector

El diseño se basa en el funcionamiento de las prensas de carpintero:

![](../images/proy/carpi.jpg)

Son 2 piezas que se unen a través de tornillo (tipo bulón) y tuerca con arandela ó tipo mariposa.
Permiten unir en ángulo de 90° dos placas de madera del mismo espesor.
El conector funciona para diferentes espesores de placa (mínimo 12mm).

![](../images/proy/con1.png)

*Modelo 3D del conector, en la segunda imagen se ven las dos piezas separadas.*

![](../images/proy/con2.png)

*Corte del modelo, uniendo dos placas de 12 y 18mm.*

![](../images/proy/con3.png)

*Medidas de las piezas.*

![](../images/proy/con4.png)

*Vista del modelo, donde se ven las perforaciones para el pasaje del tornillo, y fresado para la cabeza. Estas perforaciones se hacen con taladro luego de desmoldadas las piezas.*

[Modelo Sketchup para descargar](https://drive.google.com/file/d/1_ErjLMD-E-XXQpQrF93tBzpMjBmFZzFE/view?usp=drive_link)



## Diseño del Molde

Siguiendo la idea de reutilizar materiales y que los moldes se puedan hacer con materiales accesibles, diseñé los moldes para ser cortados en mdf con router CNC.

Son dos moldes, uno para cada pieza, que siguen la misma lógica: 

![](../images/proy/esqmolde4.png)

- Se componen de dos partes que van atornilladas a la base (tapa 2 o inferior), y una tapa (tapa 1 o superior) con tarugos que funcionan como guías de encastre.

![](../images/proy/esqmolde.png)

- Los dos bloques que forman las caras del molde (A y B) se generan con 3 piezas de mdf de 18mm, que suman una altura de 54mm. En mi prueba encolé estas piezas pero podrían ir atornilladas entre si.

![](../images/proy/esqmolde2.png)

- En las tapas inferior y superior se adhiere una pieza de 6mm de espesor para lograr una altura interior de 42mm. Esta pieza es un poco más pequeña que la silueta del diseño, para que el cierre no sea tan apretado.
- No preví un escape de material porque no es un molde para inyección.
- Las dimensiones del molde las pensé teniendo en cuenta la retracción del plástico una vez frío (calculé un 5%).


![](../images/proy/esqmolde3.png)


[Archivos vectoriales para descargar](https://drive.google.com/file/d/1Hw_IUKTYbBiqGcHl0Zttv3H8hpmUacNr/view?usp=drive_link)

[Archivos de corte para descargar](https://drive.google.com/drive/folders/1XYgZxli9mBeimtkZXH1mR-BFumYxReyt?usp=drive_link)

*Nota: Los archivos de corte están armados para fresa de 2mm de diámetro*.

[Instrucciones para armar los moldes](https://drive.google.com/file/d/1rICdAamgpiDT0fOWu7ucVrmlH7wkE7XY/view?usp=drive_link)


## Prototipo y pruebas

### Armado del molde

- Generé los archivos de corte para CNC en base a los diseños vectoriales.
- Hice los cortes en un cnc de 80x80 con fresa de 2mm de diámetro, sobre mdf de 18mm y multiplaca de 6mm.

- Luego lijé las piezas cortadas para armar las diferentes partes de los moldes. Las dejé prensadas secando de un día para otro. Luego de secas, les di un lijado manual para emparejar la superficie.

- Encolé las piezas y coloqué los tarugo (guías de encastre).

- Atornillé las diferentes partes del molde.

- Luego de la primera prueba con el plástico, hice algunas modificaciones: 
    - Coloqué lámina de teflón adhesiva en los lugares más propensos a que se pegue el plástico, que fueron en las aristas más cerradas.
    - Vi que la presión de la prensa hacía que el molde se abriera un poco, por eso agregué una contención exterior de madera. 

### Prueba con plástico reciclado

### Armado del conector


## Evaluación y próximos pasos