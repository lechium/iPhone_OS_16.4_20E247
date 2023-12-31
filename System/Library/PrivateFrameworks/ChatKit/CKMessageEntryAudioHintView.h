//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface CKMessageEntryAudioHintView : UIView
{
    _Bool _shouldAnimateReferenceButton;	// 8 = 0x8
    UIButton *_referenceButton;	// 16 = 0x10
    UILabel *_hintLabel;	// 24 = 0x18
    UIImageView *_hintImageView;	// 32 = 0x20
    UIButton *_hintButton;	// 40 = 0x28
    struct UIEdgeInsets _coverInsets;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001dbc0d
@property(retain, nonatomic) UIButton *hintButton; // @synthesize hintButton=_hintButton;
@property(retain, nonatomic) UIImageView *hintImageView; // @synthesize hintImageView=_hintImageView;
@property(nonatomic) struct UIEdgeInsets coverInsets; // @synthesize coverInsets=_coverInsets;
@property(nonatomic) _Bool shouldAnimateReferenceButton; // @synthesize shouldAnimateReferenceButton=_shouldAnimateReferenceButton;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UIButton *referenceButton; // @synthesize referenceButton=_referenceButton;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001db624
- (void)layoutSubviews;	// IMP=0x00000000001db390
- (id)initWithReferenceButton:(id)arg1 coverInsets:(struct UIEdgeInsets)arg2;	// IMP=0x00000000001daef2

@end

