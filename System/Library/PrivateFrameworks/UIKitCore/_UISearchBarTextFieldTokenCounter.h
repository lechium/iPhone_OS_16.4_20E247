//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexSet, NSMutableIndexSet, NSTextStorage;

__attribute__((visibility("hidden")))
@interface _UISearchBarTextFieldTokenCounter : NSObject
{
    id _textStorageObservation;	// 8 = 0x8
    NSTextStorage *_textStorage;	// 16 = 0x10
    NSMutableIndexSet *_tokenCharacterIndexes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000eda7de
- (unsigned long long)indexOfTokenAtCharacterIndex:(unsigned long long)arg1;	// IMP=0x0000000000eda70c
- (id)tokenAtCharacterIndex:(unsigned long long)arg1;	// IMP=0x0000000000eda681
- (struct _NSRange)characterRangeForSubrangeOfTextAfterLastToken:(struct _NSRange)arg1;	// IMP=0x0000000000eda601
- (struct _NSRange)subrangeOfTextAfterLastTokenForCharacterRange:(struct _NSRange)arg1;	// IMP=0x0000000000eda5d5
- (struct _NSRange)characterRangeOfTextAfterLastToken;	// IMP=0x0000000000eda2a4
- (unsigned long long)characterIndexForSelectingOrRemovingTokenAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000eda159
- (unsigned long long)characterIndexForInsertingTokenAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000eda078
@property(readonly, nonatomic) struct _NSRange characterRangeOfAllTokens;
@property(readonly, nonatomic) NSIndexSet *tokenCharacterIndexes;
- (void)_handleProcessEditing;	// IMP=0x0000000000ed9f5b
- (void)_addCharacterIndexesOfTokensInRange:(struct _NSRange)arg1 toIndexSet:(id)arg2;	// IMP=0x0000000000ed9e30
- (id)initWithTextStorage:(id)arg1;	// IMP=0x0000000000ed9c3d

@end

