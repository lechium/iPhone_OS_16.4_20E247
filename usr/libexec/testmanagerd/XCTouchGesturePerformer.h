//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, XCTDUserTestNotificationProviding;

@interface XCTouchGesturePerformer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct __IOHIDEventSystemClient *_eventClient;	// 16 = 0x10
    _Bool _isSynthesizingEvent;	// 24 = 0x18
    unsigned long long _currentKeyboardModifierFlags;	// 32 = 0x20
    Class _eventPlayer;	// 40 = 0x28
    id <XCTDUserTestNotificationProviding> _userTestNotificationProvider;	// 48 = 0x30
}

+ (_Bool)validEventRecord:(id)arg1 error:(id *)arg2;	// IMP=0x00200000000274d4
+ (id)senderForEventRecord:(id)arg1;	// IMP=0x0010000000027020
+ (id)senderForDeviceEvent:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000026d5b
- (void).cxx_destruct;	// IMP=0x002000000002dac1
@property(readonly) id <XCTDUserTestNotificationProviding> userTestNotificationProvider; // @synthesize userTestNotificationProvider=_userTestNotificationProvider;
@property(readonly, nonatomic) Class eventPlayer; // @synthesize eventPlayer=_eventPlayer;
- (id)_stringToCharacterArray:(id)arg1;	// IMP=0x001000000002d981
- (void)_typeString:(id)arg1 keysPerSecond:(unsigned long long)arg2 implicitConfirmationInterval:(double)arg3 shouldRedact:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000002d326
- (void)typeString:(id)arg1 keysPerSecond:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002d303
- (void)_handleModifierChanges:(unsigned long long)arg1 withComposer:(id)arg2;	// IMP=0x001000000002cf36
- (void)performDeviceEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002cd7c
- (void)_executeEventWithDescription:(id)arg1 implicitConfirmationInterval:(double)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x001000000002cb88
- (void)_executeEventWithDescription:(id)arg1 implicitConfirmationInterval:(double)arg2 confirmationNotification:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x001000000002c7fc
- (void)_queue_performKnobRotation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002c214
- (void)_queue_performKnobNudge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002bafb
- (void)_queue_performDigitalCrownRotation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002b5a3
- (void)_queue_performButtonEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002aead
- (void)_didAddActionForEventState:(id)arg1;	// IMP=0x001000000002ae08
- (void)_playCapturedStreams:(id)arg1 implicitConfirmationInterval:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002a2fa
- (void)_synthesizeTouchEvent:(id)arg1 implicitConfirmationInterval:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000028df4
- (void)_synthesizeMouseEvent:(id)arg1 implicitConfirmationInterval:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000027e99
- (void)synthesizeEvent:(id)arg1 implicitConfirmationInterval:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000027cca
- (void)synthesizeEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000027cb0
- (void)_playEventStream:(id)arg1 options:(id)arg2;	// IMP=0x0010000000027b23
- (void)_performEventActions:(id)arg1 options:(id)arg2 withSender:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000027805
- (void)dealloc;	// IMP=0x001000000002741f
- (id)initWithUserTestingNotificationProvider:(id)arg1;	// IMP=0x00100000000273c7
- (id)initWithUserTestingNotificationProvider:(id)arg1 eventPlayer:(Class)arg2;	// IMP=0x00100000000272d1
@property(readonly) unsigned long long currentKeyboardModifierFlags;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

