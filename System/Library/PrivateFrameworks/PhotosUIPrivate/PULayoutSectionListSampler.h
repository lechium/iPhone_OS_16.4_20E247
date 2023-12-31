//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface PULayoutSectionListSampler
{
    long long _numberOfVisibleItems;	// 8 = 0x8
    long long _numberOfRealItems;	// 16 = 0x10
    long long *_visibleItemIndexes;	// 24 = 0x18
    long long _lastSeenSampledIndex;	// 32 = 0x20
    long long _lastSeenUnsampledIndex;	// 40 = 0x28
    long long _lastSeenTopUnsampledIndex;	// 48 = 0x30
}

- (void)dumpInternalMemory;	// IMP=0x000000000025e5a7
- (void)enumerateUnsampledIndexesForSampledIndexInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000025e53a
- (long long)unsampledIndexForIndex:(long long)arg1;	// IMP=0x000000000025e525
- (long long)indexForUnsampledIndex:(long long)arg1 isMainItem:(_Bool *)arg2;	// IMP=0x000000000025e37d
- (long long *)visibleItemIndexes;	// IMP=0x000000000025e36c
- (void)dealloc;	// IMP=0x000000000025e32b
- (id)initWithNumberOfVisibleItems:(long long)arg1 numberOfRealItems:(long long)arg2;	// IMP=0x000000000025e290

@end

