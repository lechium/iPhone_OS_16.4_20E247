//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLGeomagneticModelProviderLocationdAdapter
{
}

+ (id)getSilo;	// IMP=0x00200000006c5516
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000006c54fd
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000006c54a0
- (void)fetchGeomagneticModelData:(CDUnknownBlockType)arg1;	// IMP=0x00200000006c56cb
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000006c56a3
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000006c5676
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000006c564e
- (void *)adaptee;	// IMP=0x00100000006c561b
- (void)endService;	// IMP=0x00100000006c5600
- (void)beginService;	// IMP=0x00100000006c55af
- (id)init;	// IMP=0x00100000006c5572

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

