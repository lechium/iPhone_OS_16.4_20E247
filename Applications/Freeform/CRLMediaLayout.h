//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLMutableStroke, _TtC8Freeform12CRLMediaItem;

@interface CRLMediaLayout
{
    struct CGRect _cachedAlignmentFrame;	// 8 = 0x8
    struct {
        unsigned int alignmentFrame:1;
    } _mediaInvalidFlags;	// 40 = 0x28
    CRLMutableStroke *_dynamicStroke;	// 48 = 0x30
    struct CGRect _boundsForStandardKnobs;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000002ed254
@property(nonatomic) struct CGRect boundsForStandardKnobs; // @synthesize boundsForStandardKnobs=_boundsForStandardKnobs;
- (id)commandToResetMediaToRawPixelSize;	// IMP=0x00100000002ed17a
- (id)commandToResetToSize:(struct CGSize)arg1;	// IMP=0x00100000002ed06a
- (void)invalidateAlignmentFrame;	// IMP=0x00100000002ed04d
@property(readonly, nonatomic) struct CGRect alignmentFrameInRoot;
- (struct CGRect)alignmentFrame;	// IMP=0x00100000002eced2
- (struct CGRect)computeAlignmentFrameInRoot:(_Bool)arg1;	// IMP=0x00100000002ecb41
- (void)setGeometry:(id)arg1;	// IMP=0x00100000002ec8f0
- (void)dynamicStrokeWidthChangeDidEnd;	// IMP=0x00100000002ec8cf
- (void)dynamicStrokeWidthUpdateToValue:(double)arg1;	// IMP=0x00100000002ec7e6
- (void)dynamicStrokeWidthChangeDidBegin;	// IMP=0x00100000002ec76a
- (id)stroke;	// IMP=0x00100000002ec6f5
- (_Bool)isStrokeBeingManipulated;	// IMP=0x00100000002ec6e0
@property(readonly, nonatomic) _TtC8Freeform12CRLMediaItem *mediaItem;
- (id)initWithInfo:(id)arg1;	// IMP=0x00100000002ec642
- (void)processChangedProperty:(unsigned long long)arg1;	// IMP=0x00100000002ec5e5
- (_Bool)supportsRotation;	// IMP=0x00100000002ec5dd

@end

