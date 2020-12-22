#ifndef __GENERATED_HANDLERS__ZIGBEE_H
#define __GENERATED_HANDLERS__ZIGBEE_H
//
// NOTE: this file can only be included ONCE!!!
//
#include "dkTypes.h"
#include "__generated__zigbee.h"

// Send interfaces
static void send_zigbee_data(UPid uPid, uint8_t *buf, uint16_t dataLen, UPid target);

void send_zigbee_RequestCarDamage(RequestCarDamageBuffer *buf, UPid target) {
  UPid upid = RequestCarDamage__uPid(buf);
  RequestCarDamage__set_checkSum(buf, RequestCarDamage__computeCheckSum(buf));
  send_zigbee_data(upid, (uint8_t *)buf, RequestCarDamage__computeSize(), target);
}
void send_zigbee_SendCarDamage(SendCarDamageBuffer *buf, UPid target) {
  UPid upid = SendCarDamage__uPid(buf);
  SendCarDamage__set_checkSum(buf, SendCarDamage__computeCheckSum(buf));
  send_zigbee_data(upid, (uint8_t *)buf, SendCarDamage__computeSize(buf), target);
}
void send_zigbee_RequestRepairProgress(RequestRepairProgressBuffer *buf, UPid target) {
  UPid upid = RequestRepairProgress__uPid(buf);
  RequestRepairProgress__set_checkSum(buf, RequestRepairProgress__computeCheckSum(buf));
  send_zigbee_data(upid, (uint8_t *)buf, RequestRepairProgress__computeSize(), target);
}
void send_zigbee_SendRepairProgress(SendRepairProgressBuffer *buf, UPid target) {
  UPid upid = SendRepairProgress__uPid(buf);
  SendRepairProgress__set_checkSum(buf, SendRepairProgress__computeCheckSum(buf));
  send_zigbee_data(upid, (uint8_t *)buf, SendRepairProgress__computeSize(), target);
}


