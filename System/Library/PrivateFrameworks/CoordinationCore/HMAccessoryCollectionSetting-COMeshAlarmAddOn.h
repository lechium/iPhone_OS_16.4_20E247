//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMAccessoryCollectionSetting.h>

@interface HMAccessoryCollectionSetting (COMeshAlarmAddOn)
- (void)co_removeAlarm:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x009000000000aaa4
- (void)co_updateAlarm:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x009000000000aa12
- (void)co_addAlarm:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x009000000000a980
- (id)co_alarms;	// IMP=0x009000000000a8ff
- (void)co_setMappedAlarms:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x009000000000bdbe
- (id)co_mappedAlarms;	// IMP=0x009000000000bad7
- (void)co_setCachedWrite:(id)arg1;	// IMP=0x009000000000b751
- (id)co_cachedWrite;	// IMP=0x009000000000b63d
- (void)co_flushQueue;	// IMP=0x009000000000b18e
- (void)co_enqueueOperation:(id)arg1;	// IMP=0x009000000000ab73
- (void)co_withLock:(CDUnknownBlockType)arg1;	// IMP=0x009000000000ab36
@end

