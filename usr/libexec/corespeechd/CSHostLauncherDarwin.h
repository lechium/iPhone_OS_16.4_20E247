//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CSHostLauncherDarwin : NSObject
{
    struct __IOHIDUserDevice *_device;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_hidCallbackQueue;	// 16 = 0x10
}

+ (id)propertyDictForDarwin;	// IMP=0x00400000000bc2fe
+ (id)sharedInstance;	// IMP=0x00100000000bbeb2
- (void).cxx_destruct;	// IMP=0x00200000000bc3fe
- (_Bool)wakeHostForVoiceTrigger;	// IMP=0x00100000000bc0ed
- (void)dealloc;	// IMP=0x00100000000bc0ae
- (id)init;	// IMP=0x00100000000bbf07

@end
