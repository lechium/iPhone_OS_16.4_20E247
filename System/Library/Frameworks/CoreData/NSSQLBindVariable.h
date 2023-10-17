//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPropertyDescription;

__attribute__((visibility("hidden")))
@interface NSSQLBindVariable : NSObject
{
    int _cd_rc;	// 8 = 0x8
    unsigned char _sqlType;	// 12 = 0xc
    unsigned int _index;	// 16 = 0x10
    unsigned int _flags;	// 20 = 0x14
    id _value;	// 24 = 0x18
    NSPropertyDescription *_propertyDescription;	// 32 = 0x20
    NSPropertyDescription *_tombstonedPropertyDescription;	// 40 = 0x28
    long long _int64;	// 48 = 0x30
}

- (id)tombstonedPropertyDescription;	// IMP=0x0000000000167402
- (void)setTombstonedPropertyDescription:(id)arg1;	// IMP=0x00000000001673f8
- (id)propertyDescription;	// IMP=0x00000000001673ee
- (_Bool)allowsCoercion;	// IMP=0x00000000001673e1
- (_Bool)hasObjectValue;	// IMP=0x00000000001673d3
- (void)setIndex:(unsigned int)arg1;	// IMP=0x00000000001673ca
- (unsigned int)index;	// IMP=0x00000000001673c1
- (void)setSQLType:(unsigned char)arg1;	// IMP=0x00000000001673b8
- (unsigned char)sqlType;	// IMP=0x00000000001673ae
- (id)value;	// IMP=0x000000000016737d
- (void)setValue:(id)arg1;	// IMP=0x000000000016734f
- (void)setUnsignedInt:(unsigned int)arg1;	// IMP=0x0000000000167343
- (unsigned int)unsignedInt;	// IMP=0x0000000000167320
- (void)setInt64:(long long)arg1;	// IMP=0x0000000000167316
- (long long)int64;	// IMP=0x00000000001672f2
- (void)dealloc;	// IMP=0x00000000001672b0
- (_Bool)_isDeallocating;	// IMP=0x0000000000167297
- (_Bool)_tryRetain;	// IMP=0x0000000000167261
- (unsigned long long)retainCount;	// IMP=0x0000000000167250
- (oneway void)release;	// IMP=0x0000000000167219
- (id)retain;	// IMP=0x00000000001671ff
- (id)initWithUnsignedInt:(unsigned int)arg1 sqlType:(unsigned char)arg2;	// IMP=0x00000000001671bb
- (id)initWithInt64:(long long)arg1 sqlType:(unsigned char)arg2;	// IMP=0x0000000000167177
- (id)initWithValue:(id)arg1 sqlType:(unsigned char)arg2 propertyDescription:(id)arg3 allowCoercion:(_Bool)arg4;	// IMP=0x00000000001670aa
- (id)initWithValue:(id)arg1 sqlType:(unsigned char)arg2 propertyDescription:(id)arg3;	// IMP=0x0000000000167095

@end
