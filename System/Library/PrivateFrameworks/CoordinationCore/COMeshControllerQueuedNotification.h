//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class COMeshNode, COMeshNotification, NSString;

__attribute__((visibility("hidden")))
@interface COMeshControllerQueuedNotification : NSObject
{
    COMeshNotification *_notification;	// 8 = 0x8
    COMeshNode *_destination;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000123ef
@property(readonly, nonatomic) COMeshNode *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) COMeshNotification *notification; // @synthesize notification=_notification;
- (void)invokeCallbackWithError:(id)arg1;	// IMP=0x00000000000123d5
- (id)command;	// IMP=0x00000000000123c3
- (id)initWithNotification:(id)arg1 destination:(id)arg2;	// IMP=0x000000000001232a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

