//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLCanvasRep, MISSING_TYPE;

@interface _TtC8Freeform13CRLUnknownRep
{
    MISSING_TYPE *sidePadding;	// 8 = 0x8
    MISSING_TYPE *topPadding;	// 16 = 0x10
}

+ (void)presentUnsupportedItemAlertWithLayerHost:(id)arg1 forGroup:(_Bool)arg2;	// IMP=0x0020000000c648f0
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;	// IMP=0x0040000000c64920
- (_Bool)handleSingleTapAtPoint:(struct CGPoint)arg1 inputType:(long long)arg2;	// IMP=0x0010000000c63a10
@property(nonatomic, readonly) CRLCanvasRep *repForHandleSingleTap;
- (void)drawInContext:(struct CGContext *)arg1;	// IMP=0x0010000000c639b0
@property(nonatomic) _Bool isAccessibilityElement;

@end
