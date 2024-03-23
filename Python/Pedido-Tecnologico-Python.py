"""
* NOMBRE     : pedido_tecnologico.py
* AUTOR      : Todos los integrantes del Repositorio
* FECHA      : 20/03/2024
* DESCRIPCION: Estructuras para manejar pedidos de productos tecnológicos
"""

class Productos:  # CLASE PRODUCTOS
    def __init__(self, nombre, precio, stock):
        self.nombre = nombre  # Nom del producto
        self.precio = precio  # Precio del producto
        self.stock = stock    # Cant en stock del producto

class Pedido:   # CLASE PEDIDOS
    def __init__(self, p, c):
        self.prod = p       # Producto pedido en el pedido
        self.cantidad = c   # Cantidad pedida del producto

class GestorDeInventario:  # GESTOR DE INVENTARIO
    # Verifica si hay stock disponible para un producto y una cantidad
    def VerDisponible(self, producto, cantidad):
        return cantidad <= producto.stock  # Devuelve V si la cantidad solicitada es menor o igual al stock disponible

    # Actualiza el inventario a la vez reduciendo la cantidad del stock del producto
    def UpdateInventario(self, producto, cantidadVendida):
        producto.stock -= cantidadVendida  # Reduce el stock del producto
        print("INVENTARIO ACTIALIZADO:", producto.stock, "UNIDADES DE", producto.nombre, "DISPONIBLES.")  # Muestra por consola actualizacion de inventario

class GeneradorDeReportes:
    # Genera un reporte de venta para un producto y una cantidad dada
    def GeneRVenta(self, producto, cantidadVendida):
        print("Reporte de venta: Se vendieron", cantidadVendida, "UNIDADES DE", producto.nombre + ".")  # Muestra por consola un mensaje de reporte de venta
        print("--------------------------------------")

    # Genera un informe de inventario para una lista de productos y su tamaño
    def generarInformeInventario(self, inventario, tam):
        print("Informe de inventario:")  # Imprime un encabezado para el informe de inventario
        for i in range(tam):
            print("Producto:", inventario[i].nombre + "", "\nCantidad disponible--> ", inventario[i].stock, "\nPrecio----> S/.", inventario[i].precio)  # Muestra por consola la información sobre cada producto en el inventario
            if i < tam - 1:
                print("--------------------------------------")

# Inicialización del inventario con varios productos
inventario = [
    Productos("Laptop", 1000.0, 10),
    Productos("Procesador Intel core i9", 500.0, 20),
    Productos("Tablet", 800.0, 15),
    Productos("Auriculares JBL", 100.0, 30),
    Productos("Monitor", 400.0, 25),
    Productos("Teclado", 50.0, 40),
    Productos("Mouse", 30.0, 50),
    Productos("Impresora", 200.0, 15)
]

gestor = GestorDeInventario()  # Instancia del gestor de inventario
reporte = GeneradorDeReportes()  # Instancia del generador de reportes

# Array de pedidos
pedidos = [
    Pedido(inventario[0], 7),
    Pedido(inventario[2], 198),
    Pedido(inventario[3], 5)
]

# Iteración sobre los pedidos
for pedido in pedidos:
    # Verifica si el producto pedido está disponible en el inventario
    if gestor.VerDisponible(pedido.prod, pedido.cantidad):
        # Si está disponible actualiza el inventario y genera un reporte de venta
        gestor.UpdateInventario(pedido.prod, pedido.cantidad)
        reporte.GeneRVenta(pedido.prod, pedido.cantidad)
    else:
        # Si no está disponible muestra un mensaje indicando que no hay stock disponible
        print("NO HAY STOCK DISPONIBLE PARA EL PRODUCTO--->", pedido.prod.nombre)

# Crea un informe de inventario
reporte.generarInformeInventario(inventario, 8)  # Actualiza el tamaño del inventario
