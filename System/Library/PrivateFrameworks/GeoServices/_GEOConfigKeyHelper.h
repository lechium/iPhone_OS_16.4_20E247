//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface _GEOConfigKeyHelper : NSObject
{
    id _lastValue;	// 8 = 0x8
    long long _keySource;	// 16 = 0x10
    NSNumber *_keyNumber;	// 24 = 0x18
    NSString *_keyString;	// 32 = 0x20
    CDStruct_065526f1 configKey;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000113e1f4
- (id)description;	// IMP=0x000000000113e124
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000113e098
- (unsigned long long)hash;	// IMP=0x000000000113e084
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000113ddb0

@end