void send_zigbee_CrewEventPackAck(CrewEventPackAckBuffer *buf, UPid target) {
  UPid upid = {0};
  CrewEventPackAck__set_checkSum(buf, CrewEventPackAck__computeCheckSum(buf));
  send_zigbee_data(upid, (uint8_t *)buf, CrewEventPackAck__computeSize(), target);
}
void send_zigbee_SecondDamage(SecondDamageBuffer *buf, UPid target) {
  UPid upid = SecondDamage__uPid(buf);
  SecondDamage__set_checkSum(buf, SecondDamage__computeCheckSum(buf));
  send_zigbee_data(upid, (uint8_t *)buf, SecondDamage__computeSize(), target);
}
void send_zigbee_BindWeapon(BindWeaponBuffer *buf, UPid target) {
  UPid upid = BindWeapon__uPid(buf);
  BindWeapon__set_checkSum(buf, BindWeapon__computeCheckSum(buf));
  send_zigbee_data(upid, (uint8_t *)buf, BindWeapon__computeSize(), target);
}
void send_zigbee_SetMissileParams(SetMissileParamsBuffer *buf, UPid target) {
  UPid upid = SetMissileParams__uPid(buf);
  SetMissileParams__set_checkSum(buf, SetMissileParams__computeCheckSum(buf));
  send_zigbee_data(upid, (uint8_t *)buf, SetMissileParams__computeSize(), target);
}
void send_zigbee_WeaponResponse(WeaponResponseBuffer *buf, UPid target) {
  UPid upid = WeaponResponse__uPid(buf);
  WeaponResponse__set_checkSum(buf, WeaponResponse__computeCheckSum(buf));
  send_zigbee_data(upid, (uint8_t *)buf, WeaponResponse__computeSize(buf), target);
}
void send_zigbee_SimulateExplosive(SimulateExplosiveBuffer *buf, UPid target) {
  UPid upid = SimulateExplosive__uPid(buf);
  SimulateExplosive__set_checkSum(buf, SimulateExplosive__computeCheckSum(buf));
  send_zigbee_data(upid, (uint8_t *)buf, SimulateExplosive__computeSize(), target);
}
void send_zigbee_SimulateBomb(SimulateBombBuffer *buf, UPid target) {
  UPid upid = SimulateBomb__uPid(buf);
  SimulateBomb__set_checkSum(buf, SimulateBomb__computeCheckSum(buf));
  send_zigbee_data(upid, (uint8_t *)buf, SimulateBomb__computeSize(), target);
}
void send_zigbee_Beacon(BeaconBuffer *buf, UPid target) {
  UPid upid = Beacon__uPid(buf);
  Beacon__set_checkSum(buf, Beacon__computeCheckSum(buf));
  send_zigbee_data(upid, (uint8_t *)buf, Beacon__computeSize(), target);
}
void send_zigbee_PeopleDataDownload(PeopleDataDownloadBuffer *buf, UPid target) {
  UPid upid = PeopleDataDownload__uPid(buf);
  PeopleDataDownload__set_checkSum(buf, PeopleDataDownload__computeCheckSum(buf));
  send_zigbee_data(upid, (uint8_t *)buf, PeopleDataDownload__computeSize(), target);
}
void send_zigbee_WeaponDataUpload(WeaponDataUploadBuffer *buf, UPid target) {
  UPid upid = WeaponDataUpload__uPid(buf);
  WeaponDataUpload__set_checkSum(buf, WeaponDataUpload__computeCheckSum(buf));
  send_zigbee_data(upid, (uint8_t *)buf, WeaponDataUpload__computeSize(), target);
}
void send_zigbee_PlantMineAckZigBee(PlantMineAckZigBeeBuffer *buf, UPid target) {
  UPid upid = {0};
  PlantMineAckZigBee__set_checkSum(buf, PlantMineAckZigBee__computeCheckSum(buf));
  send_zigbee_data(upid, (uint8_t *)buf, PlantMineAckZigBee__computeSize(), target);
}
void send_zigbee_RemoveMineAckZigBee(RemoveMineAckZigBeeBuffer *buf, UPid target) {
  UPid upid = {0};
  RemoveMineAckZigBee__set_checkSum(buf, RemoveMineAckZigBee__computeCheckSum(buf));
  send_zigbee_data(upid, (uint8_t *)buf, RemoveMineAckZigBee__computeSize(), target);
}
void send_zigbee_RescueBeacon(RescueBeaconBuffer *buf, UPid target) {
  UPid upid = RescueBeacon__uPid(buf);
  RescueBeacon__set_checkSum(buf, RescueBeacon__computeCheckSum(buf));
  send_zigbee_data(upid, (uint8_t *)buf, RescueBeacon__computeSize(), target);
}

