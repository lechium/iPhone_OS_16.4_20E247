//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface MFPLinearGradientBrush
{
    struct CGRect mBounds;	// 104 = 0x68
    OITSUColor *mStartColor;	// 136 = 0x88
    OITSUColor *mEndColor;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000003633db
- (void)createShading;	// IMP=0x000000000036312d
- (id)endColor;	// IMP=0x0000000000363118
- (id)startColor;	// IMP=0x0000000000363103
- (void)setEndColor:(id)arg1;	// IMP=0x00000000003630ef
- (void)setStartColor:(id)arg1;	// IMP=0x00000000003630db
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000003630bd

@end

