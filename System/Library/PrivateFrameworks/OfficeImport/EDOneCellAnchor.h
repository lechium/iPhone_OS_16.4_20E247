//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface EDOneCellAnchor
{
    struct EDCellAnchorMarker mFrom;	// 8 = 0x8
    struct CGSize mSize;	// 24 = 0x18
    _Bool mIsRelative;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x000000000023dd42
- (void)setRelative:(_Bool)arg1;	// IMP=0x000000000023dd59
- (_Bool)isRelative;	// IMP=0x000000000023ddad
- (void)setSize:(struct CGSize)arg1;	// IMP=0x000000000023dd7f
- (struct CGSize)size;	// IMP=0x000000000023ddbd
- (void)setFrom:(struct EDCellAnchorMarker)arg1;	// IMP=0x000000000023dd69
- (struct EDCellAnchorMarker)from;	// IMP=0x000000000023dd97

@end