__weak void handleRequestCarDamage_0(RequestCarDamageBuffer *buf, uint16_t dataLen) { return; }
__weak void handleRequestCarDamage_1(RequestCarDamageBuffer *buf, uint16_t dataLen) { return; }
__weak void handleRequestCarDamage_2(RequestCarDamageBuffer *buf, uint16_t dataLen) { return; }
__weak void handleSendCarDamage_0(SendCarDamageBuffer *buf, uint16_t dataLen) { return; }
__weak void handleSendCarDamage_1(SendCarDamageBuffer *buf, uint16_t dataLen) { return; }
__weak void handleSendCarDamage_2(SendCarDamageBuffer *buf, uint16_t dataLen) { return; }
__weak void handleRequestRepairProgress_0(RequestRepairProgressBuffer *buf, uint16_t dataLen) { return; }
__weak void handleRequestRepairProgress_1(RequestRepairProgressBuffer *buf, uint16_t dataLen) { return; }
__weak void handleRequestRepairProgress_2(RequestRepairProgressBuffer *buf, uint16_t dataLen) { return; }
__weak void handleSendRepairProgress_0(SendRepairProgressBuffer *buf, uint16_t dataLen) { return; }
__weak void handleSendRepairProgress_1(SendRepairProgressBuffer *buf, uint16_t dataLen) { return; }
__weak void handleSendRepairProgress_2(SendRepairProgressBuffer *buf, uint16_t dataLen) { return; }
__weak void handleCrewDataPackUpload_0(CrewDataPackUploadBuffer *buf, uint16_t dataLen) { return; }
__weak void handleCrewDataPackUpload_1(CrewDataPackUploadBuffer *buf, uint16_t dataLen) { return; }
__weak void handleCrewDataPackUpload_2(CrewDataPackUploadBuffer *buf, uint16_t dataLen) { return; }
__weak void handleCrewEventPackUpload_0(CrewEventPackUploadBuffer *buf, uint16_t dataLen) { return; }
__weak void handleCrewEventPackUpload_1(CrewEventPackUploadBuffer *buf, uint16_t dataLen) { return; }
__weak void handleCrewEventPackUpload_2(CrewEventPackUploadBuffer *buf, uint16_t dataLen) { return; }
__weak void handleCrewEventPackAck_0(CrewEventPackAckBuffer *buf, uint16_t dataLen) { return; }
__weak void handleCrewEventPackAck_1(CrewEventPackAckBuffer *buf, uint16_t dataLen) { return; }
__weak void handleCrewEventPackAck_2(CrewEventPackAckBuffer *buf, uint16_t dataLen) { return; }
__weak void handleSecondDamage_0(SecondDamageBuffer *buf, uint16_t dataLen) { return; }
__weak void handleSecondDamage_1(SecondDamageBuffer *buf, uint16_t dataLen) { return; }
__weak void handleSecondDamage_2(SecondDamageBuffer *buf, uint16_t dataLen) { return; }
__weak void handleBindWeapon_0(BindWeaponBuffer *buf, uint16_t dataLen) { return; }
__weak void handleBindWeapon_1(BindWeaponBuffer *buf, uint16_t dataLen) { return; }
__weak void handleBindWeapon_2(BindWeaponBuffer *buf, uint16_t dataLen) { return; }
__weak void handleSetMissileParams_0(SetMissileParamsBuffer *buf, uint16_t dataLen) { return; }
__weak void handleSetMissileParams_1(SetMissileParamsBuffer *buf, uint16_t dataLen) { return; }
__weak void handleSetMissileParams_2(SetMissileParamsBuffer *buf, uint16_t dataLen) { return; }
__weak void handleWeaponResponse_0(WeaponResponseBuffer *buf, uint16_t dataLen) { return; }
__weak void handleWeaponResponse_1(WeaponResponseBuffer *buf, uint16_t dataLen) { return; }
__weak void handleWeaponResponse_2(WeaponResponseBuffer *buf, uint16_t dataLen) { return; }
__weak void handleSimulateExplosive_0(SimulateExplosiveBuffer *buf, uint16_t dataLen) { return; }
__weak void handleSimulateExplosive_1(SimulateExplosiveBuffer *buf, uint16_t dataLen) { return; }
__weak void handleSimulateExplosive_2(SimulateExplosiveBuffer *buf, uint16_t dataLen) { return; }
__weak void handleSimulateBomb_0(SimulateBombBuffer *buf, uint16_t dataLen) { return; }
__weak void handleSimulateBomb_1(SimulateBombBuffer *buf, uint16_t dataLen) { return; }
__weak void handleSimulateBomb_2(SimulateBombBuffer *buf, uint16_t dataLen) { return; }
__weak void handleBeacon_0(BeaconBuffer *buf, uint16_t dataLen) { return; }
__weak void handleBeacon_1(BeaconBuffer *buf, uint16_t dataLen) { return; }
__weak void handleBeacon_2(BeaconBuffer *buf, uint16_t dataLen) { return; }
__weak void handlePeopleDataDownload_0(PeopleDataDownloadBuffer *buf, uint16_t dataLen) { return; }
__weak void handlePeopleDataDownload_1(PeopleDataDownloadBuffer *buf, uint16_t dataLen) { return; }
__weak void handlePeopleDataDownload_2(PeopleDataDownloadBuffer *buf, uint16_t dataLen) { return; }
__weak void handleWeaponDataUpload_0(WeaponDataUploadBuffer *buf, uint16_t dataLen) { return; }
__weak void handleWeaponDataUpload_1(WeaponDataUploadBuffer *buf, uint16_t dataLen) { return; }
__weak void handleWeaponDataUpload_2(WeaponDataUploadBuffer *buf, uint16_t dataLen) { return; }
__weak void handlePlantMineAckZigBee_0(PlantMineAckZigBeeBuffer *buf, uint16_t dataLen) { return; }
__weak void handlePlantMineAckZigBee_1(PlantMineAckZigBeeBuffer *buf, uint16_t dataLen) { return; }
__weak void handlePlantMineAckZigBee_2(PlantMineAckZigBeeBuffer *buf, uint16_t dataLen) { return; }
__weak void handleRemoveMineAckZigBee_0(RemoveMineAckZigBeeBuffer *buf, uint16_t dataLen) { return; }
__weak void handleRemoveMineAckZigBee_1(RemoveMineAckZigBeeBuffer *buf, uint16_t dataLen) { return; }
__weak void handleRemoveMineAckZigBee_2(RemoveMineAckZigBeeBuffer *buf, uint16_t dataLen) { return; }
__weak void handleRescueBeacon_0(RescueBeaconBuffer *buf, uint16_t dataLen) { return; }
__weak void handleRescueBeacon_1(RescueBeaconBuffer *buf, uint16_t dataLen) { return; }
__weak void handleRescueBeacon_2(RescueBeaconBuffer *buf, uint16_t dataLen) { return; }

