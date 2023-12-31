//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDAnchor, EDComment, EDSheet, EDTextBox, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface EDOfficeArtClient : NSObject
{
    EDSheet *mSheet;	// 8 = 0x8
    id mClientState;	// 16 = 0x10
    EDAnchor *mAnchor;	// 24 = 0x18
    EDTextBox *mTextBox;	// 32 = 0x20
    EDComment *mComment;	// 40 = 0x28
    NSMutableDictionary *mTableModels;	// 48 = 0x30
    struct CGRect mBounds;	// 56 = 0x38
    _Bool mIsBoundsSet;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000003a3478
@property(readonly, copy) NSString *description;
- (_Bool)hasText;	// IMP=0x0000000000147081
- (void)setComment:(id)arg1;	// IMP=0x000000000018d0bf
- (id)comment;	// IMP=0x0000000000144f8f
- (void)setTextBox:(id)arg1;	// IMP=0x00000000001677e3
- (id)textBox;	// IMP=0x0000000000167a06
- (void)setTableModels:(id)arg1;	// IMP=0x00000000003a3429
- (id)tableModels;	// IMP=0x00000000003a341b
- (void)setSheet:(id)arg1;	// IMP=0x000000000017de48
- (id)sheet;	// IMP=0x00000000003a340d
- (struct CGRect)bounds;	// IMP=0x000000000018c345
- (_Bool)hasBounds;	// IMP=0x0000000000143839
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000016962e
- (_Bool)areBoundsSet;	// IMP=0x00000000003a3404
- (void)setAnchor:(id)arg1;	// IMP=0x000000000014046c
- (id)anchor;	// IMP=0x0000000000143842
- (void)setClientState:(id)arg1;	// IMP=0x00000000003a33c0
- (id)clientState;	// IMP=0x00000000003a33b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

