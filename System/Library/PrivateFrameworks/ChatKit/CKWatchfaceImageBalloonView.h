//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPLinkMetadata;

__attribute__((visibility("hidden")))
@interface CKWatchfaceImageBalloonView
{
    _Bool _isIrisAsset;	// 8 = 0x8
    LPLinkMetadata *_metadata;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001fcbfc
@property(retain, nonatomic) LPLinkMetadata *metadata; // @synthesize metadata=_metadata;
- (void)setIsIrisAsset:(_Bool)arg1;	// IMP=0x00000000001fcbdb
- (_Bool)isIrisAsset;	// IMP=0x00000000001fcbcb
- (void)tapGestureRecognized:(id)arg1;	// IMP=0x00000000001fca10
- (void)prepareForDisplay;	// IMP=0x00000000001fc96a
- (void)prepareForReuse;	// IMP=0x00000000001fc920
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3 hasInvisibleInkEffect:(_Bool)arg4;	// IMP=0x00000000000953de

@end
