//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GTVMBuffer_replayer : NSObject
{
    struct VMBuffer *_vmBuffer;	// 8 = 0x8
}

@property(readonly, nonatomic) struct VMBuffer *vmBuffer; // @synthesize vmBuffer=_vmBuffer;
- (id)subdataWithRange:(struct _NSRange)arg1;	// IMP=0x001000000002b13f
- (void)setLength:(unsigned long long)arg1;	// IMP=0x001000000002b06e
- (void *)mutableBytes;	// IMP=0x001000000002b05d
- (const void *)bytes;	// IMP=0x001000000002b04c
- (unsigned long long)length;	// IMP=0x001000000002b03e
- (void)dealloc;	// IMP=0x001000000002aff0
- (id)initWithLength:(unsigned long long)arg1;	// IMP=0x001000000002af41
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x001000000002aea7
- (id)initWithVMBuffer:(struct VMBuffer *)arg1;	// IMP=0x001000000002ae49

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
