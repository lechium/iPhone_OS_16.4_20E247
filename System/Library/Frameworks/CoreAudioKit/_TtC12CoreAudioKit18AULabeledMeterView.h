//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface _TtC12CoreAudioKit18AULabeledMeterView : UIView
{
    MISSING_TYPE *peak;	// 8 = 0x8
    MISSING_TYPE *peakFaderTrigger;	// 16 = 0x10
    MISSING_TYPE *lastVoiceOverUpdate;	// 24 = 0x18
    MISSING_TYPE *peakTimer;	// 32 = 0x20
    MISSING_TYPE *level;	// 40 = 0x28
    MISSING_TYPE *vertical;	// 44 = 0x2c
    MISSING_TYPE *margins;	// 48 = 0x30
    MISSING_TYPE *axis;	// 80 = 0x50
    MISSING_TYPE *meterLayer;	// 88 = 0x58
    MISSING_TYPE *fillLayer;	// 96 = 0x60
    MISSING_TYPE *peakLayer;	// 104 = 0x68
    MISSING_TYPE *lineLayers;	// 112 = 0x70
    MISSING_TYPE *labelLayers;	// 120 = 0x78
    MISSING_TYPE *label;	// 128 = 0x80
    MISSING_TYPE *meterLabelLayer;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000075810
- (void)layoutSublayersOfLayer:(id)arg1;	// IMP=0x0000000000075790
- (void)tintColorDidChange;	// IMP=0x0000000000075530
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x00000000000728a0
@property(nonatomic) unsigned long long accessibilityTraits;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000072590
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000072380
@property(nonatomic, copy) NSString *label;
- (void)configureWithData:(id)arg1;	// IMP=0x0000000000071860
@property(nonatomic) _Bool vertical; // @synthesize vertical;
@property(nonatomic) float level; // @synthesize level;

@end
