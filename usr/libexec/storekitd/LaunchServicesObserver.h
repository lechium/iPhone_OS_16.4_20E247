//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface LaunchServicesObserver : NSObject
{
}

+ (void)start;	// IMP=0x004000000009c8a0
- (void)_parseRegistrationNotification:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x004000000009cbc5
- (void)_handleUninstalledEventNotification:(id)arg1;	// IMP=0x001000000009cb0b
- (void)_handleInstalledEventNotification:(id)arg1;	// IMP=0x001000000009ca13
- (void)dealloc;	// IMP=0x001000000009c99e
- (id)init;	// IMP=0x001000000009c8e9

@end

