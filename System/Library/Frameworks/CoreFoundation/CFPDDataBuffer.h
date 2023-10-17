//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CFPDDataBuffer : NSObject
{
}

+ (id)newBufferFromPropertyList:(void *)arg1;	// IMP=0x008000000004135f
+ (id)newBufferFromFile:(int)arg1 allowMappingIfSafe:(_Bool)arg2;	// IMP=0x00800000000412bc
+ (id)newBufferFromCFData:(struct __CFData *)arg1;	// IMP=0x008000000004128e
- (_Bool)purgable;	// IMP=0x00000000000416f6
- (void)endAccessing;	// IMP=0x00000000000416f5
- (_Bool)beginAccessing;	// IMP=0x00000000000416f2
- (void)quicklyValidatePlistAndOnFailureInvokeBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000415ce
- (_Bool)validatePlist;	// IMP=0x0000000000041519
- (void *)copyPropertyListWithMutability:(unsigned long long)arg1 error:(struct __CFError **)arg2;	// IMP=0x0000000000041431
- (id)copyXPCData;	// IMP=0x00000000000413ee
- (struct __CFData *)copyCFData;	// IMP=0x000000000004139f
- (unsigned long long)length;	// IMP=0x0000000000041396
- (void *)bytes;	// IMP=0x000000000004138d

@end
