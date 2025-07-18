#pragma once
#include "Employee.h"
#include "Admin.h"
#include "Client.h"

class DataSourceInterface
{
protected:
	
	virtual void addClient(Client&) = 0;
	virtual void addEmployee(Employee&) = 0; 
	virtual void addAdmin(Admin&) = 0;
	virtual void getAllClients() = 0;
	virtual void getAllEmployees() = 0;
	virtual void getAllAdmins() = 0;
	virtual void removeAllClients() = 0;
	virtual void removeAllEmployees() = 0;
	virtual void removeAllAdmins() = 0;
};

