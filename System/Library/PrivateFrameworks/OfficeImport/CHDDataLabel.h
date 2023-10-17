//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDResources, EDString, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDDataLabel : NSObject
{
    EDResources *mResources;	// 8 = 0x8
    EDString *mString;	// 16 = 0x10
    unsigned long long mContentFormatId;	// 24 = 0x18
    int mPosition;	// 32 = 0x20
    _Bool mShowLeaderLines;	// 36 = 0x24
    _Bool mShowCategoryName;	// 37 = 0x25
    _Bool mShowSeriesName;	// 38 = 0x26
    _Bool mShowPercent;	// 39 = 0x27
    _Bool mShowBubbleSize;	// 40 = 0x28
    _Bool mShowValue;	// 41 = 0x29
    _Bool mShowLegendKey;	// 42 = 0x2a
    _Bool mIsPositionAffineTransform;	// 43 = 0x2b
    _Bool mContentFormatDerived;	// 44 = 0x2c
    _Bool mDeleted;	// 45 = 0x2d
    _Bool mExtensionDetected;	// 46 = 0x2e
    double mRotation;	// 48 = 0x30
    OADGraphicProperties *mGraphicProperties;	// 56 = 0x38
    OADGraphicProperties *mLeaderlineGraphicProperties;	// 64 = 0x40
}

+ (id)dataLabelWithResources:(id)arg1;	// IMP=0x006000000018a3b1
- (void).cxx_destruct;	// IMP=0x000000000038ca5c
@property(retain, nonatomic) EDString *string; // @synthesize string=mString;
- (void)setRotationAngle:(double)arg1;	// IMP=0x00000000001eb90a
- (double)rotationAngle;	// IMP=0x000000000038ca47
- (_Bool)isPositionAffineTransform;	// IMP=0x00000000002444a4
- (void)setIsPositionAffineTransform:(_Bool)arg1;	// IMP=0x00000000002444ad
- (void)setLeaderlineGraphicProperties:(id)arg1;	// IMP=0x000000000038ca03
- (id)leaderlineGraphicProperties;	// IMP=0x000000000038c9f5
- (void)setGraphicProperties:(id)arg1;	// IMP=0x000000000018a4d1
- (id)graphicProperties;	// IMP=0x000000000038c9e7
- (_Bool)isCustomLabelBlockingVisibility;	// IMP=0x000000000038c8aa
- (void)setExtensionDetected:(_Bool)arg1;	// IMP=0x000000000038c8a1
- (_Bool)isLabelVisible;	// IMP=0x000000000038c871
- (_Bool)isExtensionDetected;	// IMP=0x000000000038c868
- (void)setDeleted:(_Bool)arg1;	// IMP=0x000000000038c85f
- (_Bool)isDeleted;	// IMP=0x000000000038c856
- (void)setShowLegendKey:(_Bool)arg1;	// IMP=0x00000000001eb851
- (_Bool)isShowLegendKey;	// IMP=0x000000000024449b
- (void)setShowValue:(_Bool)arg1;	// IMP=0x000000000018a4c8
- (_Bool)isShowValue;	// IMP=0x00000000001ee926
- (void)setShowBubbleSize:(_Bool)arg1;	// IMP=0x000000000038c84d
- (_Bool)isShowBubbleSize;	// IMP=0x000000000038c844
- (void)setShowPercent:(_Bool)arg1;	// IMP=0x000000000018a4bf
- (_Bool)isShowPercent;	// IMP=0x0000000000244480
- (void)setShowSeriesName:(_Bool)arg1;	// IMP=0x00000000001eb85a
- (_Bool)isShowSeriesName;	// IMP=0x0000000000244492
- (void)setShowCategoryName:(_Bool)arg1;	// IMP=0x000000000018a4b6
- (_Bool)isShowCategoryName;	// IMP=0x0000000000244489
- (void)setShowLeaderLines:(_Bool)arg1;	// IMP=0x000000000018a4ad
- (_Bool)hasLeaderLinesGraphics;	// IMP=0x000000000038c836
- (_Bool)isShowLeaderLines;	// IMP=0x000000000038c82d
- (void)setPosition:(int)arg1;	// IMP=0x00000000001eb874
- (int)position;	// IMP=0x0000000000244477
- (void)setIsContentFormatDerivedFromDataPoints:(_Bool)arg1;	// IMP=0x000000000038c824
- (_Bool)isContentFormatDerivedFromDataPoints;	// IMP=0x000000000038c81b
- (void)setContentFormat:(id)arg1;	// IMP=0x0000000000243397
- (id)contentFormat;	// IMP=0x000000000038c782
- (id)initWithResources:(id)arg1;	// IMP=0x000000000018a416
- (id)description;	// IMP=0x000000000038caa2
- (void)setContentFormatId:(unsigned long long)arg1;	// IMP=0x00000000002315d4
- (unsigned long long)contentFormatId;	// IMP=0x000000000038ca98

@end
