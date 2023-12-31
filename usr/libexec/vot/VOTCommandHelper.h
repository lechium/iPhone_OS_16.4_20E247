//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSAccelerometer, NSString, VOTElement;

@interface VOTCommandHelper : NSObject
{
    VOTElement *_practiceElement;	// 8 = 0x8
    struct CGRect _practiceRegion;	// 16 = 0x10
    _Bool _helpEnabled;	// 48 = 0x30
    double _lastCommandOutputTime;	// 56 = 0x38
    NSString *_lastCommand;	// 64 = 0x40
    BKSAccelerometer *_accelerometer;	// 72 = 0x48
    long long _currentTypingMode;	// 80 = 0x50
}

+ (id)commandHelper;	// IMP=0x00200000000d5c34
- (void).cxx_destruct;	// IMP=0x00200000000d78cb
@property(nonatomic) _Bool helpEnabled; // @synthesize helpEnabled=_helpEnabled;
@property(nonatomic) struct CGRect practiceRegion; // @synthesize practiceRegion=_practiceRegion;
@property(retain, nonatomic) VOTElement *practiceElement; // @synthesize practiceElement=_practiceElement;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(long long)arg2;	// IMP=0x00100000000d7862
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;	// IMP=0x00100000000d785c
- (_Bool)_commandIsSupportedByTV:(id)arg1;	// IMP=0x00100000000d76e8
- (void)_processFallbackHelpForEvent:(id)arg1 command:(id)arg2 commandHelpText:(id *)arg3 activationSpokenHelpText:(id *)arg4 activationDisplayedHelpText:(id *)arg5;	// IMP=0x00100000000d71ee
- (void)_processHelpForEvent:(id)arg1 userCommandContext:(id)arg2 commandHelpText:(id *)arg3 activationSpokenHelpText:(id *)arg4 activationDisplayedHelpText:(id *)arg5;	// IMP=0x00100000000d6ff7
- (void)processHelpForEvent:(id)arg1;	// IMP=0x00100000000d6b5c
- (id)_stringForBrailleGestureCommand:(id)arg1;	// IMP=0x00100000000d68cd
- (id)_keyboardKeyStringForEvent:(id)arg1 spoken:(_Bool)arg2;	// IMP=0x00100000000d5f61
- (void)_updateAccelerometerDataIfNeededAndAnnounce:(_Bool)arg1;	// IMP=0x00100000000d5deb
- (void)dealloc;	// IMP=0x00100000000d5cfd
- (id)init;	// IMP=0x00100000000d5c81

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

