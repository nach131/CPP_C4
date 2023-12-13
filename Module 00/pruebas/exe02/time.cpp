#include <iostream>
#include <ctime>
#include <sstream>
#include <iomanip>

// int main()
// {
// 	// Obtener la fecha y hora actual
// 	std::time_t now = std::time(nullptr);
// 	std::tm *localTime = std::localtime(&now);

// 	// Crear una cadena con el formato deseado
// 	std::ostringstream formattedDateTime;
// 	formattedDateTime << std::put_time(localTime, "%Y%m%d_%H%M%S");

// 	// Mostrar la cadena formateada
// 	std::cout << "Fecha y hora actual: " << formattedDateTime.str() << std::endl;

// 	// Parsear la cadena con el formato deseado
// 	std::tm parsedTime = {};
// 	std::istringstream formattedDateTimeInput(formattedDateTime.str());
// 	formattedDateTimeInput >> std::get_time(&parsedTime, "%Y%m%d_%H%M%S");

// 	// Mostrar la fecha y hora parseada
// 	std::cout << "Fecha y hora parseada: " << std::put_time(&parsedTime, "%Y-%m-%d %H:%M:%S") << std::endl;

// 	return 0;
// }

int main()
{
	// Obtener la fecha y hora actual
	std::time_t now = std::time(nullptr);
	std::tm *localTime = std::localtime(&now);

	// Crear una cadena con el formato deseado
	std::ostringstream formattedDateTime;
	formattedDateTime << std::put_time(localTime, "%Y%m%d_%H%M%S");

	// Mostrar la cadena formateada
	std::cout << "Fecha y hora actual: " << formattedDateTime.str() << std::endl;

	// // Parsear la cadena con el formato deseado
	// std::tm parsedTime = {};
	// std::istringstream formattedDateTimeInput(formattedDateTime.str());
	// formattedDateTimeInput >> std::get_time(&parsedTime, "%Y%m%d_%H%M%S");

	// Mostrar la fecha y hora parseada
	// std::cout << "Fecha y hora parseada: " << std::put_time(&parsedTime, "%Y-%m-%d %H:%M:%S") << std::endl;

	return 0;
}
