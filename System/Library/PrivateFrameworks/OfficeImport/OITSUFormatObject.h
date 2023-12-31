//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSUFormatObject : NSObject
{
    CDStruct_730f14de mFormatStruct;	// 8 = 0x8
    _Bool mUseExpandedContents;	// 48 = 0x30
}

+ (id)defaultDurationFormat;	// IMP=0x0010000000278b31
+ (id)defaultDateFormat:(id)arg1;	// IMP=0x0010000000278a18
@property(readonly, nonatomic) _Bool useExpandedContents; // @synthesize useExpandedContents=mUseExpandedContents;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000278ed8
- (unsigned long long)hash;	// IMP=0x0000000000278e74
- (void)p_setFormatStruct:(CDStruct_730f14de)arg1;	// IMP=0x0000000000278e0b
@property(readonly, nonatomic) CDStruct_730f14de formatStruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000278d6a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000278d5f
- (void)dealloc;	// IMP=0x0000000000278d0f
- (id)initWithTSUFormatFormatStruct:(CDStruct_730f14de)arg1;	// IMP=0x0000000000278cfb
- (id)initWithTSUFormatFormatStruct:(CDStruct_730f14de)arg1 useExpandedContents:(_Bool)arg2;	// IMP=0x0000000000278c73
- (id)init;	// IMP=0x0000000000278ba2

@end

