//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface _PFEvanescentData : NSData
{
    unsigned long long _length;	// 8 = 0x8
    NSURL *_fileURL;	// 16 = 0x10
    int _openfd;	// 24 = 0x18
    const void *_activeMap;	// 32 = 0x20
    int _mapRefCount;	// 40 = 0x28
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x00600000002450cd
- (id)subdataWithRange:(struct _NSRange)arg1;	// IMP=0x0000000000245197
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000245135
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000024511e
- (void)getBytes:(void *)arg1;	// IMP=0x00000000002450de
- (Class)classForCoder;	// IMP=0x00000000002450bc
- (const void *)bytes;	// IMP=0x000000000024507f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000245000
- (void)enumerateByteRangesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000244f97
- (unsigned long long)hash;	// IMP=0x0000000000244f7d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000244efc
- (_Bool)isEqualToData:(id)arg1;	// IMP=0x0000000000244eea
- (void)invalidate;	// IMP=0x0000000000244ee0
- (unsigned long long)length;	// IMP=0x0000000000244c00
- (id)description;	// IMP=0x0000000000244b7e
- (id)initWithPath:(id)arg1;	// IMP=0x0000000000244b44
- (void)dealloc;	// IMP=0x0000000000244a98
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000244940

@end

