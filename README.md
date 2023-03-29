##### Investigacion sobre gitignore.

_Despues de descubrir gitignore llegue a la conclusion de que:_

### Es conveniente incluirlo: 
- Porque nos facilita mucho a la hora de hacer un "git add ." cuando tenemos muchos archivos, sin el gitignore tendriamos que subir manualmente cada archivo y asi evitar subir aquel que no queremos publicar.

### Se debe hacer cuándo: 
- Tenemos un archivo que puede ser de texto y que contenga un codigo o una contraseña la cual no queremos que se suba a github y sea publico, creamos la carpeta ".gitignore" y agregamos la ruta del archivo que git debe ignorar.

### Para configurarlo: 
- Se debe crear un archivo .gitignore en el main y agregar dentro del mismo la direccion del archivo que queremos que git ignore, haciendo que el proceso de los commit sea mas rapido y con menos errores a la hora de usar el "git add".
