//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SLSheetImagePreviewView.h"

@class SLURLPreviewGenerator, UIImage, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface SLSheetURLPreviewView : SLSheetImagePreviewView
{
    UIImage *_shadowImage;	// 8 = 0x8
    SLURLPreviewGenerator *_webPreviewGenerator;	// 16 = 0x10
    UIView *_placeholderPreviewView;	// 24 = 0x18
    UIImageView *_placeholderGlyphView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002c518
- (void)_generateAutomaticPreviewForURL:(id)arg1;	// IMP=0x000000000002c2b2
- (_Bool)generatePreviewImageFromAttachments;	// IMP=0x000000000002c190
- (void)setImage:(id)arg1;	// IMP=0x000000000002c0f7
- (void)ensurePlaceholderPreviewImage;	// IMP=0x000000000002bd9b
- (void)layoutSubviews;	// IMP=0x000000000002bb5d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000002b6cd
- (id)init;	// IMP=0x000000000002b69b

@end
