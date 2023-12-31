//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NSCopying;

@interface STReactorDirective : NSObject
{
    long long _type;	// 8 = 0x8
    NSObject<NSCopying> *_data;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000075655
@property(readonly, copy) NSObject<NSCopying> *data; // @synthesize data=_data;
@property(readonly) long long type; // @synthesize type=_type;
- (unsigned long long)hash;	// IMP=0x00100000000755d5
- (_Bool)isEqualToReactorDirective:(id)arg1;	// IMP=0x00100000000754a6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000075443
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000753f6
- (id)description;	// IMP=0x001000000007533f
- (id)matchingAny:(id)arg1;	// IMP=0x00100000000751b8
- (id)initWithType:(long long)arg1 data:(id)arg2;	// IMP=0x001000000007512e

@end

