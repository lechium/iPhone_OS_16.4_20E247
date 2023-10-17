//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKTranscriptLabelCell.h"

@class NSAttributedString, UIButton;

__attribute__((visibility("hidden")))
@interface CKTranscriptBlockContactCell : CKTranscriptLabelCell
{
    UIButton *_blockContactButton;	// 8 = 0x8
}

+ (id)blockContactButton;	// IMP=0x0060000000445218
- (void).cxx_destruct;	// IMP=0x0000000000445373
@property(retain, nonatomic) UIButton *blockContactButton; // @synthesize blockContactButton=_blockContactButton;
@property(copy, nonatomic) NSAttributedString *attributedButtonText;
- (void)clearFilters;	// IMP=0x00000000004450b9
- (void)addFilter:(id)arg1;	// IMP=0x0000000000445011
- (void)layoutSubviewsForAlignmentContents;	// IMP=0x0000000000444c5f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000444b90
- (void)configureForChatItem:(id)arg1 context:(id)arg2;	// IMP=0x0000000000364746

@end
