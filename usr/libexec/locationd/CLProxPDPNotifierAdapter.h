//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLProxPDPNotifierAdapter
{
}

+ (id)getSilo;	// IMP=0x0020000000886936
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000088691d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000008868c0
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0020000000886b22
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000886af5
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000886acd
- (void *)adaptee;	// IMP=0x0010000000886a9a
- (void)endService;	// IMP=0x0010000000886a7f
- (void)beginService;	// IMP=0x00100000008869cf
- (id)init;	// IMP=0x0010000000886992

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
