//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ParkedCarManager;

@interface ClientTypeResolverParkedCarSource
{
    ParkedCarManager *_parkedCarManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000007c9576
@property(retain, nonatomic) ParkedCarManager *parkedCarManager; // @synthesize parkedCarManager=_parkedCarManager;
- (id)cachedObject;	// IMP=0x00100000007c9501
- (void)objectWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000007c9465
- (_Bool)hasObjectWithType:(int)arg1;	// IMP=0x00100000007c9417
- (id)knownTypes;	// IMP=0x00100000007c940a
- (id)initWithParkedCarManager:(id)arg1;	// IMP=0x00100000007c939c

@end
