#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
	int devicetype = 0;
	int errortype = 0;
	printf("enter your device type; 1 for laptop, 2 for smartphone, 3 for router");
	scanf("%d",&devicetype);
	switch(devicetype){
		case 1:
			printf("enter error type: 10 for wont turn on, 11 for overheating, 12 for slow performance");
			scanf("%d",&errortype);
			switch(errortype){
				case 10:
				printf("Check power adapter andbattery connections. Try different power outlet. Remove battery and hold power button for 30 seconds.");
				break;
				case 11:
				printf("Clean fans and ensure proper ventilation. Check for dust accumulation. Use a cooling pad. Monitor CPU usage.");
				break;
				case 12:
				printf("Run system diagnostics and check resource usage. Scan for malware. Upgrade RAM if necessary. Defragmenthard drive");
				break;
				default: 
				printf("enter a valid number");
				break;}
		break;
							
		case 2:
			printf("enter error type: 20 for battery drains fast, 21 for no signal, 22 for slow performance");
			scanf("%d",&errortype);
			switch(errortype){
				case 20:
				printf("Run battery calibration tool and check for background apps. Reduce screen rightness. Disable unnecessary connectivity features.");
				break;
				case 21:
				printf("Check SIM card and network settings. Toggle airplane mode. Update carrier settings.Check for network outages.");
				break;
				case 22:
				printf("Perform screen calibration test. Clean screen surface.Restart device.Check for software updates");
				break;
				default: 
				printf("enter a valid number");
				break;
			}
		
	
		break;
			case 3:
			printf("enter error type: 30 for no internet connection, 31 weak wifi  signal, 32 for device can't connect");
			scanf("%d",&errortype);
			switch(errortype){
			case 30:
			printf("Check ISP status and router cables. Restart modem and router. Check WAN connection settings. Verify internet subscription.");
			break;
					
			case 31:
			printf("Reposition router and check antenna connections. Reduce interference from other devices. Change Wi-Fi channel. Consider range extender.");
			break;
				
			case 32:
			printf("Check MAC filtering and DHCP settings. Verify Wi-Fi password. Restart connecting device. Check for IP conflicts");
			break;
			default: 
			printf("enter a valid number");
					}
		
		break;
		default:
		printf("enter a valid number for device");
		break;
	
}
	return 0;
}
	
	
