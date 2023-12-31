//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSURLKeyValuePair : NSObject
{
    id key;	// 8 = 0x8
    id value;	// 16 = 0x10
    unsigned long long hash;	// 24 = 0x18
}

+ (id)pairWithKey:(id)arg1 value:(id)arg2;	// IMP=0x0060000000516b18
+ (id)pair;	// IMP=0x0060000000516aeb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000516d1a
- (unsigned long long)hash;	// IMP=0x0000000000516d10
- (id)description;	// IMP=0x0000000000516ce3
- (id)value;	// IMP=0x0000000000516cd9
- (id)key;	// IMP=0x0000000000516ccf
- (void)setValue:(id)arg1;	// IMP=0x0000000000516ca1
- (void)setKey:(id)arg1;	// IMP=0x0000000000516c73
- (void)dealloc;	// IMP=0x0000000000516c06
- (id)initWithKey:(id)arg1 value:(id)arg2;	// IMP=0x0000000000516b53

@end

