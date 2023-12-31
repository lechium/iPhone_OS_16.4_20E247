//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSPointerFunctions.h"

__attribute__((visibility("hidden")))
@interface NSConcretePointerFunctions : NSPointerFunctions
{
    struct NSSlice slice;	// 8 = 0x8
}

+ (_Bool)initializeSlice:(struct NSSlice *)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x00600000004ba5b4
+ (void)initializeBackingStore:(struct NSSlice *)arg1 sentinel:(_Bool)arg2 dynamic:(_Bool)arg3;	// IMP=0x00600000004ba526
- (_Bool)usesWeakReadAndWriteBarriers;	// IMP=0x00000000004badd0
- (_Bool)usesStrongWriteBarrier;	// IMP=0x00000000004badbc
- (CDUnknownFunctionPointerType)relinquishFunction;	// IMP=0x00000000004bada6
- (CDUnknownFunctionPointerType)acquireFunction;	// IMP=0x00000000004bad90
- (CDUnknownFunctionPointerType)descriptionFunction;	// IMP=0x00000000004bad7a
- (CDUnknownFunctionPointerType)isEqualFunction;	// IMP=0x00000000004bad64
- (CDUnknownFunctionPointerType)hashFunction;	// IMP=0x00000000004bad4e
- (CDUnknownFunctionPointerType)sizeFunction;	// IMP=0x00000000004bad38
- (void)setUsesWeakReadAndWriteBarriers:(_Bool)arg1;	// IMP=0x00000000004bad20
- (void)setUsesStrongWriteBarrier:(_Bool)arg1;	// IMP=0x00000000004bad08
- (void)setRelinquishFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x00000000004bacf2
- (void)setAcquireFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x00000000004bacdc
- (void)setDescriptionFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x00000000004bacc6
- (void)setIsEqualFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x00000000004bacab
- (void)setHashFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x00000000004bac90
- (void)setSizeFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x00000000004bac7a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004bac6e
- (unsigned long long)hash;	// IMP=0x00000000004bac65
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004bac2e
- (void)dealloc;	// IMP=0x00000000004babcb
- (id)initWithOptions:(unsigned long long)arg1;	// IMP=0x00000000004bab17
- (id)init;	// IMP=0x00000000004bab03

@end

