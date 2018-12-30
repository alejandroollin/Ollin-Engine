#include "Formulario.h"

using namespace Ollin    // Reemplazar Project1 por el nombre que se le haya dado al proyecto

[STAThread]

void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//Project1 es el nombre del proyecto
	Formulario form;	//Reemplazar MyForm por el nombre que tenga tu clase 
	Application::Run(%form);
}