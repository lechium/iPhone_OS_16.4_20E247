//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, _TtC8Freeform11CRLFileItem;

@interface _TtC8Freeform10CRLFileRep
{
    MISSING_TYPE *downloadObserverIdentifier;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_placeholderImage;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00400000008d3430
@property(nonatomic) _Bool isAccessibilityElement;
- (_Bool)handleDoubleTapAtPoint:(struct CGPoint)arg1 inputType:(long long)arg2;	// IMP=0x00100000008d3380
@property(nonatomic, readonly) _TtC8Freeform11CRLFileItem *item;
- (void)processChangedProperty:(unsigned long long)arg1;	// IMP=0x00100000008d3080
- (void)willBeRemoved;	// IMP=0x00100000008d2940
@property(nonatomic, readonly) _Bool shouldShowSelectionHighlight;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;	// IMP=0x00100000008d2410
- (void)enterPreviewMode;	// IMP=0x00100000009a7da0
@property(nonatomic, readonly) _Bool wantsToHandleDoubleTapsWhenLocked;

@end
