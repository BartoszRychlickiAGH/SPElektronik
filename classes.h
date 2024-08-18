//#ifndef CLASSES_H_
//#define CLASSES_H_
//
//#include "includings.h"
//
////class of order
//ref class Order{
//	private:
//		int^ orderID{0};
//		int^ clientID{0};
//		int^ deviceID{0};
//		int^ employeeID{0};
//		String^ description{""};
//		String^ status{""};
//		String^ date{""};
//		float^ price{0.0f};
//	public:
//		Order(int^ p_orderID, int^ p_clientID, int^ p_deviceID, int^ p_employeeID, String^ p_status, String^ p_date, float^ p_price,String^ p_description):
//		orderID(p_orderID),clientID(p_clientID),deviceID(p_deviceID),employeeID(p_employeeID),status(p_status),date(p_date),price(p_price),description(p_description){}
//		//getters
//		int^ getOrderID() {
//			return orderID;
//		}
//		int^ getClientID() {
//			return clientID;
//		}
//		int^ getDeviceID() {
//			return deviceID;
//		}
//		int^ getEmployeeID() {
//			return employeeID;
//		}
//		String^ getDescription() {
//			return description;
//		}
//		String^ getStatus() {
//			return status;
//		}
//		String^ getDate() {
//			return date;
//		}
//		float^ getPrice() {
//			return price;
//		}
//};
//
//
////class of device
//ref class Device {
//	private:
//		int deviceId;
//		int clientId;
//		String^ deviceName;
//		String^ deviceType;
//		String^ deviceCategory;
//	public:
//		Device(int deviceId, int clientId, String^ deviceName, String^ deviceType, String^ deviceCategory) {
//			this->deviceId = deviceId;
//			this->clientId = clientId;
//			this->deviceName = deviceName;
//			this->deviceType = deviceType;
//			this->deviceCategory = deviceCategory;
//		}
//		//getters
//		int getDeviceId() {
//			return deviceId;
//		}
//		int getClientId() {
//			return clientId;
//		}
//		String^ getDeviceName() {
//			return deviceName;
//		}
//		String^ getDeviceType() {
//			return deviceType;
//		}
//		String^ getDeviceCategory() {
//			return deviceCategory;
//		}
//};
//
//
////class of client
//ref class Client{
//	private:
//		int clientId;
//		String^ clientName;
//		String^ clientSurname;
//		String^ clientPhone;
//		String^ clientEmail;
//	public:
//		Client(int clientId, String^ clientName, String^ clientSurname, String^ clientPhone, String^ clientEmail) {
//			this->clientId = clientId;
//			this->clientName = clientName;
//			this->clientSurname = clientSurname;
//			this->clientPhone = clientPhone;
//			this->clientEmail = clientEmail;
//		}
//		//getters
//		int getClientId() {
//			return clientId;
//		}
//		String^ getClientName() {
//			return clientName;
//		}
//		String^ getClientSurname() {
//			return clientSurname;
//		}
//		String^ getClientPhone() {
//			return clientPhone;
//		}
//		String^ getClientEmail() {
//			return clientEmail;
//		}
//};
//
//
//
//
//
//
//#endif
