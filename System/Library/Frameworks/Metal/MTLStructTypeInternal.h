//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLStructType.h"

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MTLStructTypeInternal : MTLStructType
{
    unsigned long long _dataType;	// 8 = 0x8
    NSDictionary *_dictionary;	// 16 = 0x10
    NSArray *_members;	// 24 = 0x18
    _Bool _isIndirectArgumentBuffer;	// 32 = 0x20
    NSString *_typeName;	// 40 = 0x28
}

@property(readonly) NSString *typeName; // @synthesize typeName=_typeName;
@property _Bool isIndirectArgumentBuffer; // @synthesize isIndirectArgumentBuffer=_isIndirectArgumentBuffer;
- (unsigned long long)dataType;	// IMP=0x00000000000e8448
- (_Bool)isStructLayoutThreadSafeWith:(id)arg1;	// IMP=0x00000000000e813a
- (id)members;	// IMP=0x00000000000e8129
- (id)description;	// IMP=0x00000000000e8115
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000e7df3
- (void)dealloc;	// IMP=0x00000000000e7d8d
- (id)memberByName:(id)arg1;	// IMP=0x00000000000e7d70
- (void)setMembers:(id *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000e7ba5
- (id)init;	// IMP=0x00000000000e7b67
- (id)initWithMembers:(id *)arg1 count:(unsigned long long)arg2 typeName:(id)arg3;	// IMP=0x00000000000e7b20
- (id)initWithMembers:(id *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000e7936

@end

