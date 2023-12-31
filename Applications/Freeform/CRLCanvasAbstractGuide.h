//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLCanvasLayout;

@interface CRLCanvasAbstractGuide : NSObject
{
    double mOffset;	// 8 = 0x8
    CRLCanvasLayout *mSnappingObjectLayout;	// 16 = 0x10
    struct CGRect mSnappingObjectFrame;	// 24 = 0x18
    _Bool mLocationInvalidated;	// 56 = 0x38
    struct CGColor *mGuideColor;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000109635
@property(nonatomic) struct CGColor *guideColor; // @synthesize guideColor=mGuideColor;
@property(nonatomic) struct CGRect snappingObjectFrame; // @synthesize snappingObjectFrame=mSnappingObjectFrame;
@property(retain, nonatomic) CRLCanvasLayout *snappingObjectLayout; // @synthesize snappingObjectLayout=mSnappingObjectLayout;
@property(nonatomic) double offset; // @synthesize offset=mOffset;
- (void)dealloc;	// IMP=0x00100000001095a3
- (id)description;	// IMP=0x0010000000109579
- (_Bool)canBeSnappedToByEdge:(int)arg1 ofFrame:(struct CGRect)arg2;	// IMP=0x0010000000109571
- (id)init;	// IMP=0x001000000010944d
- (id)renderableWithICC:(id)arg1;	// IMP=0x0010000000109445

@end

