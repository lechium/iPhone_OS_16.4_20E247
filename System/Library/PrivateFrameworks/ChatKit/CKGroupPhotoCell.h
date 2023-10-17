//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDetailsCell.h"

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface CKGroupPhotoCell : CKDetailsCell
{
    UIView *_groupView;	// 8 = 0x8
}

+ (_Bool)shouldHighlight;	// IMP=0x00100000002bcc84
+ (id)reuseIdentifier;	// IMP=0x00100000002bcc77
- (void).cxx_destruct;	// IMP=0x00000000002bcff1
@property(retain, nonatomic) UIView *groupView; // @synthesize groupView=_groupView;
- (void)prepareForReuse;	// IMP=0x00000000002bcf81
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000002bcdb9
- (void)layoutSubviews;	// IMP=0x00000000002bcc8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
