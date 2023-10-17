//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface ADDeviceSyncSnapshot : NSObject
{
    unsigned long long _generation;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
    NSArray *_items;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000009a89c
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x001000000009a49e
- (void).cxx_destruct;	// IMP=0x001000000009aac6
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) unsigned long long generation; // @synthesize generation=_generation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000009a9f7
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000009a8a4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000009a891
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000009a76c
- (unsigned long long)hash;	// IMP=0x001000000009a6e4
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x001000000009a652
- (id)description;	// IMP=0x001000000009a63e
- (id)initWithGeneration:(unsigned long long)arg1 date:(id)arg2 items:(id)arg3;	// IMP=0x001000000009a4ff
- (id)init;	// IMP=0x001000000009a4eb
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x001000000009a34f
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x001000000009ac77

@end
