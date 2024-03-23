/***********************************************************
* NOMBRE     : pedido_tecnologico.cpp
* AUTOR      : Todos los integrantes del Repositorio
* FECHA      : 20/03/2024
* DESCRIPCION: Estructuras para manejar pedidos de productos tecnológicos
************************************************************/

#include <iostream>
#include <string>

using namespace std;

class Productos {  // CLASE PRODUCTOs
public:
    string nombre;  // Nombre del producto
    double precio;  // Precio del producto
    int stock;      // Cantidad en stock del producto
};

class Pedido {   // CLASE PEDIDOS
public:
    Productos prod; // Producto solicitado en el pedido
    int cantidad;   // Cantidad solicitada del producto

    Pedido(Productos p, int c) : prod(p), cantidad(c) {} // Constructor que inicializa el pedido con un producto y una cantidad
};

class GestorDeInventario {  // GESTOR DE INVENTARIO
public:
    // Verifica si hay stock disponible para un producto y una cantidad dada
    bool VerDisponible(Productos producto, int cantidad) {
        return cantidad <= producto.stock; // Devuelve V si la cantidad solicitada es menor o igual al stock disponible
    }

    // Actualiza el inventario a la vez reduciendo la cantidad del stock del producto
    void UpdateInventario(Productos producto, int cantidadVendida) {
        producto.stock -= cantidadVendida; // Reduce el stock del producto
        cout << "INVENTARIO ACTIALIZADO: " << producto.stock << " UNIDADES DE " << producto.nombre << " DISPONIBLES." << endl; // Muestra por consola actualizacion de inventario
    }
};

class GeneradorDeReportes {
public:
    // Genera un reporte de venta para un producto y una cantidad dada
    void GeneRVenta(Productos producto, int cantidadVendida) {
        cout << "Reporte de venta: Se vendieron " << cantidadVendida << " UNIDADES DE " << producto.nombre << "." << endl; // Muestra por consola un mensaje de reporte de venta
        cout << "--------------------------------------" << endl; 
    }

    // Genera un informe de inventario para una lista de productos y su tamaño
    void generarInformeInventario(Productos inventario[], int tam) {
        cout << "Informe de inventario:" << endl; // Imprime un encabezado para el informe de inventario
        for (int i = 0; i < tam; ++i) {
            cout << "Producto: " << inventario[i].nombre << ", Cantidad disponible: " << inventario[i].stock << ", Precio: S/." << inventario[i].precio << endl; // Muestra por consola la información sobre cada producto en el inventario
            if (i < tam - 1) {
                cout << "--------------------------------------" << endl; 
            }
        }
    }
};

int main() {
    // Inicialización del inventario con varios productos
    Productos inventario[8] = {
        {"Laptop", 1000.0, 10},
        {"Procesador Intel core i9", 500.0, 20},
        {"Tablet", 800.0, 15},
        {"Auriculares JBL", 100.0, 30},
        {"Monitor", 400.0, 25},
        {"Teclado", 50.0, 40}, 
        {"Mouse", 30.0, 50},  
        {"Impresora", 200.0, 15} 
    };

    GestorDeInventario gestor; // Instancia del gestor de inventario
    GeneradorDeReportes reporte; // Instancia del generador de reportes

    // Array de pedidos
    Pedido pedidos[3] = {
        Pedido(inventario[0], 66),
        Pedido(inventario[2], 1),
        Pedido(inventario[3], 5)
    };

    // Iteración sobre los pedidos
    for (const auto pedido : pedidos) {
        // Verifica si el producto pedido está disponible en el inventario
        if (gestor.VerDisponible(pedido.prod, pedido.cantidad)) {
            // Si está disponible actualiza el inventario y genera un reporte de venta
            gestor.UpdateInventario(pedido.prod, pedido.cantidad);
            reporte.GeneRVenta(pedido.prod, pedido.cantidad);
        } else {
            // Si no está disponible muestra un mensaje indicando que no hay stock disponible
            cout << "NO HAY STOCK DISPONIBLE PARA EL PRODUCTO---> " << pedido.prod.nombre << endl;
        }
    }

    // Crea un informe de inventario
    reporte.generarInformeInventario(inventario, 8); // Actualiza el tamaño del inventario

    return 0;
}
