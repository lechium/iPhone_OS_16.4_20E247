//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CMDiagramPyramidMapper
{
    _Bool mIsFlipped;	// 228 = 0xe4
}

- (struct CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000002428c5
- (id)_suggestedBoundsForNodeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000242961
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;	// IMP=0x0000000000242a64
- (void)mapAt:(id)arg1 withState:(id)arg2;	// IMP=0x000000000024274c
- (void)setIsFlipped:(_Bool)arg1;	// IMP=0x000000000045e3bf

@end