extern UPid _deviceUpid;
static void handle_zigbee_data(uint8_t *buf, uint16_t dataLen) {
  Data_Frame df = read_Data_Frame(buf);
  switch (df) {
    case 0xc211:
      {
        RequestCarDamageBuffer* bufT = (RequestCarDamageBuffer*)buf;
        if (!RequestCarDamage__isCheckSumValid(bufT)) {
          handleIncommingCheckSumMismatch(buf, dataLen, "RequestCarDamage", RequestCarDamage__computeCheckSum(bufT), RequestCarDamage__checkSum(bufT));
          break;
        }
        if (!isUPidEqual(_deviceUpid, RequestCarDamage__uPid(bufT))) {
          handleUpidMismatch(buf, dataLen, "RequestCarDamage", RequestCarDamage__uPid(bufT), _deviceUpid);
          break;
        }
        handleRequestCarDamage_0(bufT, dataLen);
        handleRequestCarDamage_1(bufT, dataLen);
        handleRequestCarDamage_2(bufT, dataLen);
      }
      break;
    case 0xc311:
      {
        SendCarDamageBuffer* bufT = (SendCarDamageBuffer*)buf;
        if (!SendCarDamage__isCheckSumValid(bufT)) {
          handleIncommingCheckSumMismatch(buf, dataLen, "SendCarDamage", SendCarDamage__computeCheckSum(bufT), SendCarDamage__checkSum(bufT));
          break;
        }
        if (!isUPidEqual(_deviceUpid, SendCarDamage__uPid(bufT))) {
          handleUpidMismatch(buf, dataLen, "SendCarDamage", SendCarDamage__uPid(bufT), _deviceUpid);
          break;
        }
        handleSendCarDamage_0(bufT, dataLen);
        handleSendCarDamage_1(bufT, dataLen);
        handleSendCarDamage_2(bufT, dataLen);
      }
      break;
    case 0xc212:
      {
        RequestRepairProgressBuffer* bufT = (RequestRepairProgressBuffer*)buf;
        if (!RequestRepairProgress__isCheckSumValid(bufT)) {
          handleIncommingCheckSumMismatch(buf, dataLen, "RequestRepairProgress", RequestRepairProgress__computeCheckSum(bufT), RequestRepairProgress__checkSum(bufT));
          break;
        }
        if (!isUPidEqual(_deviceUpid, RequestRepairProgress__uPid(bufT))) {
          handleUpidMismatch(buf, dataLen, "RequestRepairProgress", RequestRepairProgress__uPid(bufT), _deviceUpid);
          break;
        }
        handleRequestRepairProgress_0(bufT, dataLen);
        handleRequestRepairProgress_1(bufT, dataLen);
        handleRequestRepairProgress_2(bufT, dataLen);
      }
      break;
    case 0xc312:
      {
        SendRepairProgressBuffer* bufT = (SendRepairProgressBuffer*)buf;
        if (!SendRepairProgress__isCheckSumValid(bufT)) {
          handleIncommingCheckSumMismatch(buf, dataLen, "SendRepairProgress", SendRepairProgress__computeCheckSum(bufT), SendRepairProgress__checkSum(bufT));
          break;
        }
        if (!isUPidEqual(_deviceUpid, SendRepairProgress__uPid(bufT))) {
          handleUpidMismatch(buf, dataLen, "SendRepairProgress", SendRepairProgress__uPid(bufT), _deviceUpid);
          break;
        }
        handleSendRepairProgress_0(bufT, dataLen);
        handleSendRepairProgress_1(bufT, dataLen);
        handleSendRepairProgress_2(bufT, dataLen);
      }
      break;
    case 0xf270:
      {
        CrewDataPackUploadBuffer* bufT = (CrewDataPackUploadBuffer*)buf;
        if (!CrewDataPackUpload__isCheckSumValid(bufT)) {
          handleIncommingCheckSumMismatch(buf, dataLen, "CrewDataPackUpload", CrewDataPackUpload__computeCheckSum(bufT), CrewDataPackUpload__checkSum(bufT));
          break;
        }
        if (!isUPidEqual(_deviceUpid, CrewDataPackUpload__uPid(bufT))) {
          handleUpidMismatch(buf, dataLen, "CrewDataPackUpload", CrewDataPackUpload__uPid(bufT), _deviceUpid);
          break;
        }
        handleCrewDataPackUpload_0(bufT, dataLen);
        handleCrewDataPackUpload_1(bufT, dataLen);
        handleCrewDataPackUpload_2(bufT, dataLen);
      }
      break;
    case 0xf271:
      {
        CrewEventPackUploadBuffer* bufT = (CrewEventPackUploadBuffer*)buf;
        if (!CrewEventPackUpload__isCheckSumValid(bufT)) {
          handleIncommingCheckSumMismatch(buf, dataLen, "CrewEventPackUpload", CrewEventPackUpload__computeCheckSum(bufT), CrewEventPackUpload__checkSum(bufT));
          break;
        }
        if (!isUPidEqual(_deviceUpid, CrewEventPackUpload__uPid(bufT))) {
          handleUpidMismatch(buf, dataLen, "CrewEventPackUpload", CrewEventPackUpload__uPid(bufT), _deviceUpid);
          break;
        }
        handleCrewEventPackUpload_0(bufT, dataLen);
        handleCrewEventPackUpload_1(bufT, dataLen);
        handleCrewEventPackUpload_2(bufT, dataLen);
      }
      break;
    case 0xf171:
      {
        CrewEventPackAckBuffer* bufT = (CrewEventPackAckBuffer*)buf;
        if (!CrewEventPackAck__isCheckSumValid(bufT)) {
          handleIncommingCheckSumMismatch(buf, dataLen, "CrewEventPackAck", CrewEventPackAck__computeCheckSum(bufT), CrewEventPackAck__checkSum(bufT));
          break;
        }
        handleCrewEventPackAck_0(bufT, dataLen);
        handleCrewEventPackAck_1(bufT, dataLen);
        handleCrewEventPackAck_2(bufT, dataLen);
      }
      break;
    case 0xf172:
      {
        SecondDamageBuffer* bufT = (SecondDamageBuffer*)buf;
        if (!SecondDamage__isCheckSumValid(bufT)) {
          handleIncommingCheckSumMismatch(buf, dataLen, "SecondDamage", SecondDamage__computeCheckSum(bufT), SecondDamage__checkSum(bufT));
          break;
        }
        if (!isUPidEqual(_deviceUpid, SecondDamage__uPid(bufT))) {
          handleUpidMismatch(buf, dataLen, "SecondDamage", SecondDamage__uPid(bufT), _deviceUpid);
          break;
        }
        handleSecondDamage_0(bufT, dataLen);
        handleSecondDamage_1(bufT, dataLen);
        handleSecondDamage_2(bufT, dataLen);
      }
      break;
    case 0xf310:
      {
        BindWeaponBuffer* bufT = (BindWeaponBuffer*)buf;
        if (!BindWeapon__isCheckSumValid(bufT)) {
          handleIncommingCheckSumMismatch(buf, dataLen, "BindWeapon", BindWeapon__computeCheckSum(bufT), BindWeapon__checkSum(bufT));
          break;
        }
        if (!isUPidEqual(_deviceUpid, BindWeapon__uPid(bufT))) {
          handleUpidMismatch(buf, dataLen, "BindWeapon", BindWeapon__uPid(bufT), _deviceUpid);
          break;
        }
        handleBindWeapon_0(bufT, dataLen);
        handleBindWeapon_1(bufT, dataLen);
        handleBindWeapon_2(bufT, dataLen);
      }
      break;
    case 0xf311:
      {
        SetMissileParamsBuffer* bufT = (SetMissileParamsBuffer*)buf;
        if (!SetMissileParams__isCheckSumValid(bufT)) {
          handleIncommingCheckSumMismatch(buf, dataLen, "SetMissileParams", SetMissileParams__computeCheckSum(bufT), SetMissileParams__checkSum(bufT));
          break;
        }
        if (!isUPidEqual(_deviceUpid, SetMissileParams__uPid(bufT))) {
          handleUpidMismatch(buf, dataLen, "SetMissileParams", SetMissileParams__uPid(bufT), _deviceUpid);
          break;
        }
        handleSetMissileParams_0(bufT, dataLen);
        handleSetMissileParams_1(bufT, dataLen);
        handleSetMissileParams_2(bufT, dataLen);
      }
      break;
    case 0xf410:
      {
        WeaponResponseBuffer* bufT = (WeaponResponseBuffer*)buf;
        if (!WeaponResponse__isCheckSumValid(bufT)) {
          handleIncommingCheckSumMismatch(buf, dataLen, "WeaponResponse", WeaponResponse__computeCheckSum(bufT), WeaponResponse__checkSum(bufT));
          break;
        }
        if (!isUPidEqual(_deviceUpid, WeaponResponse__uPid(bufT))) {
          handleUpidMismatch(buf, dataLen, "WeaponResponse", WeaponResponse__uPid(bufT), _deviceUpid);
          break;
        }
        handleWeaponResponse_0(bufT, dataLen);
        handleWeaponResponse_1(bufT, dataLen);
        handleWeaponResponse_2(bufT, dataLen);
      }
      break;
    case 0xf186:
      {
        SimulateExplosiveBuffer* bufT = (SimulateExplosiveBuffer*)buf;
        if (!SimulateExplosive__isCheckSumValid(bufT)) {
          handleIncommingCheckSumMismatch(buf, dataLen, "SimulateExplosive", SimulateExplosive__computeCheckSum(bufT), SimulateExplosive__checkSum(bufT));
          break;
        }
        if (!isUPidEqual(_deviceUpid, SimulateExplosive__uPid(bufT))) {
          handleUpidMismatch(buf, dataLen, "SimulateExplosive", SimulateExplosive__uPid(bufT), _deviceUpid);
          break;
        }
        handleSimulateExplosive_0(bufT, dataLen);
        handleSimulateExplosive_1(bufT, dataLen);
        handleSimulateExplosive_2(bufT, dataLen);
      }
      break;
    case 0xf191:
      {
        SimulateBombBuffer* bufT = (SimulateBombBuffer*)buf;
        if (!SimulateBomb__isCheckSumValid(bufT)) {
          handleIncommingCheckSumMismatch(buf, dataLen, "SimulateBomb", SimulateBomb__computeCheckSum(bufT), SimulateBomb__checkSum(bufT));
          break;
        }
        if (!isUPidEqual(_deviceUpid, SimulateBomb__uPid(bufT))) {
          handleUpidMismatch(buf, dataLen, "SimulateBomb", SimulateBomb__uPid(bufT), _deviceUpid);
          break;
        }
        handleSimulateBomb_0(bufT, dataLen);
        handleSimulateBomb_1(bufT, dataLen);
        handleSimulateBomb_2(bufT, dataLen);
      }
      break;
    case 0xf170:
      {
        BeaconBuffer* bufT = (BeaconBuffer*)buf;
        if (!Beacon__isCheckSumValid(bufT)) {
          handleIncommingCheckSumMismatch(buf, dataLen, "Beacon", Beacon__computeCheckSum(bufT), Beacon__checkSum(bufT));
          break;
        }
        if (!isUPidEqual(_deviceUpid, Beacon__uPid(bufT))) {
          handleUpidMismatch(buf, dataLen, "Beacon", Beacon__uPid(bufT), _deviceUpid);
          break;
        }
        handleBeacon_0(bufT, dataLen);
        handleBeacon_1(bufT, dataLen);
        handleBeacon_2(bufT, dataLen);
      }
      break;
    case 0xef30:
      {
        PeopleDataDownloadBuffer* bufT = (PeopleDataDownloadBuffer*)buf;
        if (!PeopleDataDownload__isCheckSumValid(bufT)) {
          handleIncommingCheckSumMismatch(buf, dataLen, "PeopleDataDownload", PeopleDataDownload__computeCheckSum(bufT), PeopleDataDownload__checkSum(bufT));
          break;
        }
        if (!isUPidEqual(_deviceUpid, PeopleDataDownload__uPid(bufT))) {
          handleUpidMismatch(buf, dataLen, "PeopleDataDownload", PeopleDataDownload__uPid(bufT), _deviceUpid);
          break;
        }
        handlePeopleDataDownload_0(bufT, dataLen);
        handlePeopleDataDownload_1(bufT, dataLen);
        handlePeopleDataDownload_2(bufT, dataLen);
      }
      break;
    case 0xef40:
      {
        WeaponDataUploadBuffer* bufT = (WeaponDataUploadBuffer*)buf;
        if (!WeaponDataUpload__isCheckSumValid(bufT)) {
          handleIncommingCheckSumMismatch(buf, dataLen, "WeaponDataUpload", WeaponDataUpload__computeCheckSum(bufT), WeaponDataUpload__checkSum(bufT));
          break;
        }
        if (!isUPidEqual(_deviceUpid, WeaponDataUpload__uPid(bufT))) {
          handleUpidMismatch(buf, dataLen, "WeaponDataUpload", WeaponDataUpload__uPid(bufT), _deviceUpid);
          break;
        }
        handleWeaponDataUpload_0(bufT, dataLen);
        handleWeaponDataUpload_1(bufT, dataLen);
        handleWeaponDataUpload_2(bufT, dataLen);
      }
      break;
    case 0xea31:
      {
        PlantMineAckZigBeeBuffer* bufT = (PlantMineAckZigBeeBuffer*)buf;
        if (!PlantMineAckZigBee__isCheckSumValid(bufT)) {
          handleIncommingCheckSumMismatch(buf, dataLen, "PlantMineAckZigBee", PlantMineAckZigBee__computeCheckSum(bufT), PlantMineAckZigBee__checkSum(bufT));
          break;
        }
        handlePlantMineAckZigBee_0(bufT, dataLen);
        handlePlantMineAckZigBee_1(bufT, dataLen);
        handlePlantMineAckZigBee_2(bufT, dataLen);
      }
      break;
    case 0xea32:
      {
        RemoveMineAckZigBeeBuffer* bufT = (RemoveMineAckZigBeeBuffer*)buf;
        if (!RemoveMineAckZigBee__isCheckSumValid(bufT)) {
          handleIncommingCheckSumMismatch(buf, dataLen, "RemoveMineAckZigBee", RemoveMineAckZigBee__computeCheckSum(bufT), RemoveMineAckZigBee__checkSum(bufT));
          break;
        }
        handleRemoveMineAckZigBee_0(bufT, dataLen);
        handleRemoveMineAckZigBee_1(bufT, dataLen);
        handleRemoveMineAckZigBee_2(bufT, dataLen);
      }
      break;
    case 0xec20:
      {
        RescueBeaconBuffer* bufT = (RescueBeaconBuffer*)buf;
        if (!RescueBeacon__isCheckSumValid(bufT)) {
          handleIncommingCheckSumMismatch(buf, dataLen, "RescueBeacon", RescueBeacon__computeCheckSum(bufT), RescueBeacon__checkSum(bufT));
          break;
        }
        if (!isUPidEqual(_deviceUpid, RescueBeacon__uPid(bufT))) {
          handleUpidMismatch(buf, dataLen, "RescueBeacon", RescueBeacon__uPid(bufT), _deviceUpid);
          break;
        }
        handleRescueBeacon_0(bufT, dataLen);
        handleRescueBeacon_1(bufT, dataLen);
        handleRescueBeacon_2(bufT, dataLen);
      }
      break;
  }
}

#endif // __GENERATED_HANDLERS__ZIGBEE_H
