#ifndef _ISO7816_T0_APDU_H_
#define _ISO7816_T0_APDU_H_

#include <stdint.h>
#include "iso7816_atr.h"
#include "core/common_defines.h"

struct ISO7816_Command_APDU {
    //header
    uint8_t CLA;
    uint8_t INS;
    uint8_t P1;
    uint8_t P2;

    //body
    uint8_t Lc;
    uint8_t Le;
} FURI_PACKED;

struct ISO7816_Response_APDU {
    uint8_t SW1;
    uint8_t SW2;
} FURI_PACKED;

void iso7816_answer_to_reset(Iso7816Atr* atr);
void iso7816_read_command_apdu(
    struct ISO7816_Command_APDU* command,
    const uint8_t* dataBuffer,
    uint32_t dataLen);
void iso7816_write_response_apdu(
    const struct ISO7816_Response_APDU* response,
    uint8_t* readerToPcDataBlock,
    uint32_t* readerToPcDataBlockLen,
    uint8_t* responseDataBuffer,
    uint32_t responseDataLen);
#endif //_ISO7816_T0_APDU_H_
