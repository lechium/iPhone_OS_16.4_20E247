//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PersonalizedMapItemMUIDKey : NSObject
{
    unsigned long long _muid;	// 8 = 0x8
    unsigned long long _hash;	// 16 = 0x10
}

@property(readonly, nonatomic) unsigned long long muid; // @synthesize muid=_muid;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000009b3401
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000009b335c
@property(readonly) unsigned long long hash;
- (id)initWithMUID:(unsigned long long)arg1;	// IMP=0x00100000009b32c7
- (id)init;	// IMP=0x00100000009b32b9

@end

