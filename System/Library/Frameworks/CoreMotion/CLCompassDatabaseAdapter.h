//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLCompassDatabaseAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x00100000001aa173
+ (id)getSilo;	// IMP=0x00100000001a9d9c
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a9d83
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000001a9d26
- (_Bool)syncgetLookupBiasWithMagneticField:(CDStruct_03942939)arg1 acceleration:(CDStruct_03942939)arg2 bias:(CDStruct_03942939 *)arg3 level:(int *)arg4 noResults:(_Bool *)arg5;	// IMP=0x00000000001aa2e8
- (void)getBiasWithMagneticField:(CDStruct_03942939)arg1 acceleration:(CDStruct_03942939)arg2;	// IMP=0x00000000001aa29b
- (int)syncgetPendingSetBiasCount;	// IMP=0x00000000001aa24c
- (void)setBias:(CDStruct_03942939)arg1 withMagneticField:(CDStruct_03942939)arg2 level:(int)arg3 magnitude:(float)arg4 inclination:(float)arg5;	// IMP=0x00000000001aa1d9
- (void)dumpDatabase:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001aa1a0
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000000001aa14b
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000000001aa11e
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000000001aa0f6
- (void *)adaptee;	// IMP=0x00000000001aa0c3
- (void)endService;	// IMP=0x00000000001aa0a8
- (void)beginService;	// IMP=0x00000000001a9e35
- (id)init;	// IMP=0x00000000001a9df8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

