//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;
@protocol _TtP12CoreAudioKit27CAAUViewParameterDataSource_;

__attribute__((visibility("hidden")))
@interface _TtC12CoreAudioKit16AUDelayGraphView
{
    MISSING_TYPE *pointLayer;	// 224 = 0xe0
    MISSING_TYPE *delayLayers;	// 232 = 0xe8
    MISSING_TYPE *defaultMax;	// 240 = 0xf0
    MISSING_TYPE *xMinorGridCount;	// 248 = 0xf8
    MISSING_TYPE *graphActivated;	// 256 = 0x100
    MISSING_TYPE *accessibilityParam;	// 260 = 0x104
    MISSING_TYPE *accessibilityTimeFormatter;	// 264 = 0x108
    MISSING_TYPE *accessibilityDecimalFormatter;	// 272 = 0x110
    MISSING_TYPE *xMinorGrids;	// 280 = 0x118
    MISSING_TYPE *invert;	// 288 = 0x120
    MISSING_TYPE *dataSource;	// 296 = 0x128
    MISSING_TYPE *zoomFactor;	// 304 = 0x130
}

- (void).cxx_destruct;	// IMP=0x0000000000044400
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000044330
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000044050
- (void)tintColorDidChange;	// IMP=0x0000000000043d30
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000439e0
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000435b0
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000043000
- (struct CGRect)graphFrame;	// IMP=0x0000000000042800
- (void)updateFor:(unsigned int)arg1 value:(float)arg2;	// IMP=0x00000000000425a0
@property(nonatomic) float zoomFactor; // @synthesize zoomFactor;
- (void)configureWithData:(id)arg1;	// IMP=0x0000000000040120
@property(nonatomic, retain) id <_TtP12CoreAudioKit27CAAUViewParameterDataSource_> dataSource; // @synthesize dataSource;
- (_Bool)accessibilityActivate;	// IMP=0x000000000003fd60
- (void)accessibilityDecrement;	// IMP=0x000000000003f650
- (void)accessibilityIncrement;	// IMP=0x000000000003f540
@property(nonatomic) _Bool invert; // @synthesize invert;

@end
