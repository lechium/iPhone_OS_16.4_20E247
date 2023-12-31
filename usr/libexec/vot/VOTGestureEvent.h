//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenReaderCore/SCRCGestureEvent.h>

@class AXEventRepresentation;

@interface VOTGestureEvent : SCRCGestureEvent
{
    AXEventRepresentation *_eventRepresentation;	// 8 = 0x8
}

+ (id)gestureEventWithEventRepresentation:(id)arg1;	// IMP=0x0040000000064daa
- (void).cxx_destruct;	// IMP=0x00200000000656dc
@property(retain, nonatomic) AXEventRepresentation *eventRepresentation; // @synthesize eventRepresentation=_eventRepresentation;
- (_Bool)didFallThruToDevice;	// IMP=0x00100000000656a7
- (void)_addFingerInformation;	// IMP=0x0010000000065393
- (_Bool)isStylusEvent;	// IMP=0x0010000000065344
- (_Bool)isMovedEvent;	// IMP=0x00100000000652d6
- (_Bool)isDownEvent;	// IMP=0x0010000000065263
- (_Bool)isNonLiftingInRangeEvent;	// IMP=0x00100000000651ef
- (_Bool)_isBogusTouchEvent;	// IMP=0x001000000006516a
- (_Bool)_eventMaskHasTouch;	// IMP=0x00100000000650a5
- (_Bool)isLiftEvent;	// IMP=0x0010000000065023
- (_Bool)isCancelEvent;	// IMP=0x0010000000064fd0
- (id)description;	// IMP=0x0010000000064ec9
- (void)dealloc;	// IMP=0x0010000000064e89
- (id)_initWithDeviceIdentifier:(unsigned long long)arg1 andEventRepresentation:(id)arg2;	// IMP=0x0010000000064e15

@end

