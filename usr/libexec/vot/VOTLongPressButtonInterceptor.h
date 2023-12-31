//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXEventRepresentation, SCRCTargetSelectorTimer;

@interface VOTLongPressButtonInterceptor
{
    _Bool _clickDown;	// 9 = 0x9
    CDUnknownBlockType _longPressHandler;	// 16 = 0x10
    SCRCTargetSelectorTimer *_timer;	// 24 = 0x18
    double _longPressDelay;	// 32 = 0x20
    AXEventRepresentation *_pendingDownEvent;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000001331d2
@property(retain, nonatomic) AXEventRepresentation *pendingDownEvent; // @synthesize pendingDownEvent=_pendingDownEvent;
@property(nonatomic) double longPressDelay; // @synthesize longPressDelay=_longPressDelay;
@property(retain, nonatomic) SCRCTargetSelectorTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType longPressHandler; // @synthesize longPressHandler=_longPressHandler;
- (void)_timerFired;	// IMP=0x00100000001330ca
- (void)buttonUpOccurred:(id)arg1;	// IMP=0x0010000000132f72
- (void)buttonDownOccurred:(id)arg1;	// IMP=0x0010000000132ea4
- (void)dealloc;	// IMP=0x0010000000132e39
- (id)initWithThreadKey:(id)arg1 longPressDelay:(double)arg2 longPressHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000132d5a

@end

