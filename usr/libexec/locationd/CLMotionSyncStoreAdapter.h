//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLMotionSyncStoreAdapter
{
}

+ (id)getSilo;	// IMP=0x00200000008ebe36
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000008ebe1d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000008ebdc0
- (void)resetStoredCalibrations;	// IMP=0x00200000008ec04a
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000008ec022
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000008ebff5
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000008ebfcd
- (void *)adaptee;	// IMP=0x00100000008ebf9a
- (void)endService;	// IMP=0x00100000008ebf7f
- (void)beginService;	// IMP=0x00100000008ebecf
- (id)init;	// IMP=0x00100000008ebe92

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
