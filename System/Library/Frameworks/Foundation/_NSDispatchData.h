//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface _NSDispatchData : NSData
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00800000006050f4
- (Class)classForCoder;	// IMP=0x000000000060527d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000605243
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000006050fc
- (_Bool)_allowsDirectEncoding;	// IMP=0x00000000006050ec
- (_Bool)_providesConcreteBacking;	// IMP=0x00000000006050da
- (id)_createDispatchData;	// IMP=0x00000000006050c2
- (_Bool)_isDispatchData;	// IMP=0x00000000006050ba
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006050af
- (id)subdataWithRange:(struct _NSRange)arg1;	// IMP=0x0000000000604f73
- (unsigned long long)hash;	// IMP=0x0000000000604dfa
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000604b2b
- (void)enumerateByteRangesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000604a74
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000604a1c
- (void)getBytes:(void *)arg1;	// IMP=0x00000000006049ee

@end

