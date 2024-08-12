#ifndef CLASSES_H_
#define CLASSES_H_

#include "includings.h"

//class of order
ref class Order{
	private:
		int orderID;
		int clientID;
		int deviceID;
		int employeeID;
		String^ description;
		int status;
		String^ date;
		int price;
	public:
		Order(int orderID, int clientID, int deviceID, int employeeID, String^ description, int status, String^ date, int price) {
			this->orderID = orderID;
			this->clientID = clientID;
			this->deviceID = deviceID;
			this->employeeID = employeeID;
			this->description = description;
			this->status = status;
			this->date = date;
			this->price = price;
		}
		//getters
		int getOrderID() {
			return orderID;
		}
		int getClientID() {
			return clientID;
		}
		int getDeviceID() {
			return deviceID;
		}
		int getEmployeeID() {
			return employeeID;
		}
		String^ getDescription() {
			return description;
		}
		int getStatus() {
			return status;
		}
		String^ getDate() {
			return date;
		}
		int getPrice() {
			return price;
		}
		//setters
		void setOrderID(int orderID) {
			this->orderID = orderID;
		}
		void setClientID(int clientID) {
			this->clientID = clientID;
		}
		void setDeviceID(int deviceID) {
			this->deviceID = deviceID;
		}
		void setEmployeeID(int employeeID) {
			this->employeeID = employeeID;
		}
		void setDescription(String^ description) {
			this->description = description;
		}
		void setStatus(int status) {
			this->status = status;
		}
		void setDate(String^ date) {
			this->date = date;
		}
		void setPrice(int price) {
			this->price = price;
		}
};


//class of device
ref class Device {
	private:
		int deviceId;
		int clientId;
		String^ deviceName;
		String^ deviceType;
		String^ deviceCategory;
	public:
		Device(int deviceId, int clientId, String^ deviceName, String^ deviceType, String^ deviceCategory) {
			this->deviceId = deviceId;
			this->clientId = clientId;
			this->deviceName = deviceName;
			this->deviceType = deviceType;
			this->deviceCategory = deviceCategory;
		}
		//getters
		int getDeviceId() {
			return deviceId;
		}
		int getClientId() {
			return clientId;
		}
		String^ getDeviceName() {
			return deviceName;
		}
		String^ getDeviceType() {
			return deviceType;
		}
		String^ getDeviceCategory() {
			return deviceCategory;
		}
		//setters
		void setDeviceId(int deviceId) {
			this->deviceId = deviceId;
		}
		void setClientId(int clientId) {
			this->clientId = clientId;
		}
		void setDeviceName(String^ deviceName) {
			this->deviceName = deviceName;
		}
		void setDeviceType(String^ deviceType) {
			this->deviceType = deviceType;
		}
		void setDeviceCategory(String^ deviceCategory) {
			this->deviceCategory = deviceCategory;
		}
};


//class of client
ref class Client{
	private:
		int clientId;
		String^ clientName;
		String^ clientSurname;
		String^ clientPhone;
		String^ clientEmail;
	public:
		Client(int clientId, String^ clientName, String^ clientSurname, String^ clientPhone, String^ clientEmail) {
			this->clientId = clientId;
			this->clientName = clientName;
			this->clientSurname = clientSurname;
			this->clientPhone = clientPhone;
			this->clientEmail = clientEmail;
		}
		//getters
		int getClientId() {
			return clientId;
		}
		String^ getClientName() {
			return clientName;
		}
		String^ getClientSurname() {
			return clientSurname;
		}
		String^ getClientPhone() {
			return clientPhone;
		}
		String^ getClientEmail() {
			return clientEmail;
		}
		//setters
		void setClientId(int clientId) {
			this->clientId = clientId;
		}
		void setClientName(String^ clientName) {
			this->clientName = clientName;
		}
		void setClientSurname(String^ clientSurname) {
			this->clientSurname = clientSurname;
		}
		void setClientPhone(String^ clientPhone) {
			this->clientPhone = clientPhone;
		}
		void setClientEmail(String^ clientEmail) {
			this->clientEmail = clientEmail;
		}
};






#endif
