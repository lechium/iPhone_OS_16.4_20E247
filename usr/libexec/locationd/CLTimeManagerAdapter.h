//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLTimeManagerAdapter
{
}

+ (id)getSilo;	// IMP=0x0020000000230636
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000023061d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000002305c0
- (void)setGpsTime:(unsigned long long)arg1;	// IMP=0x00200000002308d9
- (_Bool)syncgetReferenceTime:(double *)arg1 andError:(double *)arg2;	// IMP=0x001000000023088c
- (_Bool)syncgetReferenceTime:(double *)arg1;	// IMP=0x001000000023084a
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000230822
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000002307f5
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000002307cd
- (void *)adaptee;	// IMP=0x001000000023079a
- (void)endService;	// IMP=0x001000000023077f
- (void)beginService;	// IMP=0x00100000002306cf
- (id)init;	// IMP=0x0010000000230692

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

