//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarPersonNameItemView
{
    NSString *_personNameString;	// 8 = 0x8
    double _letterSpacing;	// 16 = 0x10
    double _maxWidth;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000f547d9
- (id)accessibilityHUDRepresentation;	// IMP=0x0000000000f5477f
- (long long)legibilityStyle;	// IMP=0x0000000000f54739
- (double)extraRightPadding;	// IMP=0x0000000000f546f3
- (double)addContentOverlap:(double)arg1;	// IMP=0x0000000000f54677
- (double)resetContentOverlap;	// IMP=0x0000000000f54614
- (id)contentsImage;	// IMP=0x0000000000f545df
- (_Bool)_updateWithPersonName:(id)arg1 maxWidth:(double)arg2;	// IMP=0x0000000000f54245
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;	// IMP=0x0000000000f541c4
- (double)standardPadding;	// IMP=0x0000000000f5418d

@end

