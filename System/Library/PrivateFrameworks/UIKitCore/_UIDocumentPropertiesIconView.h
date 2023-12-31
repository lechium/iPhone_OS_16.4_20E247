//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class LPLinkMetadata, LPLinkView, NSLayoutConstraint, UIDocumentProperties;

__attribute__((visibility("hidden")))
@interface _UIDocumentPropertiesIconView : UIView
{
    UIDocumentProperties *_properties;	// 144 = 0x90
    LPLinkView *_linkView;	// 152 = 0x98
    NSLayoutConstraint *_centerXInsetConstraint;	// 160 = 0xa0
    NSLayoutConstraint *_trailingInsetConstraint;	// 168 = 0xa8
    NSLayoutConstraint *_centerYInsetConstraint;	// 176 = 0xb0
    NSLayoutConstraint *_bottomInsetConstraint;	// 184 = 0xb8
    LPLinkMetadata *_metadata;	// 192 = 0xc0
    struct NSDirectionalEdgeInsets _iconInsets;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x0000000001345468
@property(nonatomic) struct NSDirectionalEdgeInsets iconInsets; // @synthesize iconInsets=_iconInsets;
@property(retain, nonatomic) LPLinkMetadata *metadata; // @synthesize metadata=_metadata;
- (id)_preferredSender;	// IMP=0x000000000134538d
- (id)_preferredPresentationSourceItem;	// IMP=0x0000000001345383
- (void)_fireTapAction:(id)arg1;	// IMP=0x0000000001345331
- (void)_updateImage;	// IMP=0x00000000013451ef
- (id)initWithMetadata:(id)arg1;	// IMP=0x00000000013451d8
- (id)initWithProperties:(id)arg1 metadata:(id)arg2;	// IMP=0x0000000001344c2e

@end

