//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLDispatchSilo, NSString;

@interface CLWatchOrientationSettingsNotifierAdapter
{
}

+ (id)getSilo;	// IMP=0x001000000038e086
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000038e06d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000038e010
+ (_Bool)isSupported;	// IMP=0x001000000038e29a
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x004000000038e272
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000038e245
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000038e21d
- (void *)adaptee;	// IMP=0x001000000038e1ea
- (void)endService;	// IMP=0x001000000038e1cf
- (void)beginService;	// IMP=0x001000000038e11f
- (id)init;	// IMP=0x001000000038e0e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CLDispatchSilo *silo; // @dynamic silo;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

