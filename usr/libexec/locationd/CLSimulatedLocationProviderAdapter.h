//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString;

@interface CLSimulatedLocationProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x001000000042b2a6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000042b28d
+ (MISSING_TYPE *)becameFatallyBlocked:index: /* Error: Ran out of types for this method. */;	// IMP=0x001000000042b230
+ (_Bool)isSupported;	// IMP=0x001000000042b4ba
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x002000000042b492
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000042b465
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000042b43d
- (void *)adaptee;	// IMP=0x001000000042b40a
- (void)endService;	// IMP=0x001000000042b3ef
- (void)beginService;	// IMP=0x001000000042b33f
- (id)init;	// IMP=0x001000000042b302

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

