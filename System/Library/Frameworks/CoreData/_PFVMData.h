//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface _PFVMData : NSData
{
    int _cd_rc;	// 8 = 0x8
    unsigned long long _length;	// 16 = 0x10
    void *_payload;	// 24 = 0x18
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x006000000024492f
- (Class)classForCoder;	// IMP=0x000000000024491e
- (_Bool)_isDeallocating;	// IMP=0x00000000002448fe
- (_Bool)_tryRetain;	// IMP=0x00000000002448c1
- (unsigned long long)retainCount;	// IMP=0x00000000002448a9
- (oneway void)release;	// IMP=0x000000000024486b
- (id)retain;	// IMP=0x000000000024484a
- (void)dealloc;	// IMP=0x00000000002447f9
- (unsigned long long)length;	// IMP=0x00000000002447e8
- (const void *)bytes;	// IMP=0x00000000002447d7
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000002443db
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000244350

@end

