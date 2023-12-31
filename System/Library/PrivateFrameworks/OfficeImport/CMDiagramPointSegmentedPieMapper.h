//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CMDiagramPointSegmentedPieMapper
{
    double mStartAngle;	// 72 = 0x48
    double mStopAngle;	// 80 = 0x50
    _Bool mDrawArrows;	// 88 = 0x58
    unsigned long long mSegmentIndex;	// 96 = 0x60
    unsigned long long mSegmentCount;	// 104 = 0x68
}

- (id)transformPresentationName;	// IMP=0x00000000004603e4
- (void)mapAt:(id)arg1 withState:(id)arg2;	// IMP=0x000000000045f970
- (id)_arrowFillWithState:(id)arg1;	// IMP=0x000000000045f7b7
- (void)setSegmentCount:(unsigned long long)arg1;	// IMP=0x000000000045f7a6
- (void)setSegmentIndex:(unsigned long long)arg1;	// IMP=0x000000000045f795
- (void)setDrawArrows:(_Bool)arg1;	// IMP=0x000000000045f785
- (void)setStopAngle:(double)arg1;	// IMP=0x000000000045f773
- (void)setStartAngle:(double)arg1;	// IMP=0x000000000045f761

@end

