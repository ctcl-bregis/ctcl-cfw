#pragma once

#include <core/pubsub.h>
#include <furi.h>
#include <furi_hal.h>

#include "dolphin.h"
#include "helpers/dolphin_state.h"

typedef enum {
    DolphinEventTypeDeed,
    DolphinEventTypeStats,
    DolphinEventTypeFlush,
    DolphinEventTypeIncreaseButthurt,
    DolphinEventTypeClearLimits,
} DolphinEventType;

typedef struct {
    DolphinEventType type;
    FuriEventFlag* flag;
    union {
        DolphinDeed deed;
        DolphinStats* stats;
    };
} DolphinEvent;

struct Dolphin {
    // State
    DolphinState* state;
    // Queue
    FuriMessageQueue* event_queue;
    FuriPubSub* pubsub;
    FuriTimer* butthurt_timer;
    FuriTimer* flush_timer;
    FuriTimer* clear_limits_timer;
};

Dolphin* dolphin_alloc(void);

void dolphin_event_send_async(Dolphin* dolphin, DolphinEvent* event);

void dolphin_event_send_wait(Dolphin* dolphin, DolphinEvent* event);

void dolphin_event_release(Dolphin* dolphin, DolphinEvent* event);
